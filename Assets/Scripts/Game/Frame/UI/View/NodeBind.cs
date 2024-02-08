using System.Collections.Generic;
using UnityEngine;

namespace Game.Frame
{
    [DisallowMultipleComponent]
    public class NodeBind : MonoBehaviour
    {
        private Dictionary<string, Component> _dicCom = new Dictionary<string, Component>();
        public T GetCom<T>() where T : Component
        {
            var type = typeof(T);
            if (_dicCom.ContainsKey(type.Name))
            {
                return _dicCom[type.Name] as T;
            }
            else
            {
                var com = transform.GetComponent<T>();
                _dicCom.Add(type.Name, com);
                return com;
            }
        }
    }
}