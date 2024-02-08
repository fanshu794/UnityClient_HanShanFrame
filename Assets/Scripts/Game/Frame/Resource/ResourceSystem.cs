using System;
using Game.Frame;
using Game.Main;
using UnityEngine;

namespace Game.Frame
{
    public class ResourceSystem : BaseSystem 
    {
        private BaseLoadStrategy _loadStrategy = null;
        
        public BaseLoadStrategy LoadStrategy => _loadStrategy;


        public ResourceSystem()
        {
            if (true)
            {
                _loadStrategy = new AssetBundleLoadStrategy();
            }
        }
        
        public LoaderHandler<T> LoadSync<T>(string path) where T : UnityEngine.Object
        {
            return _loadStrategy.LoadSync<T>(path);
        }
        
        public LoaderHandler<T> LoadAsync<T>(string path, Action<UnityEngine.Object> onComplete) where T : UnityEngine.Object
        {
            return _loadStrategy.LoadAync<T>(path, onComplete);
        }

        public T EditLoad<T>(string path) where T : UnityEngine.Object
        {
            return Resources.Load<T>(path);
        }

        public override void Dispose()
        {
            _loadStrategy.Dispose();
        }
    }
}