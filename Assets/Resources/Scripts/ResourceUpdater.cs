public class ResourceUpdater : BaseHotUpdater
{
    public ResourceUpdater(string bigVersion, string smallVersion, string updateIp, UIHorUpdateRoot uiHorUpdateRoot) : base(bigVersion, updateIp, uiHorUpdateRoot)
    {
        SmallVersion = smallVersion;
    }

    protected override string GetMd5FileName()
    {
        return "FileList.txt";
    }

    protected override string GetRootName()
    {
        return "resources";
    }
}