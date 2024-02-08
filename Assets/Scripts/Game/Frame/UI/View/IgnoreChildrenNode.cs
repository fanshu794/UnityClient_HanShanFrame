using UnityEngine;

namespace Game.Frame
{
    /// <summary>
    /// 当挂载此组件，会屏蔽该节点下所有挂在NodeBind组件
    /// </summary>
    [DisallowMultipleComponent]
    public class IgnoreChildrenNode : MonoBehaviour
    {
        
    }
}