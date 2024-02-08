namespace Game.Main
{
    public enum GameEventEnum
    {
        //presenter的节点对象加载完毕
        OnPresenterViewLoaded = 1,
        //监听model脏位注册
        OnRegisterModelDirty,
        //标记红点数据层脏位
        OnSetReddotDirty,
        OnBundleLoaded , //AB bundle加载完成
        
        //打开mainView
        OpenMainView
    }
    
    
}