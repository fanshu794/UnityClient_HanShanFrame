using System.Collections.Generic;
using Game.Frame;

namespace Game.Main.Config
{
    public class ReddotCallbackConfig
    {
        private static int testIndex = 1;
        public static void CheckPath1(int fellowId)
        {
            GameLog.Log("CheckPath1 " + fellowId);
            //HS.ReddotSystem.ChangeValue(string.Format(ReddotPathConfig.path1, "1"), (testIndex++) % 2 == 0? ReddotValueType.Null : ReddotValueType.Has);
            
        }
        
        private static void CheckPath2()
        {
            GameLog.Log("CheckPath2");
        }
        
        private static void CheckPath3()
        {
            GameLog.Log("CheckPath3");

        }
        
        private static void CheckPath4()
        {
            GameLog.Log("CheckPath4");

        }
        
        private static void CheckPath5()
        {
            GameLog.Log("CheckPath5");

        }
    }
}