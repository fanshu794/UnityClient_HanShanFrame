using System;
using System.Linq;
using System.Text;
using Game.Main;

namespace Game.Frame
{
    public class AssetBundleLoadStrategy : BaseLoadStrategy
    {
        private StringBuilder _stringBuilder = new StringBuilder(20);
        private AssetBundleSystem _assetBundleSystem = null;
        private const string _abextend = ".unity3d";
            
        public AssetBundleLoadStrategy()
        {
            _assetBundleSystem = new AssetBundleSystem();
            HsClient.GameRuner.RegisterUpdate(_assetBundleSystem);
        }

        public override LoaderHandler<T> LoadSync<T>(string path)
        {
            var bundleName = ParsePath(path);
            BundleEntity bundleEntity = _assetBundleSystem.LoadBundleEntitySync(bundleName);
            var asset = bundleEntity.AbBundle.LoadAsset<T>(path);
            return new LoaderHandler<T>()
            {
                loadStrategy = this,
                bundleEntity = bundleEntity,
                asset = asset
            };
        }
                                                                                                                                                      
        public override LoaderHandler<T> LoadAync<T>(string path, Action<UnityEngine.Object> onComplete)
        {
            var bundleName = ParsePath(path);
            LoaderHandler<T> loaderHandler = new LoaderHandler<T>();
            loaderHandler.loadStrategy = this;
            _assetBundleSystem.LoadBundleEntityAsync(bundleName, entity =>
            {
                loaderHandler.bundleEntity = entity;
                loaderHandler.asset = entity.AbBundle.LoadAsset<T>(path);
                onComplete?.Invoke(loaderHandler.asset);
            });
            return loaderHandler;
        }

        /// <summary>
        /// 根据path解析，返回bundleName
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        private string ParsePath(string path)
        {
            path = path.ToLower();
            int targetIndex = 0;
            for (int i = path.Length - 1; i >= 0; i--)
            {
                if (path[i] == '/')
                {
                    targetIndex = i;
                    break;
                }
            }

            _stringBuilder.Clear();
            if (path.Contains("allinone"))
            {
                return path.Substring(0, targetIndex) + ".unity3d";
            }
            else
            {
                var newPath = path.Substring(0, path.LastIndexOf('.'));
                _stringBuilder.Append(newPath);
                _stringBuilder.Append(_abextend);
                return _stringBuilder.ToString();
            }
        }

        public override string ToString()
        {
            return _assetBundleSystem.GetString();
        }

        public override void Unload(string bundleName)
        {
            _assetBundleSystem.Unload(bundleName);
        }

        public override void Dispose()
        {
            _assetBundleSystem.Dispose();
            _assetBundleSystem = null;
            _stringBuilder = null;
        }
    }
}