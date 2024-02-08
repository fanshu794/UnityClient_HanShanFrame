using System;
using Game.Frame;

namespace Game.Frame
{
    public abstract class BaseColleage: IDisposable
    {
        public virtual void RegisterEvent()
        {
        }

        public virtual void UnRegisterEvent()
        {
        }

        public abstract void Dispose();
    }
}