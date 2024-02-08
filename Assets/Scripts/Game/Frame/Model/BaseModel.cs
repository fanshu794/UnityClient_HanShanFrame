using System.Collections.Generic;
using System.Globalization;
using Game.Main;

namespace Game.Frame
{
    public abstract class BaseModel : BaseColleage
    {
        private Dictionary<int, bool> _dicUIDirtyCache = null;

        protected BaseModel()
        {
            _dicUIDirtyCache = new Dictionary<int, bool>();
        }
        
        private void SetUICacheDirty()
        {
            foreach (var key in _dicUIDirtyCache.Keys)
            {
                _dicUIDirtyCache[key] = true;
            }
        }

        public bool IsUICacheDirty(int insanceId)
        {
            bool bRet = false;
            if (_dicUIDirtyCache.TryGetValue(insanceId, out var bVal))
            {
                bRet = bVal;
                _dicUIDirtyCache[insanceId] = false;
            }

            return bRet;
        }

        public void AddUICache(int instanceId)
        {
            _dicUIDirtyCache.TryAdd(instanceId, false);
        }
        
        public void RemoveUICache(int instanceId)
        {
            _dicUIDirtyCache.Remove(instanceId);
        }

        public override void Dispose()
        {
            _dicUIDirtyCache.Clear();
            _dicUIDirtyCache = null;
        }
    }
}