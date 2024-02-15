using System;
using Game.Frame;
using Game.Main;
using UnityEngine;

namespace Game.Frame
{
    public class ResourceSystem : BaseSystem 
    {
        public enum LoadType
        {
            Editor,
            AssetBundle
        }
        
        private BaseLoadStrategy _loadStrategy = null;
        
        public BaseLoadStrategy LoadStrategy => _loadStrategy;


        public ResourceSystem()
        {
#if UNITY_EDITOR
            if (Enviroment.GetLoadType() == LoadType.AssetBundle)
            {
                _loadStrategy = new AssetBundleLoadStrategy();
            }
            else
            {
                
                _loadStrategy = new EditorLoadStrategy();
            }
#else
            _loadStrategy = new AssetBundleLoadStrategy();
#endif
            
        }

        public override string ToString()
        {
            return _loadStrategy.ToString();
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