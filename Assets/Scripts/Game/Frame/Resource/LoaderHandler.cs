using UnityEngine;

namespace Game.Frame
{
    public class LoaderHandler<T> where T : UnityEngine.Object
    {
        public BaseLoadStrategy loadStrategy = null;
        public BundleEntity bundleEntity = null;
        public T asset = null;

        public void Unload()
        {
            if (loadStrategy != null && bundleEntity != null)
            {
                loadStrategy.Unload(bundleEntity.BundleName);
            }

            bundleEntity = null;
            asset = null;
        }

        public bool IsLoaded()
        {
            return asset != null;
        }
    }
}