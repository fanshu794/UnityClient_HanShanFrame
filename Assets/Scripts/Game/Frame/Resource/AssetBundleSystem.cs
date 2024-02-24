using System;
using System.Collections.Generic;
using System.Text;
using Game.Frame;
using Game.Main;
using UnityEngine;

namespace Game.Frame
{
    public class AssetBundleSystem : BaseSystem
    {
        //加载完成的资源
        private Dictionary<string, BundleEntity> mDicLoadedBundleEntities = new Dictionary<string, BundleEntity>();
        //待销毁资源
        private Dictionary<string, BundleEntity> mDicReadyToDestroyBundleEntities = new Dictionary<string, BundleEntity>();
        //正在加载的资源，只有异步加载的资源才会在这个字典中
        private Dictionary<string, BundleEntity> mDicLoadingBundleEntities = new Dictionary<string, BundleEntity>();
        //待加载资源
        private Dictionary<string, BundleEntity> mDicReadyToLoadBundleEntities = new Dictionary<string, BundleEntity>();
        //依赖项
        private Dictionary<string, string[]> mDicDependConfig = new Dictionary<string, string[]>();
        //异步加载请求
        private Dictionary<string, AssetBundleCreateRequest> mDicAsyncBundleCreateRequests = new Dictionary<string, AssetBundleCreateRequest>();
        private List<string> mCacheRemoveList = new List<string>();

        private const int mDestroyCount = 5; //每次销毁的资源数量

        private const int mDestroyIntervalTime = 5; //每隔几秒进行销毁

        private float mDestroyTime = 0f;

        public AssetBundleSystem()
        {
            Init();
        }
        
        private void Init()
        {
            InitDependConfig();
        }
        
        private void InitDependConfig()
        {
            mDicDependConfig.Clear();
            AssetBundle ab = AssetBundle.LoadFromFile( $"{Application.persistentDataPath}/resources");
            AssetBundleManifest mainfest = ab.LoadAsset("AssetBundleManifest") as AssetBundleManifest;
            foreach(string assetName in mainfest.GetAllAssetBundles())
            {
                string hashName = assetName.Replace(".ab", "");
                string[] dps = mainfest.GetAllDependencies(assetName);
                for (int i = 0; i < dps.Length; i++)
                    dps[i] = dps[i].Replace(".ab", "");
                mDicDependConfig.Add(hashName, dps);
            }
            ab.Unload(true);
            ab = null;
        }

        private string GetPath(string bundleName)
        {
            return $"{Application.persistentDataPath}/{bundleName}";
        }

        public override void Dispose()
        {
            base.Dispose();
            foreach (var keyVal in mDicLoadedBundleEntities)
            {
                keyVal.Value.ForthDispose();
            }
            foreach (var keyVal in mDicReadyToDestroyBundleEntities)
            {
                keyVal.Value.ForthDispose();
            }
            //需要把正在异步加载的bundle都加载完毕，然后再dispose
            foreach (var keyVal in mDicLoadingBundleEntities)
            {
                keyVal.Value.SetAssetBundle(mDicAsyncBundleCreateRequests[keyVal.Key].assetBundle);
                keyVal.Value.ForthDispose();
            }
            //待加载队列讲道理bundle不会生成
            foreach (var keyVal in mDicReadyToLoadBundleEntities)
            {
                keyVal.Value.ForthDispose();
            }
            mDicLoadedBundleEntities.Clear();
            mDicReadyToDestroyBundleEntities.Clear();
            mDicLoadingBundleEntities.Clear();
            mDicReadyToLoadBundleEntities.Clear();
            mDicDependConfig.Clear();
            mDicAsyncBundleCreateRequests.Clear();
            mCacheRemoveList.Clear();
        }

        private bool BundleExist(string bundleName)
        {
            return mDicDependConfig.ContainsKey(bundleName);
        }

