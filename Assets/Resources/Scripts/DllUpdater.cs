using System;

public class DllUpdater : BaseHotUpdater
{
    
    public DllUpdater(string bigVersion, string smallVersion, string updateIp, UIHorUpdateRoot uiHorUpdateRoot) : base(bigVersion, updateIp, uiHorUpdateRoot)
    {
        SmallVersion = smallVersion;
    }

    protected override string GetMd5FileName()
    {
        return "dllList.txt";
    }

    protected override string GetRootName()
    {
        return "dlls";
    }
}