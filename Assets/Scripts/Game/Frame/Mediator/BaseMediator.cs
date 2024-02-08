using System;
using Game.Frame;
using Game.Main;

namespace Game.Frame
{
    public abstract class BaseMediator
    {
        protected abstract void RegisterSystem();        
        protected abstract void RegisterUpdate();

        public abstract T GetSystem<T>() where T : BaseSystem;
        public abstract T GetModel<T>() where T : BaseModel;
    }
}