using System;
using System.Collections.Generic;
using Game.Main;
using UnityEngine;
using UnityEngine.Events;

namespace Game.Frame
{
    public abstract class BasePresenter: BaseColleage
    {
        private View _view = null;
        private bool _isCache = false;
        private Dictionary<string, ReddotNode> _dicReddotNodes = null;
        private BaseUIParam _uiParam = null;
        private List<BaseModel> _linkModelList = null;
        protected Dictionary<string, SubviewPresenter> _dicSubviewPresenters = null;
        protected bool _isFocus = false;
        public UIConfig UIConfig { get; set; }
        public LoaderHandler<GameObject> Handler { get; set; }
        public bool IsFocus => _isFocus;
        public View View
        {
            get
            {
                if (_view == null)
                {
                    GameLog.Error("view is null");
                    return null;
                }

                return _view;
            }
            set => _view = value;
        }

        public T GetCom<T>(string nodeName) where T : Component
        {
            return View.GetCom<T>(nodeName);
        }

        public abstract void OnCreate();
        public abstract void OnRefreshAll();
        public abstract void OnFocusRefresh();
        public abstract void SetData();
        public abstract void OnFocus();
        public abstract void OnLostFocus();

        public abstract void OnDispose();
        public abstract void LinkModels();
        public bool IsActive()
        {
            if (_view == null)
            {
                return false;
            }

            return _view.IsActive();
        }

        protected void LinkModel<T>() where T : BaseModel
        {
            if (_linkModelList == null)
            {
                _linkModelList = new List<BaseModel>();
            }
            var model = HsClient.Mediator.GetModel<T>();
            if (model != null)
            {
                model.AddUICache(_view.UIRoot.GetInstanceID());
            }

            if (!_linkModelList.Contains(model))
            {
                _linkModelList.Add(model);
            }
        }

        private void UnlinkModels()
        {
            if (_linkModelList != null)
            {
                foreach (var model in _linkModelList)
                {
                    model.RemoveUICache(_view.UIRoot.GetInstanceID());
                }
                _linkModelList.Clear();
            }
        }

        public void Focus(bool isRefocus)
        {
            Active(true);
            RegisterEvent();
            HsClient.EventDispatch.AddEvent((int)GameEventEnum.OnSetReddotDirty, OnSetReddotDirty);
            //先刷新自己的红点
            OnSetReddotDirty();

            //重新激活的界面，需要走一遍增量刷新的逻辑，因为unFocus的时候注销了事件注册
            if (isRefocus && _linkModelList != null)
            {
                foreach (var model in _linkModelList)
                {
                    if (model.IsUICacheDirty(_view.UIRoot.GetInstanceID()))
                    {
                        SetData();
                        OnFocusRefresh();
                        break;
                    }
                }
            }
            UnlinkModels();
            if (_dicSubviewPresenters != null)
            {
                foreach (var subviewPresenter in _dicSubviewPresenters.Values)
                {
                    subviewPresenter.Focus(isRefocus);
                }
            }
            OnFocus();
            _isFocus = true;
        }
        
        public void LostFocus()
        {
            if (!_isFocus)
            {
                return;
            }
            UnRegisterEvent();
            HsClient.EventDispatch.RemoveEvent((int)GameEventEnum.OnSetReddotDirty, OnSetReddotDirty);
            LinkModels();
            if (_dicSubviewPresenters != null)
            {
                foreach (var subviewPresenter in _dicSubviewPresenters.Values)
                {
                    subviewPresenter.LostFocus();
                }
            }
            OnLostFocus();
            _isFocus = false;
        }

        public bool IsLastSlibingIndex()
        {
            if (_view == null)
            {
                return false;
            }
            return _view.IsLastSlibingIndex();
        }
        
        public void SetAsLastSlibingIndex()
        {
            if (_view == null)
            {
                return;
            }
            _view.SetAsLastSlibingIndex();
        }

        public void Active(bool bActive)
        {
            if (_view == null)
            {
                return;
            }
            _view.Active(bActive);
        }

        public void SetParam(BaseUIParam param)
        {
            _uiParam = param;
        }

        protected T GetParam<T>() where T : BaseUIParam
        {
            return _uiParam as T;
        }

