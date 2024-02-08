using System;
using Game.Frame;
using Game.Main;

namespace Game.Frame
{
    public abstract class BaseSystem : BaseColleage, IGameUpdate, IGameFixUpdate
    {
        protected BaseSystem()
        {
            OnCreate();
        }

        private void OnCreate()
        {
            RegisterEvent();
        }

        public virtual void Update(float deltaTime)
        {
        }

        public virtual void FixedUpdate(float deltaTime)
        {
        }

        public override void Dispose()
        {
            UnRegisterEvent();
        }
    }
}