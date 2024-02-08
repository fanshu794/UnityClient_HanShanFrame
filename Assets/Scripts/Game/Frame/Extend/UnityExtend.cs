using UnityEngine;

namespace Game.Main.Extend
{
    public static class UnityExtend
    {
        public static void ActiveObj(this GameObject self, bool bActive)
        {
            if (self.activeSelf == bActive)
            {
                return;
            }
            self.SetActive(bActive);
        }

        public static T GetAddComponent<T>(this GameObject self)  where T : Component
        {
            var com = self.GetComponent<T>();
            if (com == null)
            {
                com = self.AddComponent<T>();
            }
            return com;
        }
    }
}