using System;
using System.Collections.Generic;
using Game.Main;

namespace Game.Frame
{
    public class ModelSystem : BaseSystem
    {
        private Dictionary<Type, BaseModel> _dicModels = null;

        public ModelSystem()
        {
            _dicModels = new Dictionary<Type, BaseModel>();
        }

        public T GetModel<T>() where T : BaseModel
        {
            var type = typeof(T);
            if (_dicModels.TryGetValue(type, out BaseModel model))
            {
                return model as T;
            }
            else
            {
                GameLog.Error($"model不存在 ${type.Name}");
                return null;
            }
        }

        public override void Dispose()
        {
            
        }
    }
}