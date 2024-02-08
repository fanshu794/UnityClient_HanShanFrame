using UnityEngine;

namespace Game.Frame
{
    public abstract class MonoSingleton<T> : MonoBehaviour where T: MonoSingleton<T>
    {
        private static T _instance = default(T);
        public static T Instance => _instance;

        protected abstract void OnCreate();
        public static void CreateInstance()
        {
            var obj = new GameObject(typeof(T).Name);
            _instance = obj.AddComponent<T>();
            _instance.OnCreate();
        }
    }
}