        private BundleEntity GetCurExistBundleEntity(string bundleName)
        {
            //去几个队列里找
            if (mDicLoadedBundleEntities.TryGetValue(bundleName, out var bundleEntity))
            {
                return bundleEntity;
            }
            if (mDicReadyToDestroyBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                return bundleEntity;
            }
            if (mDicLoadingBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                return bundleEntity;
            }
            if (mDicReadyToLoadBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                return bundleEntity;
            }

            return default;
        }

        //递归引用计数增加
        private void RecursionAddRef(string bundleName)
        {
            var bundleEntity = GetCurExistBundleEntity(bundleName);
            if (bundleEntity == default)
            {
                Debug.LogError("bundleEntity is null");
                return;
            }
            bundleEntity.AddRefCount();
            var dependArray = mDicDependConfig[bundleName];
            if (dependArray != null && dependArray.Length > 0)
            {
                foreach (var depend in dependArray)
                {
                    RecursionAddRef(depend);
                }
            }
        }

        //从销毁队列中递归移除依赖项bundle
        private void RecursionRemoveFromDestroy(string bundleName)
        {
            var bundleEntity = GetCurExistBundleEntity(bundleName);
            if (bundleEntity == default)
            {
                Debug.LogError("bundleEntity is null");
                return;
            }
            if (mDicReadyToDestroyBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                mDicReadyToDestroyBundleEntities.Remove(bundleName);
                mDicLoadedBundleEntities.Add(bundleName, bundleEntity); //加入已经存在队列
            }
            var dependArray = mDicDependConfig[bundleName];
            if (dependArray != null && dependArray.Length > 0)
            {
                foreach (var depend in dependArray)
                {
                    RecursionRemoveFromDestroy(depend);
                }
            }
        }

        private int GetCurLoadedDependCount(string[] pathArray)
        {
            int curLoadedCount = 0;
            foreach (var path in pathArray)
            {
                if (mDicLoadedBundleEntities.ContainsKey(path))
                {
                    curLoadedCount++;
                }
            }

            return curLoadedCount;
        }

        //同步加载bundle
        public BundleEntity LoadBundleEntitySync(string bundleName)
        {
            if (!BundleExist(bundleName))
            {
                return null;
            }
            //如果当前已经加载
            if (mDicLoadedBundleEntities.TryGetValue(bundleName, out var bundleEntity))
            {
                RecursionAddRef(bundleName);
                return bundleEntity;
            }
            //如果当前正在处于待销毁队列，移除队列1
            //需要把其依赖项也移除队列
            if (mDicReadyToDestroyBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                RecursionAddRef(bundleName);
                RecursionRemoveFromDestroy(bundleName);
                return bundleEntity;
            }
            //如果当前正在异步加载的队列中，那么立马同步转异步
            if (mDicLoadingBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                //然后加载本身
                if (mDicAsyncBundleCreateRequests.TryGetValue(bundleName, out var request))
                {
                    RecursionAddRef(bundleName);
                    bundleEntity.SetAssetBundle(request.assetBundle);
                    //通知依赖此bundle的父bundle
                    HsClient.EventDispatch.TriggerEvent<BundleEntity>((int)GameEventEnum.OnBundleLoaded, bundleEntity);
                    mDicLoadedBundleEntities.Add(bundleName, bundleEntity);
                    mDicAsyncBundleCreateRequests.Remove(bundleName);
                    mDicLoadingBundleEntities.Remove(bundleName);
                    bundleEntity.DoCallback();
                    return bundleEntity;
                }
                else
                {
                    //如果走到这里，说明有BUG
                    Debug.LogError($"不存在bundle request = {bundleName}");
                    return null;
                }
            }

            //加载依赖项
            var pathArray = mDicDependConfig[bundleName];
            if (pathArray != null && pathArray.Length > 0)
            {
                foreach (var dependPath in pathArray)
                {
                    LoadBundleEntitySync(dependPath);
                }
            }
            //如果待加载队列，这里比较麻烦，得把其依赖项都先同步加载完毕
            if (mDicReadyToLoadBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                mDicReadyToLoadBundleEntities.Remove(bundleName);
                bundleEntity.SetAssetBundle(AssetBundle.LoadFromFile(GetPath(bundleName)));
                HsClient.EventDispatch.TriggerEvent<BundleEntity>((int)GameEventEnum.OnBundleLoaded, bundleEntity);
                bundleEntity.DoCallback();
            }
            else
            {
                //创建一个新的
                bundleEntity = new BundleEntity(bundleName, pathArray, GetCurLoadedDependCount(pathArray));
                bundleEntity.SetAssetBundle(AssetBundle.LoadFromFile(GetPath(bundleName)));
            }
            bundleEntity.AddRefCount();
            mDicLoadedBundleEntities.Add(bundleName, bundleEntity);
            return bundleEntity;
        }
        
