using System;
using System.IO;
using System.Security.Cryptography;
using System.Text;

namespace Game.Frame
{
    public static class Md5Tool
    {
        public static string GetMd5ByPath(string path)

        {
            if (!File.Exists(path)) return "";            
            FileStream fs = new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.Read);            
            MD5CryptoServiceProvider md5Provider = new MD5CryptoServiceProvider();            
            byte[] buffer = md5Provider.ComputeHash(fs);            
            string resule = BitConverter.ToString(buffer);           
            md5Provider.Clear();            
            fs.Close();           
            return resule;   
        }
    }
}