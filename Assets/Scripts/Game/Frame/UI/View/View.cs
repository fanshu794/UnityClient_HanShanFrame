using System;
using System.Collections.Generic;
using Game.Main.Extend;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Frame
{
    public class View : IView
    {
        private GameObject _uiRoot = null;
        private Dictionary<string, NodeBind> _dicNodeBind = new Dictionary<string, NodeBind>();
        private bool _isInit = false;
        public GameObject UIRoot
        {
            get
            {
                if (_uiRoot == null)
                {
                    GameLog.Error("_uiRoot is null");
                    return null;
                }

                return _uiRoot;
            }
            set => _uiRoot = value;
        }
        
        public void InitNodeBind()
        {
            if (_isInit)
            {
                return;
            }
            if (_uiRoot == null)
            {
                GameLog.Error("_uiRoot's asset is null");
                return;
            }

            Dictionary<int, bool> dicIgnoreCache = new Dictionary<int, bool>(5);
            var coms = _uiRoot.GetComponentsInChildren<NodeBind>();
            foreach (var com in coms)
            {
                if (com.transform.GetInstanceID() != _uiRoot.GetInstanceID() && com.transform.GetComponent<IgnoreChildrenNode>())
                {
                    dicIgnoreCache.Add(com.transform.GetInstanceID(), true);
                    _dicNodeBind.Add(com.name, com);
                    continue;
                }
                if (CheckParentIgnore(com.transform, dicIgnoreCache))
                {
                    continue;
                }

                if (_dicNodeBind.ContainsKey(com.name))
                {
                    GameLog.Error("节点名字重复");
                    return;
                }
                _dicNodeBind.Add(com.name, com);
            }

            _isInit = true;
        }

        private bool CheckParentIgnore(Transform selfTrs, Dictionary<int, bool> dicIgnoreCache)
        {
            Transform curTrs = selfTrs;
            if (curTrs.parent.GetInstanceID() == _uiRoot.transform.GetInstanceID())
            {
                return false;
            }
            while (curTrs.parent)
            {
                if (dicIgnoreCache.ContainsKey(curTrs.parent.GetInstanceID()))
                {
                    dicIgnoreCache.Add(curTrs.GetInstanceID(), true);
                    return true;
                }

                curTrs = curTrs.parent;
                if (curTrs.parent.GetInstanceID() == _uiRoot.transform.GetInstanceID())
                {
                    break;
                }
            }
            return false;
        }

        public void SetCanvasOrder(int order)
        {
            if (_uiRoot == null)
            {
                return;
            }

            var canvas = _uiRoot.GetAddComponent<Canvas>();
            if (canvas == null)
            {
                GameLog.Error("canvas is null");
                return;
            }

            canvas.overrideSorting = true;
            canvas.sortingOrder = order;
            _uiRoot.GetAddComponent<GraphicRaycaster>();
        }

        public T GetCom<T>(string nodeName) where T : Component
        {
            if (_dicNodeBind.ContainsKey(nodeName))
            {
                return _dicNodeBind[nodeName].GetCom<T>();
            }
            else
            {
                GameLog.Error("node not exits : " + nodeName);
                return null;
            }
        }

        public bool IsActive()
        {
            if (_uiRoot == null)
            {
                return false;
            }

            return _uiRoot.activeSelf;
        }

        public void Active(bool bActive)
        {
            if (_uiRoot == null)
            {
                return;
            }

            if (_uiRoot.activeSelf == bActive)
            {
                return;
            }
            _uiRoot.SetActive(bActive);
        }

        public bool IsLastSlibingIndex()
        {
            if (_uiRoot == null)
            {
                return false;
            }
            return _uiRoot.transform.GetSiblingIndex() == _uiRoot.transform.parent.childCount - 1;
        }
        
        public void SetAsLastSlibingIndex()
        {
            if (_uiRoot == null)
            {
                return;
            }

            _uiRoot.transform.SetAsLastSibling();
        }
    }
}