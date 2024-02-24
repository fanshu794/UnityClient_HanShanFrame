using System;
using System.Linq;
using Game.Frame;
using UnityEngine;

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
        
        public static int GetCurBigVersion()
        {
            try
            {
                var array = Application.version.Split('.');
                return int.Parse(array.First());
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw;
            }
        }

        public const string FileListName = "FileList.txt";

        public const string HotNetBasePath = "http://111.229.174.62/";//"http://127.0.0.1/";

        public const string VersionFileName = "version.txt";
    }
}