        //异步加载bundle
        public void LoadBundleEntityAsync(string bundleName, Action<BundleEntity> callback = null)
        {
            if (!BundleExist(bundleName))
            {
                return;
            }
            //如果当前已经加载
            if (mDicLoadedBundleEntities.TryGetValue(bundleName, out var bundleEntity))
            {
                RecursionAddRef(bundleName);
                bundleEntity.AddLoadCallback(callback);
                bundleEntity.DoCallback();
                return;
            }
            //如果当前正在处于待销毁队列，移除队列
            if (mDicReadyToDestroyBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                RecursionAddRef(bundleName);
                RecursionRemoveFromDestroy(bundleName);
                bundleEntity.AddLoadCallback(callback);
                bundleEntity.DoCallback();
                return;
            }
            //如果当前正在异步加载的队列中
            if (mDicLoadingBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                RecursionAddRef(bundleName);
                bundleEntity.AddLoadCallback(callback);
                return;
            }

            if (mDicReadyToLoadBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                RecursionAddRef(bundleName);
                bundleEntity.AddLoadCallback(callback);
                return;
            }

            bool bHasDep = false;
            //加载依赖项
            var pathArray = mDicDependConfig[bundleName];
            if (pathArray != null && pathArray.Length > 0)
            {
                bHasDep = true;
                foreach (var dependPath in pathArray)
                {
                    LoadBundleEntityAsync(dependPath, null);
                }
            }
            else
            {
                bHasDep = false;
            }
            bundleEntity = new BundleEntity(bundleName, pathArray, GetCurLoadedDependCount(pathArray));
            bundleEntity.RegisterEvent();
            bundleEntity.AddRefCount();
            bundleEntity.AddLoadCallback(callback);
            if (bHasDep) 
            {
                //如果有依赖项，那么自身加入待加载队列
                mDicReadyToLoadBundleEntities.Add(bundleName, bundleEntity);
            }
            else//如果没有依赖项，开始加载
            {
                var request = AssetBundle.LoadFromFileAsync(GetPath(bundleName));
                mDicLoadingBundleEntities.Add(bundleName, bundleEntity);
                mDicAsyncBundleCreateRequests.Add(bundleName, request);
            }
        }
        
        //卸载bundle
        public void Unload(string bundleName)
        {
            //卸载依赖项
            var dependArray = mDicDependConfig[bundleName];
            if (dependArray != null && dependArray.Length != 0)
            {
                foreach (var name in dependArray)
                {
                    Unload(name);
                }
            }
            
            //如果当前已经加载
            if (mDicLoadedBundleEntities.TryGetValue(bundleName, out var bundleEntity))
            {
                bundleEntity.ReduceRefCount();
                if (bundleEntity.NeedToDestroy())
                {
                    mDicReadyToDestroyBundleEntities.Add(bundleName, bundleEntity);
                    mDicLoadedBundleEntities.Remove(bundleName);
                }
                return;
            }
            //如果当前正在异步加载的队列中
            if (mDicLoadingBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                bundleEntity.ReduceRefCount();
                if (bundleEntity.NeedToDestroy())
                {
                    mDicReadyToDestroyBundleEntities.Add(bundleName, bundleEntity);
                    mDicLoadingBundleEntities.Remove(bundleName);
                }
                return;
            }
            if (mDicReadyToLoadBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                bundleEntity.ReduceRefCount();
                if (bundleEntity.NeedToDestroy())
                {
                    mDicReadyToDestroyBundleEntities.Add(bundleName, bundleEntity);
                    mDicReadyToLoadBundleEntities.Remove(bundleName);
                }
                return;
            }
            //如果当前正在处于待销毁队列
            if (mDicReadyToDestroyBundleEntities.TryGetValue(bundleName, out bundleEntity))
            {
                //讲道理不可能走到这里，如果一个资源已经在销毁队列中，不可能有其他引用的地方
                Debug.LogError("error unload");
            }
        }

