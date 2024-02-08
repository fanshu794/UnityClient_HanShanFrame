using System;
using System.Collections.Generic;
using System.Linq;
using Game.Main;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Game.Frame
{
    public enum ViewType
    {
        Null = 0,
        Panel,
        Dialog,
        Message,
        Subview,
        Guide,
        System,
    }
    
    public class UIConfig
    {
        public int uiID = 0;
        public ViewType viewType = ViewType.Null;
        public string path = string.Empty;
        public bool isLobby = false;
        public bool isCache = false;
    }
    
    public class UISystem : BaseSystem 
    {
        private List<int> _listMainPanelOperation = new List<int>();
        private Dictionary<int, LoaderHandler<GameObject>> _dicLoaderHandlers = new Dictionary<int, LoaderHandler<GameObject>>();
        private Dictionary<int, MainViewPresenter> _dicMainPresenters = new Dictionary<int, MainViewPresenter>();
        private Dictionary<ViewType, Transform> _dicTransforms = new Dictionary<ViewType, Transform>();
        private Transform _uiroot = null;
        private bool _isInStackView = false; //是否处于界面栈
        private Stack<int> _stackViewCache = new Stack<int>();
        private readonly Dictionary<ViewType, int> _dicViewToLayerOrder = new Dictionary<ViewType, int>()
        {
            [ViewType.Panel] = 1000,
            [ViewType.Dialog] = 1000,
            [ViewType.Message] = 1400,
            [ViewType.Guide] = 1600,
            [ViewType.System] = 1800,
        };
        

        private const int DELTA_LAYER = 10;

        private const string _uiRootPath = "UIRoot";
        
        public UISystem()
        {
            if (_uiroot == null)
            {
                _uiroot = HsClient.Mediator.GetSystem<ResourceSystem>().EditLoad<GameObject>(_uiRootPath).transform;
                _uiroot = GameObject.Instantiate(_uiroot);
                _uiroot.position = Vector3.zero;
                _dicTransforms.Add(ViewType.Panel, _uiroot.Find("Canvas/MainView"));
                _dicTransforms.Add(ViewType.Dialog, _uiroot.Find("Canvas/MainView"));
                _dicTransforms.Add(ViewType.Message, _uiroot.Find("Canvas/MessageView"));
                _dicTransforms.Add(ViewType.Guide, _uiroot.Find("Canvas/GuideView"));
                _dicTransforms.Add(ViewType.System, _uiroot.Find("Canvas/SystemView"));
            }
        }
        
        public override void RegisterEvent()
        {
        }
        
        public override void UnRegisterEvent()
        {
        }

        public override void Dispose()
        {
            
        }

        public void Test<T>() where T : MainViewPresenter
        {
            var type = typeof(T);
            var presenter = Activator.CreateInstance(type) as T;
        }

        #region 不同类型界面打开方法
        public void ShowMainPresenter<T>(UIConfig uiConfig, BaseUIParam uiParam = null, bool isAsync = false) where T : MainViewPresenter, new()
        {
            if (uiConfig.viewType != ViewType.Panel && uiConfig.viewType != ViewType.Dialog)
            {
                GameLog.Error("ViewType Error");
                return;
            }
            var uiid = uiConfig.uiID;
            int curTopLayer = GetCurTopLayer(uiConfig.viewType) + DELTA_LAYER;
            if (_dicMainPresenters.TryGetValue(uiid, out var mainViewPresenter))
            {
                //是否是聚焦界面
                if (mainViewPresenter.IsFocus)
                {
                    return;
                }
                OnOpenMainPresenter(uiConfig);
                //移动到最高层
                SetAsTopLayer(mainViewPresenter, curTopLayer);
                mainViewPresenter.SetParam(uiParam);
                mainViewPresenter.Focus(true);
                AddUniqueOperationId(uiid);
            }
            else
            {
                if (_dicLoaderHandlers.TryGetValue(uiid, out var handler))
                {
                    //说明界面正在打开中
                    return;
                }
                else
                {
                    OnOpenMainPresenter(uiConfig);
                    var type = typeof(T);
                    var presenter = Activator.CreateInstance(type) as T;
                    if (presenter == null)
                    {
                        GameLog.Error("LoadSubviewPresenter Error");
                        return;
                    }
                    _dicMainPresenters.Add(uiid, presenter);
                    if (isAsync)
                    {
                        AddUniqueOperationId(uiid);
                        handler = HsClient.Mediator.GetSystem<ResourceSystem>().LoadAsync<GameObject>(uiConfig.path, delegate(Object o)
                        {
                            
                            InitAndShowMainView(presenter, uiConfig, GameObject.Instantiate(o) as GameObject, uiParam);
                            SetAsTopLayer(presenter, curTopLayer);
                        });
                        presenter.Handler = handler;
                        _dicLoaderHandlers.Add(uiid, handler);
                    }
                    else
                    {
                        handler = HsClient.Mediator.GetSystem<ResourceSystem>().LoadSync<GameObject>(uiConfig.path);
                        presenter.Handler = handler;
                        _dicLoaderHandlers.Add(uiid, handler);
                        AddUniqueOperationId(uiid);
                        InitAndShowMainView(presenter, uiConfig, GameObject.Instantiate(handler.asset as GameObject), uiParam);
                        SetAsTopLayer(presenter, curTopLayer);
                    }
                }
            }

            //如果回到了主界面，需要清空操作栈
            if (uiConfig.isLobby)
            {
                _listMainPanelOperation.Clear();
            }
        }

        private void AddUniqueOperationId(int uiid)
        {
            if (_listMainPanelOperation.Contains(uiid))
            {
                _listMainPanelOperation.Remove(uiid);
            }
            _listMainPanelOperation.Add(uiid);
        }

        /// <summary>
        /// 打开子界面，gameObject已经存在
        /// </summary>
        /// <param name="self">子界面gameObject</param>
        /// <param name="mainPresenter">父级界面</param>
        /// <param name="uiParam">界面自定义参数</param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public void ShowSubviewPresenter<T>(GameObject self, ref Dictionary<string, SubviewPresenter> cache, BaseUIParam uiParam = null) where T : SubviewPresenter, new()
        {
            T presenter = null;
            if (cache.ContainsKey(self.name))
            {
                presenter = cache[self.name] as T;
                if (presenter == null)
                {
                    GameLog.Error("presenter == null");
                    return;
                }
                presenter.SetParam(uiParam);
                presenter.SetData();
                presenter.OnRefreshAll();
            }
            else
            {
                var type = typeof(T);
                presenter = Activator.CreateInstance(type) as T;
                if (presenter == null)
                {
                    GameLog.Error("ShowSubviewPresenter Error");
                    return;
                }
                cache.Add(self.name, presenter);
                View view = new View();
                view.UIRoot = self;
                view.InitNodeBind();
                presenter.View = view;
                presenter.OnCreate();
                presenter.SetParam(uiParam);
                presenter.SetData();
                presenter.OnRefreshAll();
                presenter.Focus(false);
            }
        }

        public void LoadSubviewPresenter<T>(
            string nodeName, 
            UIConfig uiConfig, 
            ref Dictionary<string, SubviewPresenter> cache, 
            GameObject parentRoot, 
            BaseUIParam uiParam = null, 
            bool isAsync = false) where T : SubviewPresenter, new()
        {
            T presenter = null;
            if (cache.ContainsKey(nodeName))
            {
                presenter = cache[nodeName] as T;
                //如果还未加载完毕，用最新的uiParam覆盖
                if (!presenter!.Handler.IsLoaded())
                {
                    presenter.SetParam(uiParam);
                }
            }
            else
            {
                var type = typeof(T);
                presenter = Activator.CreateInstance(type) as T;
                if (presenter == null)
                {
                    GameLog.Error("LoadSubviewPresenter Error");
                    return;
                }
                var uiid = uiConfig.uiID;
                presenter.UIConfig = uiConfig;
                cache.Add(nodeName, presenter);
                LoaderHandler<GameObject> handler = null;
                if (isAsync)
                {
                    handler = HsClient.Mediator.GetSystem<ResourceSystem>().LoadAsync<GameObject>(uiConfig.path, delegate(Object o)
                    {
                        if (!_dicLoaderHandlers.ContainsKey(uiid))
                        {
                            //子界面未加载完成，此时关闭父级界面。这种情况下会走进这里
                            return;
                        }
                        InitAndShowSubview(presenter, uiConfig, GameObject.Instantiate(o) as GameObject, parentRoot.transform, uiParam);
                    });
                    presenter.Handler = handler;
                    _dicLoaderHandlers.Add(uiid, handler);
                }
                else
                {
                    handler = HsClient.Mediator.GetSystem<ResourceSystem>().LoadSync<GameObject>(uiConfig.path);
                    presenter.Handler = handler;
                    _dicLoaderHandlers.Add(uiid, handler);
                    InitAndShowSubview(presenter, uiConfig, GameObject.Instantiate(handler.asset as GameObject), parentRoot.transform, uiParam);
                }
            }
        }

        #endregion

        public void RemoveLoaderHandler(int uiid)
        {
            if (_dicLoaderHandlers.ContainsKey(uiid))
            {
                _dicLoaderHandlers.Remove(uiid);
            }
            else
            {
                GameLog.Error("RemoveLoaderHandler Error " + uiid);
            }
        }

        public void CloseCur()
        {
            if (_listMainPanelOperation.Count == 0)
            {
                GameLog.Error("CloseCur Error1");
                return;
            }
            var lastUiid = _listMainPanelOperation.Last();
            _listMainPanelOperation.RemoveAt(_listMainPanelOperation.Count - 1);
            if (_dicMainPresenters.TryGetValue(lastUiid, out var lastPresenter))
            {
                DisposePresenterByUIID(lastPresenter.UIConfig);
            }
            else
            {
                GameLog.Error("CloseCur Error2");
                return;
            }
            while (_listMainPanelOperation.Count > 0 && !_dicMainPresenters.ContainsKey(_listMainPanelOperation.Last()))
            {
                _listMainPanelOperation.RemoveAt(_listMainPanelOperation.Count - 1);
            }
           
            OnCloseMainPresenter(lastPresenter.UIConfig);
        }

        public void CloseSelf(MainViewPresenter self)
        {
            if (_listMainPanelOperation.Count == 0)
            {
                GameLog.Error("CloseSelf Error1");
                return;
            }

            if (!_listMainPanelOperation.Contains(self.UIConfig.uiID))
            {
                GameLog.Error("CloseSelf Error2");
                return;
            }

            if (_listMainPanelOperation.Last() == self.UIConfig.uiID)
            {
                CloseCur();
                return;
            }

            _listMainPanelOperation.Remove(self.UIConfig.uiID);
            DisposePresenterByUIID(self.UIConfig);
        }

        /// <summary>
        /// Panel类型遵循将已有界面都隐藏的规则，Dialog类型遵循直接覆盖规则
        /// </summary>
        /// <param name="openUiConfig"></param>
        private void OnOpenMainPresenter(UIConfig openUiConfig)
        {
            if (openUiConfig.viewType != ViewType.Panel && openUiConfig.viewType != ViewType.Dialog)
            {
                GameLog.Error("ViewType Error");
                return;
            }
            foreach (var keyVal in _dicMainPresenters)
            {
                //如果打开的界面是全屏不透明
                if (openUiConfig.viewType == ViewType.Panel)
                {
                    keyVal.Value.Active(false);
                }
                keyVal.Value.LostFocus();
            }
        }

        /// <summary>
        /// 关闭当前界面后的显示策略：从操作栈栈顶开始遍历，只要遇到panel立即停止遍历，并将panel显示，遇到dialog将其显示，继续遍历。显示的第一个界面，调用OnFocus
        /// 因为OnFocus只能有一个界面
        /// </summary>
        /// <param name="closeUIConfig"></param>
        private void OnCloseMainPresenter(UIConfig closeUIConfig)
        {
            if (closeUIConfig.viewType != ViewType.Panel && closeUIConfig.viewType != ViewType.Dialog)
            {
                GameLog.Error("ViewType Error");
                return;
            }

            if (closeUIConfig.viewType == ViewType.Panel)
            {
                bool bFirstPresenter = true;
                for (int i = _listMainPanelOperation.Count - 1; i >= 0; i--)
                {
                    var uiid = _listMainPanelOperation.ElementAt(i);
                    var presenter = _dicMainPresenters[uiid];
                    if (presenter.UIConfig.viewType == ViewType.Panel)
                    {
                        if (bFirstPresenter)
                        {
                            presenter.Focus(true);
                            break;
                        }
                        else
                        {
                            presenter.Active(true);
                        }
                    }
                    else
                    {
                        //从栈顶遍历到栈底，遇到的第一个dialog，使其onfocus
                        if (bFirstPresenter)
                        {
                            presenter.Focus(true);
                            bFirstPresenter = false;
                        }
                        else
                        {
                            presenter.Active(true);
                        }
                    }
                }
            }
            else
            {
                if (_listMainPanelOperation.Count == 0)
                {
                    return;
                }
                var uiid = _listMainPanelOperation.Last();
                _dicMainPresenters[uiid].Focus(true);
            }
        }

        private void SetAsTopLayer(MainViewPresenter presenter, int topOrder)
        {
            presenter.View.SetCanvasOrder(topOrder);
            presenter.SetAsLastSlibingIndex();
        }

        #region 舍弃
        /// <summary>
        /// 界面栈只会处理PanelPresenter(一级界面)和DialogPresenter(二级界面)，包含了大部分的业务逻辑界面
        /// </summary>
        /// <param name="uiid"></param>
        /// <param name="uiConfig"></param>
        /// <returns></returns>
        // private bool CheckAndStartStackView(int uiid, UIConfig uiConfig)
        // {
        //     if (_stackMainPanelOperation.Count == 0)
        //     {
        //         return false;
        //     }
        //
        //     var lastUIID = _stackMainPanelOperation.Peek();
        //     if (_dicMainPresenters.TryGetValue(lastUIID, out var lastPresenter))
        //     {
        //         if (lastPresenter.UIConfig.viewType == ViewType.Dialog && uiConfig.viewType == ViewType.Panel)
        //         {
        //             if (_isInStackView)
        //             {
        //                 DisposeStackView();
        //             }
        //
        //             _isInStackView = true;
        //             if (_stackViewCache.Count > 0)
        //             {
        //                 GameLog.Error("CheckAndStartStackView error");
        //                 return false;
        //             }
        //             _stackViewCache.Clear();
        //             //将当前显示的界面入栈并隐藏
        //             foreach (var presenter in _dicMainPresenters.Values)
        //             {
        //                 presenter.Active(false);
        //                 _stackViewCache.Push(presenter.UIConfig.uiID);
        //             }
        //
        //             return true;
        //         }
        //         else
        //         {
        //             return false;
        //         }
        //     }
        //     else
        //     {
        //         //理论上不会走到这
        //         GameLog.Error("CheckAndStartStackView error");
        //         return false;
        //     }
        // }

        // private void DisposeStackView()
        // {
        //     while (_stackViewCache.Count > 0)
        //     {
        //         var uiid = _stackViewCache.Pop();
        //         if (_dicMainPresenters.TryGetValue(uiid, out var presenter))
        //         {
        //             if (presenter.IsLobby())
        //             {
        //                 presenter.Active(true);
        //             }
        //             else
        //             {
        //                 DisposePresenterByUIID(presenter.UIConfig);
        //             }
        //         }
        //         else
        //         {
        //             GameLog.Error("DisposeStackView error");
        //         }
        //     }
        // }
        #endregion
        
        private void InitAndShowMainView(BasePresenter presenter, UIConfig uiConfig, GameObject obj, BaseUIParam uiParam = null)
        {
            obj.transform.SetParent(_dicTransforms[uiConfig.viewType]);
            var rect = obj.transform.GetComponent<RectTransform>();
            rect.anchoredPosition = Vector2.zero;
            rect.sizeDelta = Vector2.zero;
            rect.localPosition = Vector3.zero;
            rect.localScale = Vector3.one;
            View view = new View();
            view.UIRoot = obj;
            presenter.UIConfig = uiConfig;
            presenter.View = view;
            presenter.View.InitNodeBind();
            presenter.OnCreate();
            presenter.SetParam(uiParam);
            presenter.SetData();
            presenter.OnRefreshAll();
            presenter.Focus(false);
        }
        
        private void InitAndShowSubview(BasePresenter presenter, UIConfig uiConfig, GameObject obj, Transform parentRoot, BaseUIParam uiParam = null)
        {
            obj.transform.SetParent(parentRoot);
            var rect = obj.transform.GetComponent<RectTransform>();
            rect.anchoredPosition = Vector2.zero;
            rect.sizeDelta = Vector2.zero;
            rect.localPosition = Vector3.zero;
            rect.localScale = Vector3.one;
            View view = new View();
            view.UIRoot = obj;
            presenter.UIConfig = uiConfig;
            presenter.View = view;
            presenter.View.InitNodeBind();
            presenter.OnCreate();
            presenter.SetParam(uiParam);
            presenter.SetData();
            presenter.OnRefreshAll();
            presenter.Focus(false);
        }

        private void DisposePresenterByUIID(UIConfig uiConfig)
        {
            BasePresenter prensenter = GetExistPresenter(uiConfig);
            if (prensenter == null)
            {
                GameLog.Error("DisposePresenterByUIID error1");
                return;
            }
            prensenter.Active(false);
            if (uiConfig.isCache)
            {
                return;
            }
            prensenter.Dispose();
            RemoveExistPresenter(uiConfig);
            _dicLoaderHandlers.Remove(uiConfig.uiID);
        }

        private BasePresenter GetExistPresenter(UIConfig uiConfig)
        {
            switch (uiConfig.viewType)
            {
                case ViewType.Panel:
                
                case ViewType.Dialog:
                {
                    if (_dicMainPresenters.TryGetValue(uiConfig.uiID, out var presenter))
                    {
                        return presenter;
                    }
                    else
                    {
                        return null;
                    }
                }
                case ViewType.Message:
                {

                    return null;
                }
                case ViewType.Guide:
                {
                    return null;
                }
                case ViewType.System:
                {
                    return null;
                }
                default:
                {
                    return null;
                }
            }
        }

        private void RemoveExistPresenter(UIConfig uiConfig)
        {
            switch (uiConfig.viewType)
            {
                case ViewType.Panel:
                
                case ViewType.Dialog:
                {
                    _dicMainPresenters.Remove(uiConfig.uiID);
                    return;
                }
                case ViewType.Message:
                {

                    return;
                }
                case ViewType.Guide:
                {
                    return;
                }
                case ViewType.System:
                {
                    return;
                }
                default:
                {
                    return;
                }
            }
        }

        /// <summary>
        /// 获得某个界面类型当前最高layer
        /// </summary>
        /// <param name="viewType">界面类型</param>
        /// <returns></returns>
        private int GetCurTopLayer(ViewType viewType)
        {
            if (!_dicTransforms.ContainsKey(viewType))
            {
                GameLog.Error($"没有该类型 {viewType}");
                return 0;
            }

            var trs = _dicTransforms[viewType];
            if (trs.childCount == 0)
            {
                return _dicViewToLayerOrder[viewType];
            }

            var canvas = trs.GetChild(trs.childCount - 1).GetComponent<Canvas>();
            if (canvas == null)
            {
                GameLog.Error("找不到canvas");
                return 0;
            }

            return canvas.sortingOrder;
        }
    }
}