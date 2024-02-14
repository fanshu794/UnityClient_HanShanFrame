using UnityEditor;
using UnityEngine;

namespace Game.Frame
{
    public class EditorLoadStrategy : BaseLoadStrategy
    {
        public override LoaderHandler<T> LoadSync<T>(string path)
        {
#if UNITY_EDITOR
            var asset = AssetDatabase.LoadAssetAtPath<T>(path);
            return new LoaderHandler<T>()
            {
                loadStrategy = this,
                asset = asset
            };
#endif
            return null;
        }

        public override LoaderHandler<T> LoadAync<T>(string path, System.Action<Object> onComplete)
        {
#if UNITY_EDITOR
            var asset = AssetDatabase.LoadAssetAtPath<T>(path);
            onComplete.Invoke(asset);
            return new LoaderHandler<T>()
            {
                loadStrategy = this,
                asset = asset
            };
#endif
            return null;
        }

        public override void Unload(string path)
        {
        }

        public override void Dispose()
        {
        }
    }
}