        /// <summary>
        /// 监听红点设置脏位事件，如果当前Focus界面关联的红点包含脏位红点或者是脏位红点的父节点，那么立即刷新脏位红点
        /// </summary>
        /// <param name="dirtyPath"></param>
        private void OnSetReddotDirty()
        {
            if (_dicReddotNodes == null)
            {
                return;
            }

            if (!_isFocus)
            {
                return;
            }
            //遍历关联的红点的子节点是否需要刷新
            foreach (var keyVal in _dicReddotNodes)
            {
                HsClient.Mediator.GetSystem<ReddotSystem>().TraverseRefreshTree(keyVal.Value);
            }
        }
        
        public void BindReddot(string path, GameObject gameObject)
        {
            if (gameObject == null)
            {
                return;
            }

            if (_dicReddotNodes == null)
            {
                _dicReddotNodes = new Dictionary<string, ReddotNode>();
            }

            if (_dicReddotNodes.TryGetValue(path, out var reddotNode))
            {
                reddotNode.SetObj(gameObject);
            }
            else
            {
                var sys = HsClient.Mediator.GetSystem<ReddotSystem>();
                sys.BindObj(path, gameObject);
                reddotNode = sys.GetNode(path);
                _dicReddotNodes.Add(path, reddotNode);
            }
        }

        /// <summary>
        /// 绑定界面中的子界面，调用后，会刷新子界面
        /// </summary>
        /// <param name="suvObj">子界面节点，静态绑定时不为空，动态绑定时为空</param>
        /// <param name="nodeName">子界面名字，静态绑定时为空字符串，动态绑定时不为空</param>
        /// <param name="param">子界面参数</param>
        /// <param name="uiConfig">子界面UI配置，静态绑定时为空，动态绑定时不为空</param>
        /// <param name="parent">父节点，静态绑定时为空，动态绑定时不为空</param>
        /// <param name="isAsync">同步异步加载？，静态绑定时为空，动态绑定时不为空</param>

        /// <typeparam name="T"></typeparam>
        protected void BindSubviewPresenter<T>(GameObject suvObj = null, string nodeName = "", UIConfig uiConfig = null, GameObject parent = null, bool isAsync = false, BaseUIParam param = null) where T : SubviewPresenter, new()
        {
            if (_dicSubviewPresenters == null)
            {
                _dicSubviewPresenters = new Dictionary<string, SubviewPresenter>();
            }

            if (suvObj == null && nodeName.Length == 0)
            {
                GameLog.Error("Param Error");
                return;
            }

            if (suvObj != null)
            {
                HsClient.Mediator.GetSystem<UISystem>().ShowSubviewPresenter<T>(suvObj, ref _dicSubviewPresenters, param);
            }
            else
            {
                HsClient.Mediator.GetSystem<UISystem>().LoadSubviewPresenter<T>(nodeName, uiConfig, ref _dicSubviewPresenters, parent, param, isAsync);
            }
        }

        protected void AddButtonEvent(string nodeName, UnityAction<GameObject> action, bool isLongClick = false)
        {
             var btn = GetCom<HsButton>(nodeName);
             if (!btn)
             {
                 return;
             }

             if (isLongClick)
             {
                 btn.AddLongClick(action);
             }
             else
             {
                 btn.AddClick(action);
             }
        }

        protected void SetImage(string nodeName, string path)
        {
            var img = GetCom<HsImage>(nodeName);
            if (!img)
            {
                return;
            }
            img.SetImage(path);
        }
        
        protected void SetImage(string nodeName, Sprite sprite)
        {
            var img = GetCom<HsImage>(nodeName);
            if (!img)
            {
                return;
            }
            img.SetImage(sprite);
        }

        public override void Dispose()
        {
            if (!_isCache)
            {
                OnDispose();
                if (_dicReddotNodes != null)
                {
                    _dicReddotNodes.Clear();
                    _dicReddotNodes = null;
                }
                if (_dicSubviewPresenters != null)
                {
                    foreach (var keyVal in _dicSubviewPresenters)
                    {
                        keyVal.Value.Dispose();
                    }
                    _dicSubviewPresenters.Clear();
                    _dicSubviewPresenters = null;
                }
                UnlinkModels();
                _linkModelList = null;
                if (_view != null && _view.UIRoot != null)
                {
                    GameObject.Destroy(_view.UIRoot);
                }
                if (Handler != null)
                {
                    Handler.Unload();
                }

                _view = null;
            }
        }
    }
}