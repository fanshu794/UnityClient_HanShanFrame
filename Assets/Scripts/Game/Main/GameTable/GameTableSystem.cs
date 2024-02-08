using cfg;
using Game.Frame;
using Luban;
using UnityEngine;

namespace Game.Main.GameTable
{
    public class GameTableSystem : BaseSystem
    {
        private cfg.Tables _tables = null;
        public cfg.Tables Tables => _tables;
        
        public GameTableSystem()
        {
            _tables = new Tables(LoadByteBuf);
            var item = _tables.TbItem.DataList[1];
            UnityEngine.Debug.LogFormat("item[1]:{0}", item);
        }
        
        public override void Dispose()
        {
            base.Dispose();
        }
        
        private ByteBuf LoadByteBuf(string file)
        {
            var txt = HsClient.Mediator.GetSystem<ResourceSystem>().LoadSync<TextAsset>($"Assets/Res/AllInOne/LubanGen/{file}.bytes").asset as TextAsset;
            if (!txt)
            {
                GameLog.Error("GameTableManager Error");
                return null;
            }
            return new ByteBuf(txt.bytes);
        }
    }
}