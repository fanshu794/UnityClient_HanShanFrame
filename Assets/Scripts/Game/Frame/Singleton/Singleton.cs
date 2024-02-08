namespace Game.Frame
{
    public abstract class Singleton<T> where T : Singleton<T>, new()
    {
        private static T _instance = default(T);
        public static T Instance => _instance;

        protected abstract void OnCreate();
        public static void CreateInstance()
        {
            _instance = new T();
            _instance.OnCreate();
        }
    }
}