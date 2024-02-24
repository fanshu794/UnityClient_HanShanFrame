using System.Collections;
using System.IO;
using Game.Frame;
using Game.Main.Extend;
using UnityEngine;
using UnityEngine.Networking;

namespace Game.Main
{
    public class UnzipState : BaseState
    {

        public override void OnEnterState()
        {
            wwwLoadImage(getStreamingPath_for_www() + "FileList.txt");
            GameLog.Error("ddddddd");
        }

        public override void OnExitState()
        {
        }

        string getStreamingPath_for_www()
        {
            string pre = "file://";
#if UNITY_EDITOR
            pre = "file://";
#elif UNITY_ANDROID
        pre = "";
#elif UNITY_IPHONE
	    pre = "file://";
#endif
            string path = pre + Application.streamingAssetsPath + "/";
            return path;
        }

        async void wwwLoadImage(string path)
        {
            UnityWebRequest www = UnityWebRequest.Get(path);
            await www.SendWebRequest();
            if (!string.IsNullOrEmpty(www.error))
            {
                Debug.Log("www.error:" + www.error);
            }

            GameLog.Error("Ss " + www.downloadHandler.text);
            www.Dispose();
        }

        IEnumerator copy(string fileName)
        {

        string src = getStreamingPath_for_www() + fileName;
        string des = Application.persistentDataPath + "/" + fileName;
        Debug.Log("des:" + des);
        Debug.Log("src:" + src);
        WWW www = new WWW(src);
        yield return www;
        if (!string.IsNullOrEmpty(www.error))
        {

        Debug.Log("www.error:" + www.error);
    }

    else
        {
        //des = Application.persistentDataPath + "/" + fileName;
        if (File.Exists(des))
        {
        File.Delete(des);
    }

    FileStream fsDes = File.Create(des);
        fsDes.Write(www.bytes, 0, www.bytes.Length);
        fsDes.Flush();
        fsDes.Close();

    }

    www.Dispose();
    }
}
}