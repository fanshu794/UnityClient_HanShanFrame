using System;
using System.Collections.Generic;
using System.Text;
using Game.Frame;
using Game.Main;
using UnityEngine;

namespace Game.Frame
{
    public enum ReddotValueType
    {
        Default = -1,
        Null,
        Has
    }
    
    public class ReddotSystem : BaseSystem
    {
        private Dictionary<string, ReddotNode> _dicAllNode;
        private const char SPLIT_TAG = '/';
        private StringBuilder _sb;
        private ReddotNode _rootNode;
        
        public ReddotSystem()
        {
            _dicAllNode = new Dictionary<string, ReddotNode>();
            _sb = new StringBuilder();
            _rootNode = new ReddotNode("Root", null);
        }
        
        public void InitReddotNode(string path, ReddotCallback callback)
        {
            if (callback == null)
            {
                GameLog.Error("callback is null");
                return;
            }

            ReddotNode node = null;
            if (_dicAllNode.TryGetValue(path, out node) && node.IsDirty)
            {
                callback.Invoke();
                node.SetDirty(false);
            }
            else
            {
                node = CreateNode(path);
            }
            node.SetCallBack(callback);
        }
        
        public void InitReddotNode<T>(string path, ReddotCallbackParam1<T> callback, T param1)
        {
            if (callback == null)
            {
                GameLog.Error("callback is null");
                return;
            }
            ReddotNode node = null;
            if (_dicAllNode.TryGetValue(path, out node) && node.IsDirty)
            {
                callback.Invoke(param1);
                node.SetDirty(false);
            }
            else
            {
                node = CreateNode(path);
            }
            node.SetCallBack(() =>
            {
                callback.Invoke(param1);
            });
        }
        
        public void InitReddotNode<T1, T2>(string path, ReddotCallbackParam2<T1, T2> callback, T1 param1, T2 param2)
        {
            if (callback == null)
            {
                GameLog.Error("callback is null");
                return;
            }
            ReddotNode node = null;
            if (_dicAllNode.TryGetValue(path, out node) && node.IsDirty)
            {
                callback.Invoke(param1, param2);
                node.SetDirty(false);
            }
            else
            {
                node = CreateNode(path);
            }
            node.SetCallBack(() =>
            {
                callback.Invoke(param1, param2);
            });
        }

        public ReddotNode GetNode(string path)
        {
            if (_dicAllNode.TryGetValue(path, out var node))
            {
                return node;
            }
            else
            {
                GameLog.Error($"node 不存在 {path}");
                return null;
            }
        }

        public void ChangeValue(string path, ReddotValueType valueType)
        {
            if (valueType == ReddotValueType.Default)
            {
                GameLog.Error("valueType Error");
                return;
            }
            var node = GetNode(path);
            if (node == null)
            {
                return;
            }

            if (!node.IsLeaf)
            {
                GameLog.Error("非叶子节点");
                return;
            }
            node.ChangeValue(valueType);
        }

        public void BindObj(string path, GameObject gameObject)
        {
            var node = GetNode(path);
            if (node == null)
            {
                return;
            }

            if (gameObject == null)
            {
                GameLog.Error("gameObject is null");
                return;
            }
            
            node.SetObj(gameObject);
            node.UpdateObjActive();
        }
        
        public void SetDirty(string path)
        {
            ReddotNode node = null;
            //由于SetDirty也是在数据层执行 ，InitReddotNode也是在数据层执行，为了解决时许问题，所以做了GetOrAdd逻辑
            if (_dicAllNode.ContainsKey(path))
            {
                node = GetNode(path);
            }
            else
            {
                node = CreateNode(path);
            }
            if (node == null)
            {
                return;
            }
            if (!node.IsLeaf)
            {
                GameLog.Error("非叶子节点不能SetDirty");
                return;
            }

            node.SetDirty(true);
            HsClient.EventDispatch.TriggerEvent((int)GameEventEnum.OnSetReddotDirty);
        }

        public void TraverseRefreshTree(ReddotNode node)
        {
            if (node.IsLeaf)
            {
                node.Refresh();
                return;
            }

            foreach (var nodeChild in node.Children)
            {
                TraverseRefreshTree(nodeChild);
            }
        }

        private ReddotNode CreateNode(string path)
        {
            if (_dicAllNode.TryGetValue(path, out var targetNode))
            {
                GameLog.Error($"Node已经存在{path}, 请不要调用CreateNode");
                return targetNode;
            }
            else
            {
                if (path[path.Length - 1] == SPLIT_TAG)
                {
                    GameLog.Error($"路径配置错误，不能以{SPLIT_TAG}结尾");
                    return null;
                }

                _sb.Clear();
                ReddotNode curNode = _rootNode;
                for (int i = 0; i < path.Length; i++)
                {
                    if (path[i] == SPLIT_TAG)
                    {
                        var nodeName = _sb.ToString();
                        if (_dicAllNode.TryGetValue(nodeName, out var childNode))
                        {
                            curNode = childNode;
                        }
                        else
                        {
                            //创建
                            childNode = new ReddotNode(nodeName, curNode);
                            curNode.AddChild(childNode);
                            _dicAllNode.Add(nodeName, childNode);
                            curNode = childNode;
                        }
                        _sb.Append(SPLIT_TAG);
                    }
                    else 
                    {
                        _sb.Append(path[i]);
                    }
                }

                ReddotNode leafNode = null;
                //创建
                leafNode = new ReddotNode(path, curNode);
                curNode.AddChild(leafNode);
                _dicAllNode.Add(path, leafNode);
                return leafNode;
            }
        }

        public override void Dispose()
        {
            base.Dispose();
            _dicAllNode.Clear();
            _dicAllNode = null;
            _rootNode = null;
            _sb = null;
        }
    }
}