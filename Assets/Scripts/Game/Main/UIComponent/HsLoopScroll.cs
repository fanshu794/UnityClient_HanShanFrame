using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Main
{
    [RequireComponent(typeof(UnityEngine.UI.LoopScrollRect))]
    [DisallowMultipleComponent]
    public class HsLoopScroll : MonoBehaviour, LoopScrollPrefabSource, LoopScrollDataSource
    {
        private GameObject _item;
        private int _totalCount = -1;
        private Stack<Transform> _pool = new Stack<Transform>();

        public Action<Transform, int> OnProvideScrollCell = null;
        public GameObject GetObject(int index)
        {
            if (_pool.Count == 0)
            {
                return Instantiate(_item);
            }
            Transform candidate = _pool.Pop();
            candidate.gameObject.SetActive(true);
            return candidate.gameObject;
        }

        public void ReturnObject(Transform trans)
        {
            trans.gameObject.SetActive(false);
            trans.SetParent(transform, false);
            _pool.Push(trans);
        }

        public void ProvideData(Transform transform, int idx)
        {
            OnProvideScrollCell?.Invoke(transform, idx);
        }

        private void OnDestroy()
        {
            _item = null;
            _pool.Clear();
            _pool = null;
            OnProvideScrollCell = null;
        }
    }
}