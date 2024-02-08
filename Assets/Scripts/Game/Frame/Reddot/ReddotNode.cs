using System;
using System.Collections.Generic;
using Game.Main.Extend;
using UnityEngine;

namespace Game.Frame
{
    public delegate void ReddotCallback();
    public delegate void ReddotCallbackParam1<T>(T param);
    public delegate void ReddotCallbackParam2<T1, T2>(T1 param1, T2 param2);
    
    public class ReddotNode
    {
        private readonly string _nodeName;
        private List<ReddotNode> _children = null;
        private ReddotNode _parentNode = null;
        private bool _isLeaf => _children == null;
        private ReddotValueType _value = ReddotValueType.Null;
        private GameObject _reddotObj = null;
        private bool _isDirty = false;
        private ReddotCallback _callback = null;
        public ReddotValueType Value => _value;
        public bool IsLeaf => _isLeaf;
        public bool IsDirty => _isDirty;
        public List<ReddotNode> Children => _children;
        public ReddotNode(string nodeName, ReddotNode parentNode)
        {
            _nodeName = nodeName;
            _parentNode = parentNode;
        }

        public void SetObj(GameObject gameObject)
        {
            _reddotObj = gameObject;
        }

        public void SetDirty(bool dirty)
        {
            _isDirty = dirty;
        }

        public void SetCallBack(ReddotCallback callback)
        {
            _callback = callback;
        }
        
        public void AddChild(ReddotNode childNode)
        {
            if (_children == null)
            {
                _children = new List<ReddotNode>();
            }

            if (_children.Contains(childNode))
            {
                return;
            }
            _children.Add(childNode);
        }

        public void ChangeValue(ReddotValueType valueType = ReddotValueType.Default)
        {
            if (valueType == ReddotValueType.Default)
            {
                ReddotValueType childValue = ReddotValueType.Null; 
                foreach (var childNode in _children)
                {
                    if (childNode.Value == ReddotValueType.Has)
                    {
                        childValue = ReddotValueType.Has;
                        break;
                    }
                }

                _value = childValue;
                UpdateObjActive();
                if (_parentNode == null)
                {
                    return;
                }
                _parentNode.ChangeValue();
            }
            else //如果是叶子节点
            {
                _value = valueType;
                UpdateObjActive();
                if (_parentNode == null)
                {
                    return;
                }
                _parentNode.ChangeValue();
            }
        }

        public void UpdateObjActive()
        {
            if (_reddotObj == null)
            {
                return;
            }
            _reddotObj.ActiveObj(_value == ReddotValueType.Has);
        }
        
        public bool IsChildOf(ReddotNode targetNode, bool firstCall)
        {
            if (_children.Count == 0 && firstCall)
            {
                return false;
            }

            if (this == targetNode)
            {
                return true;
            }

            foreach (var childNode in _children)
            {
                var isChild = IsChildOf(childNode, false);
                if (isChild)
                {
                    return true;
                }
            }

            return false;
        }

        public void Refresh()
        {
            if (!_isDirty)
            {
                return;
            }

            _isDirty = false;
            _callback?.Invoke();
        }
    }
}