        public override void Update(float deltaTime)
        {
            mCacheRemoveList.Clear();
            foreach (var keyVal in mDicLoadingBundleEntities)
            {
                //如果完成加载
                if (mDicAsyncBundleCreateRequests[keyVal.Key].isDone)
                {
                    mCacheRemoveList.Add(keyVal.Key);
                    var bundle = mDicAsyncBundleCreateRequests[keyVal.Key].assetBundle;
                    keyVal.Value.SetAssetBundle(bundle);
                    //通知依赖此bundle的父bundle
                    HsClient.EventDispatch.TriggerEvent<BundleEntity>((int)GameEventEnum.OnBundleLoaded, keyVal.Value);
                    keyVal.Value.DoCallback();
                }
            }
            //从正在加载队列移除
            foreach (var bundleName in mCacheRemoveList)
            {
                mDicLoadingBundleEntities.Remove(bundleName, out var entity);
                mDicAsyncBundleCreateRequests.Remove(bundleName);
                mDicLoadedBundleEntities.Add(bundleName, entity);                
            }
            
            mCacheRemoveList.Clear();
            foreach (var keyVal in mDicReadyToLoadBundleEntities)
            {
                //如果没有开始加载，那就判断它的所有依赖项是否完成加载，如果完成了，自身开始加载
                if (keyVal.Value.IsAllDependLoaded())
                {
                    var request = AssetBundle.LoadFromFileAsync(GetPath(keyVal.Key));
                    mDicAsyncBundleCreateRequests.Add(keyVal.Key, request);
                    mDicLoadingBundleEntities.Add(keyVal.Key, keyVal.Value); //加入正在加载队列
                    mCacheRemoveList.Add(keyVal.Key);
                }
            }
            //从待加载队列移除
            foreach (var bundleName in mCacheRemoveList)
            {
                mDicReadyToLoadBundleEntities.Remove(bundleName);
            }

            //销毁逻辑
            mDestroyTime += Time.deltaTime;
            if (mDestroyTime >= mDestroyIntervalTime)
            {
                mDestroyTime = 0;
                mCacheRemoveList.Clear();
                foreach (var keyVal in mDicReadyToDestroyBundleEntities)
                {
                    if (mCacheRemoveList.Count < mDestroyCount) //每次拿若干个进行销毁
                    {
                        mCacheRemoveList.Add(keyVal.Key);
                    }
                }
                //从销毁队列移除
                foreach (var bundleName in mCacheRemoveList)
                {
                    mDicReadyToDestroyBundleEntities[bundleName].Dispose();
                    mDicReadyToDestroyBundleEntities.Remove(bundleName);
                }
            }
        }

        private StringBuilder mBuilder = new StringBuilder();
        public string GetString()
        {
            mBuilder.Clear();
            foreach (var keyVal in mDicLoadedBundleEntities)
            {
                mBuilder.Append(keyVal.Key);
                mBuilder.Append(" 引用计数为 : ");
                mBuilder.Append(keyVal.Value.RefCount);
                mBuilder.Append('\n');
            }

            return mBuilder.ToString();
        }
    }
}