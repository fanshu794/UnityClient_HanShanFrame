using Game.Frame;

namespace Game.Main
{
    
    public static class Enviroment
    {
        private static ResourceSystem.LoadType _loadType;

        public static void SetLoadType( ResourceSystem.LoadType loadType)
        {
            _loadType = loadType;
        }
        
        public static ResourceSystem.LoadType GetLoadType()
        {

#if UNITY_EDITOR
            return _loadType;
#else
            return ResourceSystem.LoadType.AssetBundle;
#endif
        }
    }
}