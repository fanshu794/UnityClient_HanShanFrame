using System;

namespace Game.Frame
{
    public abstract class BaseLoadStrategy
    {
        public abstract LoaderHandler<T> LoadSync<T>(string path) where T : UnityEngine.Object;
        public abstract LoaderHandler<T> LoadAync<T>(string path, Action<UnityEngine.Object> onComplete) where T : UnityEngine.Object;
        public abstract void Unload(string path);
        public abstract void Dispose();
    }
}