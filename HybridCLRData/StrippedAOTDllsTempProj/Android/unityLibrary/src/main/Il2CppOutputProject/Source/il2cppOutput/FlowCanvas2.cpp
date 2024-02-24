#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<NodeCanvas.Framework.Graph>
struct Action_1_t9D5B6373D6027B3BE7FF6B70A01B3CB38AAA3965;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D;
// System.Action`1<NodeCanvas.Framework.Variable>
struct Action_1_t924369B78685936188D9F308D270D4B74F46B374;
// NodeCanvas.Framework.BBParameter`1<FlowCanvas.FlowScript>
struct BBParameter_1_t739C9985573E7A24DA02FC0E6E5DFF20B510895C;
// NodeCanvas.Framework.BBParameter`1<System.Object>
struct BBParameter_1_tB46669698C0BE7BD6EFB9A7BE9458183044389E3;
// NodeCanvas.Framework.BBParameter`1<UnityEngine.Transform>
struct BBParameter_1_tFACCA4D200785A10D7DBEBD33086540B7E88FBAF;
// FlowCanvas.Nodes.CallableFunctionNode`4<UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion>
struct CallableFunctionNode_4_t5660E5EFC4BE1E9588E3AF8C01AB3688E48EE2A0;
// FlowCanvas.Nodes.CallableFunctionNode`4<System.Object,System.Object,UnityEngine.Vector3,UnityEngine.Quaternion>
struct CallableFunctionNode_4_tE56049EDFB098E0E1CED3E8568BDEAFE55EE137C;
// System.Collections.Generic.Dictionary`2<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>
struct Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA;
// System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,System.Object[]>
struct Dictionary_2_tB4A455D09FC3BAF8E4EDE22EA13FE413D2FA87E5;
// System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,System.Boolean>
struct Dictionary_2_tF911E54AE967371E5AC2088BA2263F5EC87357B9;
// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,System.String>
struct Dictionary_2_tB99BE1F98E2256A42A0607D4DF41295F5DC662AF;
// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,ParadoxNotion.ReflectionTools/MethodType>
struct Dictionary_2_tDE43543D51BAF8C549BA1C14849F216F1CECA492;
// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Type[]>
struct Dictionary_2_t703AB49ED2A82EFB163B756B55B31DDB0146278D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.FlowHandler>
struct Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA;
// System.Collections.Generic.Dictionary`2<System.String,NodeCanvas.Framework.IInvokable>
struct Dictionary_2_tC11DBF27BCD2B8537FCF8A05930CDB48EBFADE8A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.Port>
struct Dictionary_2_t5A90A7597EA323A0957D8123401252F3D6FD12A5;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.ValueHandlerObject>
struct Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.ConstructorInfo[]>
struct Dictionary_2_t2FF68596D4538465717BB4ED01363A7CA08B8C79;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.EventInfo[]>
struct Dictionary_2_t73AAD868FA51D0A42C7A4CA6432996DD2AF63CEE;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]>
struct Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo[]>
struct Dictionary_2_tE271D578889BD0F25D4C0BF8524ABC171B216470;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo[]>
struct Dictionary_2_t1C975266349E9BFED4CE843F46E4A1C10DC28CAD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type[]>
struct Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component>
struct Dictionary_2_t645C11EEDE0775E6E880E2ABBF6C1605295B1DB0;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// FlowCanvas.Nodes.EventNode`1<System.Object>
struct EventNode_1_t1A6DE4EE56C228F0074E723E0F3C739130A2AE51;
// FlowCanvas.Nodes.EventNode`1<UnityEngine.Transform>
struct EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F;
// FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_3_t458A4E6E6EC05CD6DADFCFA13E7D736C8C1912F3;
// FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Vector2,System.Single,System.Single>
struct ExtractorNode_3_tEF36C13777DBE3026B41184294DA8B616BB4DFFC;
// FlowCanvas.Nodes.ExtractorNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>
struct ExtractorNode_4_tE14DFA343D0893ADD4EF18282F9DBD5A734335E5;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.AnimationCurve,UnityEngine.Keyframe[],System.Single,UnityEngine.WrapMode,UnityEngine.WrapMode>
struct ExtractorNode_5_tA177456BDE9B93177B065DDF20281079B0F093A1;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Collision,UnityEngine.ContactPoint[],UnityEngine.ContactPoint,UnityEngine.GameObject,UnityEngine.Vector3>
struct ExtractorNode_5_t1164BB3E37D2EFB537E24BE24CF2865BC9C40E15;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Collision2D,UnityEngine.ContactPoint2D[],UnityEngine.ContactPoint2D,UnityEngine.GameObject,UnityEngine.Vector2>
struct ExtractorNode_5_tE7260ED1074A0E59D069358489A601734BBEF568;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_5_t12471920B60704B0DD16221EE1CE309FEBDC5858;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider,UnityEngine.Collider>
struct ExtractorNode_5_t4282A70F3210D11A5AEFF796D996B269EC35C905;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint,UnityEngine.Vector3,UnityEngine.Vector3,System.Object,System.Object>
struct ExtractorNode_5_t7016D8CF03238354FCDDD5A7ECD7C7675A4D60A3;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Collider2D,UnityEngine.Collider2D>
struct ExtractorNode_5_t6049F3C036B937E6B23CDAEFCA0B5CE4CB857189;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Object,System.Object>
struct ExtractorNode_5_t644369B3DB1BF5E3DEAD86BD531E29D46707AE54;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Keyframe,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_5_tD75167FDB89C071DB0D375FA53BB225287DF2BC3;
// FlowCanvas.Nodes.ExtractorNode`5<System.Object,System.Object,UnityEngine.ContactPoint,System.Object,UnityEngine.Vector3>
struct ExtractorNode_5_tB6F942614EB435D0D4DED341F877C630002781C0;
// FlowCanvas.Nodes.ExtractorNode`5<System.Object,System.Object,UnityEngine.ContactPoint2D,System.Object,UnityEngine.Vector2>
struct ExtractorNode_5_t7C01734A527532EB0D93640993A448A071AE998E;
// FlowCanvas.Nodes.ExtractorNode`5<System.Object,System.Object,System.Single,System.Int32Enum,System.Int32Enum>
struct ExtractorNode_5_t5E06F2D6C1FFA076970B30DA2A0877006A360AA3;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.RaycastHit,UnityEngine.GameObject,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_5_tDAB0401E5CDB34B6B022E78690BE0BFF0A6C04E1;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.RaycastHit,System.Object,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_5_tAFB5663A965E24BC049262E224364678B9078107;
// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_5_t1990B38D7CDA54038FDFC9EC8E94AFA1E828086F;
// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_6_t8264D664DA0F77170CF218E684094680AF8066E6;
// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3>
struct ExtractorNode_6_t263EBD8A0845AE6887DC475CEEBC76A83F7B6C44;
// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.RaycastHit2D,UnityEngine.GameObject,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_6_tE7070D1890DF15FD455F026ACD1B077CCC5050F2;
// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.RaycastHit2D,System.Object,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_6_t60B832CAA97F53461B16DDB76ADE6AD8A07B5D2A;
// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_6_t66835993EC2DB5DBB71C4EC63936745973CB8486;
// FlowCanvas.Nodes.FlowNestedBase`1<FlowCanvas.FlowScript>
struct FlowNestedBase_1_tC4B8DBF45D09A55DB16BF874C525668030CB626F;
// FlowCanvas.Nodes.FlowNestedBase`1<System.Object>
struct FlowNestedBase_1_tE8D4AE375C80C01A3A1A82CA91120BCF1AE07D03;
// System.Func`1<UnityEngine.Transform>
struct Func_1_t5C8649582D0B0570068D350ED0CB20F598304F77;
// System.Func`2<ParadoxNotion.DynamicParameterDefinition,System.Boolean>
struct Func_2_t790E3300CD054164B42266D675076FECE295D2F7;
// System.Func`2<System.Reflection.MethodInfo,FlowCanvas.Nodes.BaseReflectedMethodNode>
struct Func_2_t45AE3C0110096C1F4033B44128F4C2CCDBB32FB5;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t083860B929985EC8DF79C99B5157C38632F84196;
// System.Collections.Generic.IEnumerable`1<ParadoxNotion.DynamicParameterDefinition>
struct IEnumerable_1_t62715D2F098AE4DAF5EE88D1246C5241F6B4FACC;
// System.Collections.Generic.IEnumerable`1<FlowCanvas.Macros.MacroInputNode>
struct IEnumerable_1_t36509930162CDAEE5236D92BDE3C0F35300DB339;
// System.Collections.Generic.IEnumerable`1<FlowCanvas.Macros.MacroOutputNode>
struct IEnumerable_1_t1793C6B461E895546021F4EE018A27371802A8ED;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t8E50A30565DC033F3BDF1627DA5A9C930C1E0DB9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEqualityComparer`1<NodeCanvas.Framework.Graph>
struct IEqualityComparer_1_t91D6CD1DB61B26DFB591D52991144AEF6E165026;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>
struct KeyCollection_tB6B20AA27D1FB7391FAE0D46ADAC547657C124FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FlowCanvas.FlowHandler>
struct KeyCollection_t9B16C7121510494EF323A873DDE509426124E621;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FlowCanvas.ValueHandlerObject>
struct KeyCollection_tA54A2819AFE3CF537C1B45FED6BA60431330D4E1;
// System.Collections.Generic.List`1<NodeCanvas.Framework.Internal.BBMappingParameter>
struct List_1_t624B7FC2AE145EBF7BB7EE422EF3049A2BBD744B;
// System.Collections.Generic.List`1<NodeCanvas.Framework.Connection>
struct List_1_t619EB3258C7F1EBD15A485EA09888BE9FC87AC7E;
// System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition>
struct List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1;
// System.Collections.Generic.List`1<NodeCanvas.Framework.Graph>
struct List_1_tAC3699D052F658AFF59ECF6AB1A90478603F6294;
// System.Collections.Generic.List`1<NodeCanvas.Framework.IUpdatable>
struct List_1_tF3D90B5476D6AE355DFB5599CB2B0E647E33BE9B;
// System.Collections.Generic.List`1<FlowCanvas.Macros.MacroNodeWrapper>
struct List_1_t8EC824E14E334CEDEC457550E2E0790987B7A219;
// System.Collections.Generic.List`1<NodeCanvas.Framework.Node>
struct List_1_t90487A8EA186417AA0A6F2B22B58D1BAE3334437;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<FlowCanvas.Nodes.ParamDef>
struct List_1_t541A3A678CA7933F8947CEAEE4A92E04398BFDBC;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Collections.Generic.List`1<FlowCanvas.ValueInput>
struct List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A;
// System.Predicate`1<ParadoxNotion.DynamicParameterDefinition>
struct Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3>
struct PureFunctionNode_3_t03B15279553BA270B0FC8F4C3E35388BEF9D9C5E;
// FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>
struct PureFunctionNode_3_t0DAAB6F80D24D71C68E53D981FEAAA75DD4D1A0F;
// FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Vector2,System.Single,System.Single>
struct PureFunctionNode_3_tF8B4AD349DB6BEB93C23406F38544F3E8F751B51;
// FlowCanvas.Nodes.PureFunctionNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>
struct PureFunctionNode_4_tC6258C4E387E3B93C72B234624458301FE1B4C50;
// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_t6CCC5054005213F56C5415A6A8288530B2E803F7;
// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_t92C578BEB13C8EE07B227B55A440303268D1E39C;
// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_tA67A5450270B403FFC24A989A03B328872E6350E;
// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_tF2375E99D87E37757990C4C016B84B4C24A2A77D;
// System.Collections.Generic.Dictionary`2/ValueCollection<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>
struct ValueCollection_t92472E911F4576EC82C8BDBA86E6261CF5D65849;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FlowCanvas.FlowHandler>
struct ValueCollection_t7AF27C1124D34F7DBF66E970DAE2124C662C5744;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FlowCanvas.ValueHandlerObject>
struct ValueCollection_t8587F09ACC1E6EDC0C9079913A3560D8B70AAFED;
// FlowCanvas.ValueHandler`1<UnityEngine.GameObject>
struct ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49;
// FlowCanvas.ValueHandler`1<System.Object>
struct ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899;
// FlowCanvas.ValueInput`1<UnityEngine.Component>
struct ValueInput_1_tBA38C4D089CE83B04DF7776ECE40E21F09BB8FE0;
// FlowCanvas.ValueInput`1<System.Object>
struct ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36;
// FlowCanvas.ValueOutput`1<UnityEngine.GameObject>
struct ValueOutput_1_t77EC70F767F5997CCE19DB8ACD7C74F83691B3D2;
// FlowCanvas.ValueOutput`1<System.Object>
struct ValueOutput_1_t9E3A508BB230FF30375461491A27D69FA2D78B04;
// System.Collections.Generic.Dictionary`2/Entry<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>[]
struct EntryU5BU5D_t360CD71AE0C509E38210218D79033194C4F8B5D7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,FlowCanvas.FlowHandler>[]
struct EntryU5BU5D_t847252B89E18115DA7F28F297C05681B66DA169F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,FlowCanvas.ValueHandlerObject>[]
struct EntryU5BU5D_tACAD13FBBFCA64D639CE37179F51FAA33F0D4025;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// NodeCanvas.Framework.Internal.BBMappingParameter[]
struct BBMappingParameterU5BU5D_tF38AF50E437C333E5DCBCD3FB3B45D48DCC59F58;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ParadoxNotion.DynamicParameterDefinition[]
struct DynamicParameterDefinitionU5BU5D_tF8BB7CC9218FCCE52AD9FB9476EB4E763666CE15;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// NodeCanvas.Framework.Node[]
struct NodeU5BU5D_t9ED98B145FDFEDFC80FCBDF86A3D7B4D21CB89A2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// FlowCanvas.ValueInput[]
struct ValueInputU5BU5D_t4896A2209B0F7B7409814D715CC557908F7F6B26;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// ParadoxNotion.ActionCall
struct ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// NodeCanvas.Framework.BBParameter
struct BBParameter_tD717AF8560E573DF3DA925034F257F669CDDBA60;
// FlowCanvas.Nodes.BaseReflectedMethodNode
struct BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// FlowCanvas.BinderConnection
struct BinderConnection_t338E14B976C2FDEC793FEC61EF1B9A51972991E1;
// FlowCanvas.Nodes.CodeEvent
struct CodeEvent_t5452642F9965FB21E0112034C8E2DA044A296672;
// FlowCanvas.Nodes.CodeEventBase
struct CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// FlowCanvas.Nodes.CustomObjectWrapper
struct CustomObjectWrapper_t20FA1EB5FEB99D76AB3485810F36204F24D0A54B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ParadoxNotion.DynamicParameterDefinition
struct DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874;
// System.Reflection.EventInfo
struct EventInfo_t;
// FlowCanvas.Nodes.EventNode
struct EventNode_t6FBBA4063F56E451C0FF107E0F97B8E41950C315;
// System.Exception
struct Exception_t;
// FlowCanvas.Nodes.ExtractAnimationCurve
struct ExtractAnimationCurve_t6E5A2B47F45C21FCD7A4D3B0840E62210867C944;
// FlowCanvas.Nodes.ExtractBounds
struct ExtractBounds_t402A6A17BE6D0A14393CAE8197230D8B0F6EB162;
// FlowCanvas.Nodes.ExtractCollision
struct ExtractCollision_t2E8360FD3F013435C3663864A7B978507676ACB1;
// FlowCanvas.Nodes.ExtractCollision2D
struct ExtractCollision2D_t52FE07CB88C6DA90D37D14A379865FB625700E5D;
// FlowCanvas.Nodes.ExtractColor
struct ExtractColor_tDAA8C8D17F76D7F2776E9DFCA5D22D8795CC7A75;
// FlowCanvas.Nodes.ExtractContactPoint
struct ExtractContactPoint_t9515579A90C0998E97220F296225EFF8DFDCE778;
// FlowCanvas.Nodes.ExtractContactPoint2D
struct ExtractContactPoint2D_t64351115DD07E0BCEBD11A5AA87E069186491BDA;
// FlowCanvas.Nodes.ExtractKeyFrame
struct ExtractKeyFrame_t5BAD627065EDDF66B228CCA8773307E6BB95D05D;
// FlowCanvas.Nodes.ExtractQuaternion
struct ExtractQuaternion_tA864A63DC101B4FC78C6B6EFC7EC2AF246B57508;
// FlowCanvas.Nodes.ExtractRay
struct ExtractRay_tF346B81C2CB742DE878365246DE885AB49BF2F15;
// FlowCanvas.Nodes.ExtractRaycastHit
struct ExtractRaycastHit_t08CF467E2A539B85E051FB2C45BEBDC22079FDA0;
// FlowCanvas.Nodes.ExtractRaycastHit2D
struct ExtractRaycastHit2D_tC7BC249AA03143E7927563EF8FA2361B6C412477;
// FlowCanvas.Nodes.ExtractRect
struct ExtractRect_tA3E7D7F71BE4969C7513FCEE49CFE0C2463F478E;
// FlowCanvas.Nodes.ExtractVector2
struct ExtractVector2_tB163A20D0A0FF6A20BDAC0C4764AFE53388BD7A5;
// FlowCanvas.Nodes.ExtractVector3
struct ExtractVector3_tE213E0064532FA5E9034A9CA0E4F774356E65040;
// FlowCanvas.Nodes.ExtractVector4
struct ExtractVector4_t047B065599272526E94039FD40BC0BFC47AC5BD8;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// FlowCanvas.FlowBreak
struct FlowBreak_t31C5FA4B335688ADF7FCF54EF64E9A08C5E27B2D;
// FlowCanvas.FlowHandler
struct FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619;
// FlowCanvas.FlowInput
struct FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1;
// FlowCanvas.Nodes.FlowNestedFlow
struct FlowNestedFlow_t027A948D4128974B4DBA2439666275B3CFD9492F;
// FlowCanvas.FlowNode
struct FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB;
// FlowCanvas.FlowOutput
struct FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F;
// FlowCanvas.FlowReturn
struct FlowReturn_t1806923C4502ACEA75580A1D044096A767FA2258;
// FlowCanvas.FlowScript
struct FlowScript_t4052534F3FCF4845673F9CB9A560C997C871E41B;
// FlowCanvas.FlowScriptBase
struct FlowScriptBase_t7A1C819A6C5A412A964FD0327EDFF9AF595C6C8D;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// NodeCanvas.Framework.Graph
struct Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032;
// NodeCanvas.Framework.Internal.GraphSource
struct GraphSource_tDFC175F2BFB99D693583B1D52BB6857C73932914;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// NodeCanvas.Framework.IBlackboard
struct IBlackboard_t5DD66755F75CEACCF1D3EC369782E2A07F1102ED;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// ParadoxNotion.Serialization.ISerializedMethodBaseInfo
struct ISerializedMethodBaseInfo_t4E7D7FFDA0A3AD2165971527C863BA35FD351E7E;
// ParadoxNotion.Serialization.ISerializedReflectedInfo
struct ISerializedReflectedInfo_tA8F84061ADE95CA044973B21946C6EF3B3BF3745;
// FlowCanvas.Macros.Macro
struct Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08;
// FlowCanvas.Macros.MacroInputNode
struct MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553;
// FlowCanvas.Macros.MacroNodeWrapper
struct MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F;
// FlowCanvas.Macros.MacroOutputNode
struct MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// FlowCanvas.Nodes.NewBounds
struct NewBounds_tCD9E71739CBDCA845ED7192DAE3A7613524ABDEC;
// FlowCanvas.Nodes.NewColor
struct NewColor_t708C36A8A4E40EA31D201140FD6B87E6269FD5E0;
// FlowCanvas.Nodes.NewGameObject
struct NewGameObject_t78EE87915A64F816398512F8EEA16134B7A8A458;
// FlowCanvas.Nodes.NewQuaternion
struct NewQuaternion_tB54E87ADB68ECC10D430276721437B251FFFA8AC;
// FlowCanvas.Nodes.NewRay
struct NewRay_tD2385433B970C238BECDB08BB7CFC74EEF543683;
// FlowCanvas.Nodes.NewRect
struct NewRect_t11177040E6616C53E0D6EE6563240AE2D4408909;
// FlowCanvas.Nodes.NewVector2
struct NewVector2_t56AF31B1F8FBDC7A2DC490FEC72BF0D7D76126D2;
// FlowCanvas.Nodes.NewVector3
struct NewVector3_t26A0F5D15EF4E238E3B032DCF8FCC4EB48BC849A;
// FlowCanvas.Nodes.NewVector4
struct NewVector4_tAA9955F6C551659BB48B1D263EC71D774C0FE37D;
// NodeCanvas.Framework.Node
struct Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8;
// FlowCanvas.Nodes.NullObject
struct NullObject_t78A45B684BADF8565824996B4A4E6B4EDE1A6B20;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// FlowCanvas.Nodes.OwnerVariable
struct OwnerVariable_t9F98503FBB5EEA43D7B5135C4306BA3BF32EAD3E;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// FlowCanvas.Nodes.ParameterVariableNode
struct ParameterVariableNode_t8244289ECA73B73735D6F242D931E2B92BDE2F61;
// FlowCanvas.Port
struct Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD;
// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode
struct PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D;
// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode
struct PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31;
// FlowCanvas.Nodes.Legacy.ReflectedActionNode
struct ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744;
// FlowCanvas.Nodes.Legacy.ReflectedFieldNode
struct ReflectedFieldNode_t9CD932A9B7F77ACC1429D6ACA7168DF83C68BBC3;
// FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper
struct ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370;
// FlowCanvas.Nodes.Legacy.ReflectedMethodNode
struct ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F;
// FlowCanvas.Nodes.ReflectedMethodNodeWrapper
struct ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031;
// FlowCanvas.Nodes.RelayValueInputBase
struct RelayValueInputBase_t8E5318F595B50464768F33B711426F6F082C0D32;
// FlowCanvas.Nodes.RelayValueOutputBase
struct RelayValueOutputBase_t839E282BC064ECB02C91BC233DA10D45BDB6CF16;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ParadoxNotion.Serialization.SerializedMethodInfo
struct SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1;
// FlowCanvas.Nodes.StaticCodeEvent
struct StaticCodeEvent_tA69FBAD55AD58E1568C863D69F91B97B0C07D259;
// FlowCanvas.Nodes.StaticCodeEventBase
struct StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// FlowCanvas.ValueHandlerObject
struct ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8;
// FlowCanvas.ValueInput
struct ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D;
// FlowCanvas.ValueOutput
struct ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0;
// NodeCanvas.Framework.Variable
struct Variable_t60C01143D3B1491B2FFEB305052C327D03DDF4AA;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD;
// ParadoxNotion.HierarchyTree/Element
struct Element_t3ABE015B81AFFE208F4314A4A588E9E7EFD63407;
// FlowCanvas.Macros.Macro/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F;
// FlowCanvas.Macros.Macro/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C;
// FlowCanvas.Macros.Macro/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509;
// FlowCanvas.Macros.Macro/DerivedSerializationData
struct DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412;
// FlowCanvas.Macros.MacroInputNode/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F;
// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F;
// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_1
struct U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF;
// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_2
struct U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789;
// FlowCanvas.Macros.MacroOutputNode/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD;
// FlowCanvas.Nodes.NullObject/<>c
struct U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E;
// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788;
// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE;
// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_2
struct U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106;
// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3
struct U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F;
// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1;
// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_1
struct U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26;
// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_2
struct U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164;
// FlowCanvas.Nodes.Legacy.ReflectedActionNode/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001;
// FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c
struct U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B;
// FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t083860B929985EC8DF79C99B5157C38632F84196_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t790E3300CD054164B42266D675076FECE295D2F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializedMethodBaseInfo_t4E7D7FFDA0A3AD2165971527C863BA35FD351E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringUtils_t1B1A8555A1FD4C84FEEF6A67762EA7230E48164A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06641D721A187EEF2162C9B440C604A760D59916;
IL2CPP_EXTERN_C String_t* _stringLiteral0E95785B1B7D58EE35F48653A3347B481AB384B7;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral35527D85E84EE581E654DE732424814873E50342;
IL2CPP_EXTERN_C String_t* _stringLiteral4B309B07230BF9E0BDC7672EAC8DF8DA92501DBA;
IL2CPP_EXTERN_C String_t* _stringLiteral7D578E7799F5D7E7290B821DAB5BEF207E9A220A;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteral8C3DC3545B19367340C353E1C8BBC9B14CB5F2AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA7E36EDD811A9F27412277F0A8C07BFEB2951D0C;
IL2CPP_EXTERN_C String_t* _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE015B39BEC2658EEB29E225B89BDCEC1CE1C74;
IL2CPP_EXTERN_C String_t* _stringLiteralD545CEA0411270A371740D020B39BA5FBEFAAABE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5CC4384616451E5367E69A70DCEC428753E4BC;
IL2CPP_EXTERN_C String_t* _stringLiteralEBCF4E0EFA1E77D5BC994B68E1C35B6AD765FFDC;
IL2CPP_EXTERN_C String_t* _stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D;
IL2CPP_EXTERN_C const RuntimeMethod* BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallableFunctionNode_4__ctor_mDDE10BBC92E06065A5EC7DD71648A2ACFCEF50DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodeEvent_Call_m8FE91A50B4190F4472B6B83E4B7D87A290A9BB96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m71334EBE38F3F7E925FF57332D93988AA91BD290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC309D921A9B6D5BD89BD95BC8A944368B441228B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD379A7A7FC86B5A76B1F743AF803C62292EF5F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEF1EA5784E50B8BFDDA6EF2A8067B3B1C28586BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m6FEDBE31D78DFD9FB0F9509C800DC72950673F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisDynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_mEBBCEE999A57236EDA769814C68D9F6E47D4A600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m60AF9EDFD3D5D2CDA1CE91CD790FDDFF6B3DD0DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m3B43C6ABEB26C48387D1B0BD85BF284EC2ED08FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6D9929A29574CB9F49ACF6951E1389A6CA7C9798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m6CBB88ACC26C645D1A196FD3996503B0DDB8B3B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisType_t_m275E353BA1242C1B0AF4B73B7BEE3994E4DF6A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventNode_1_ResolveSelf_m08E82C06E78C5821700D6D7959B118DE5B1D95B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventNode_1__ctor_m339EBA0A6D82C50457764A34DCFB711F27357C5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_3__ctor_m4C5ABB212354E679021130915DBD4403F7791F71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_3__ctor_m5AC336B895A9013B863FB709C63AF049EE4E31F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_4__ctor_mEE2549C4A9160FF1CE397B8CAEE4CAAC39D1F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_m2F7905F0445351D757850C78317DE02182C6389B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_m5C853EAD748B899A98000F0332F9B4DA50F8EA67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_m7EB582214308C06E78302EF3E824CD508561AB1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_m8521D3C262CC7849765A30A26EB6295F0D767AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_m9955B4BBCA8F8D00108DFE3D6DB4BEB48004F7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_mC3730FB71A2C0317262CB36CAA14F8607FC773EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_mCC05494AE232B636C4FADBF969A836E9DD250FB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_mCD1D80A82F75BC083A844C0C3EFA560DD49CB392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_5__ctor_mF4E181E12E8BD69BD2A5AAF948A8AEA0A7625DD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_6__ctor_m433E502295A5DA174A8CF33D15BD5C43881E8601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_6__ctor_mA6DB4D82999B1E8FC457A7DDA38D284175F1EBCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_6__ctor_mD18C712DBDE535CF610F2BCC43296CCAEF5B3A6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractorNode_6__ctor_mE28ACE9D633C8A9B646119E81DCA8E4B5BD74806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlowNestedBase_1__ctor_m72C1DC0DA6A1A95261C669627B68848886F4145D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlowNode_AddValueOutput_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8AB02FBD59060B8FDFEEE085A69A0EA577C40431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Graph_AddNode_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6DA3127C848855E2093BDB809D3BCBDA6106320D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Graph_AddNode_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_mC955FC30D724C926D9366C4AB1D1461FE61368DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Graph_Clone_TisMacro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_m37C28E2E62B9C80BBEB14D86AC102EEF05B1B226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m92EF6B417E2100D09897A1008F8292FC63B38229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED4F73CA4066DDCEDD35781D6C1CDBA6FADD0370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3875A9434C58C8BB5295E7ACA979966A0F32434C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_set_instances_m5C8DFF2E149DFAF59CC0914959E0AC849CA5D9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OwnerVariable_U3CRegisterPortsU3Eb__2_0_mBA8B50E663AE16F171F7C7AF47F5F42326995029_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_3__ctor_m6D3F0E559BD33E3F7F6A99AE96185966C5174A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_3__ctor_m9DDC0D71F0FF93D45A446950FF97BB026AF405FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_3__ctor_mFFC40FB5EB3195520A0FA383DE0BA326E27B9D2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_4__ctor_mB55D0B59AF7AE0D2EB5F0AD3AC1CE2D117200E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_5__ctor_m391F4B135AB87FF213650D32C0D91C77C44D6058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_5__ctor_mEFC95B614F549A5A9BF6CBA14F914CA527014539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_5__ctor_mF50B28896B5F42695FA13BE543B37F08E6DD4D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PureFunctionNode_5__ctor_mFF1E914D4EE64A4EE36C7E8A8F2D536DF65FD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionTools_RTCreateDelegate_TisActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF_m2A046D14E381451F478690F0F2A1EFE16CE3D155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StaticCodeEvent_Call_m460B576F9D06BF4EB10C46ADF60B4792E7CE39CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterPortsU3Eb__0_0_m0BC8EC864FE83D7841108B98BE775A1C03E1CE4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTryCreateJitU3Eb__2_0_mF15E74BA3D392076EAF4047CC763B4A9753FE7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTryCreateJitU3Eb__2_1_m6092CBA44B414339FE50531181A104D9C4AE93C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_1_U3CRegisterPortsU3Eb__0_mC2C9A555FA61F478B4E6136E1A447CE7705135A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_2_U3CRegisterPortsU3Eb__1_m645F4AB0EA1DEC63890AAAE209256D1DA94261B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__2_m3963B7F84D65679E041FDB27E1246503AF7166CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__3_m1C6BA1032EADD3FA38F4AEE56283E31C5268961F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CAddInputDefinitionU3Eb__0_m60B5DE650C93B266163DA981BA6AAD7990D59040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddOutputDefinitionU3Eb__0_mB460FFF87A7A8960341D4EA190DF2C32C4B1FE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CCreateU3Eb__0_mC55B28F48FC6F8683B6F4DF5B4CF58865A544474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CCallFlowInputU3Eb__0_m47979CDE7F43B015ED238CDB63C940656F90AFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_1_U3CRegisterPortsU3Eb__0_m52CCBF3BF41DEE1CFB138D9B30B7C435CA755117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_2_U3CRegisterPortsU3Eb__1_m7AFA69750EAA3557EC67A1BB8FD2C5CD41CA0595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRegisterPortsU3Eb__0_m1415CF1F7A1B54940CBCF9E39567B647109E04E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m31E99DD1E14EE92F95B02EA0B25C3D8EB973BC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m394D05632CE9405AE110AF85340B22A35A8F303E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__0_m225CED944A8BFD13EB2FDC118A1BE9CF3EF7CD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__1_m9FC059BB74FD1FA6407C2ED402DE9D5C4B933CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_1_U3CRegisterPortsU3Eb__2_m19688444C0499AC6DC886F02AD92798D676AAB84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_2_U3CRegisterPortsU3Eb__3_m718F8A28C1C1FA8D762D7499CB90454680E72C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueInput_1__ctor_m3F443E59624DD23868C01CF491B618666F93AB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_1_tE11418DE74F12DD27920DE8A5EFBD9E5857F0795_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_2_tDF9F91B2E853A6CB8C1A5C1A6F246E4857BA0F18_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_3_t500CEC2C807F3DC2CA1908DAB7DB495D32E076F5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_4_t204A9FD9AB9DFBD516CC59595ED043E1F7FED587_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_5_t9971B44259BF2680E4DC370A70DAA1F8885AAC83_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_6_t4B25ECE96F467E196F6304A383E3CD7D95B7B584_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_7_t696F6F967F65FE888DAEB42E03869236CA1E1FF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_8_t31CA65FDB4ECD1CFFA0EDB47BD3E796E5AA08455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_1_t994D1C0C64E5BF71E7010BAF85C99DD31ED8B0CF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_2_tBEFEF5AD13E68DEC9A95D606E947993A42EAE2AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_3_t967297F6121083FC4EDBA15716C5F34B69AE0937_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_4_t8A2B1CC223C3BD8441EC34F370C9BB08744E5969_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_5_t88B5EB4889915A7BE7B8DF25C8EF6FCD046E1FB1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_6_tCDC33040D0DC1EF51FB7F12D27FF72D2AF6597AE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_7_t34BC7524E73036BFCE46C6C9681ECED9E21F0F5B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_8_t11C39AA4A49B150FBF1C29283B0FCCCDB2CFCFD9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectedFunctionNode_9_t10B93736B5C827CF50761A54C02C1ABBA32F396D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>
struct Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t360CD71AE0C509E38210218D79033194C4F8B5D7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB6B20AA27D1FB7391FAE0D46ADAC547657C124FB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t92472E911F4576EC82C8BDBA86E6261CF5D65849* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.FlowHandler>
struct Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t847252B89E18115DA7F28F297C05681B66DA169F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9B16C7121510494EF323A873DDE509426124E621* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7AF27C1124D34F7DBF66E970DAE2124C662C5744* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.ValueHandlerObject>
struct Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tACAD13FBBFCA64D639CE37179F51FAA33F0D4025* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA54A2819AFE3CF537C1B45FED6BA60431330D4E1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8587F09ACC1E6EDC0C9079913A3560D8B70AAFED* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<NodeCanvas.Framework.Internal.BBMappingParameter>
struct List_1_t624B7FC2AE145EBF7BB7EE422EF3049A2BBD744B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BBMappingParameterU5BU5D_tF38AF50E437C333E5DCBCD3FB3B45D48DCC59F58* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t624B7FC2AE145EBF7BB7EE422EF3049A2BBD744B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BBMappingParameterU5BU5D_tF38AF50E437C333E5DCBCD3FB3B45D48DCC59F58* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition>
struct List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DynamicParameterDefinitionU5BU5D_tF8BB7CC9218FCCE52AD9FB9476EB4E763666CE15* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DynamicParameterDefinitionU5BU5D_tF8BB7CC9218FCCE52AD9FB9476EB4E763666CE15* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<NodeCanvas.Framework.Node>
struct List_1_t90487A8EA186417AA0A6F2B22B58D1BAE3334437  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NodeU5BU5D_t9ED98B145FDFEDFC80FCBDF86A3D7B4D21CB89A2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t90487A8EA186417AA0A6F2B22B58D1BAE3334437_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NodeU5BU5D_t9ED98B145FDFEDFC80FCBDF86A3D7B4D21CB89A2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FlowCanvas.ValueInput>
struct List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueInputU5BU5D_t4896A2209B0F7B7409814D715CC557908F7F6B26* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueInputU5BU5D_t4896A2209B0F7B7409814D715CC557908F7F6B26* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// NodeCanvas.Framework.BBParameter
struct BBParameter_tD717AF8560E573DF3DA925034F257F669CDDBA60  : public RuntimeObject
{
	// System.String NodeCanvas.Framework.BBParameter::_name
	String_t* ____name_0;
	// System.String NodeCanvas.Framework.BBParameter::_targetVariableID
	String_t* ____targetVariableID_1;
	// NodeCanvas.Framework.IBlackboard NodeCanvas.Framework.BBParameter::_bb
	RuntimeObject* ____bb_2;
	// NodeCanvas.Framework.Variable NodeCanvas.Framework.BBParameter::_varRef
	Variable_t60C01143D3B1491B2FFEB305052C327D03DDF4AA* ____varRef_3;
	// System.Action`1<NodeCanvas.Framework.Variable> NodeCanvas.Framework.BBParameter::onVariableReferenceChanged
	Action_1_t924369B78685936188D9F308D270D4B74F46B374* ___onVariableReferenceChanged_4;
};

// NodeCanvas.Framework.Connection
struct Connection_t5306F1F5231246BC84674F9646F1B1393C0F8C7D  : public RuntimeObject
{
	// NodeCanvas.Framework.Node NodeCanvas.Framework.Connection::_sourceNode
	Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8* ____sourceNode_0;
	// NodeCanvas.Framework.Node NodeCanvas.Framework.Connection::_targetNode
	Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8* ____targetNode_1;
	// System.String NodeCanvas.Framework.Connection::_UID
	String_t* ____UID_2;
	// System.Boolean NodeCanvas.Framework.Connection::_isDisabled
	bool ____isDisabled_3;
	// NodeCanvas.Framework.Status NodeCanvas.Framework.Connection::_status
	int32_t ____status_4;
};

// ParadoxNotion.DynamicParameterDefinition
struct DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874  : public RuntimeObject
{
	// System.String ParadoxNotion.DynamicParameterDefinition::_ID
	String_t* ____ID_0;
	// System.String ParadoxNotion.DynamicParameterDefinition::_name
	String_t* ____name_1;
	// System.String ParadoxNotion.DynamicParameterDefinition::_type
	String_t* ____type_2;
	// System.Type ParadoxNotion.DynamicParameterDefinition::<type>k__BackingField
	Type_t* ___U3CtypeU3Ek__BackingField_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// FlowCanvas.Port
struct Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD  : public RuntimeObject
{
	// FlowCanvas.FlowNode FlowCanvas.Port::<parent>k__BackingField
	FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* ___U3CparentU3Ek__BackingField_0;
	// System.String FlowCanvas.Port::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_1;
	// System.String FlowCanvas.Port::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// System.Int32 FlowCanvas.Port::<connections>k__BackingField
	int32_t ___U3CconnectionsU3Ek__BackingField_3;
	// FlowCanvas.Port/BindStatus FlowCanvas.Port::<bindStatus>k__BackingField
	int32_t ___U3CbindStatusU3Ek__BackingField_4;
	// UnityEngine.GUIContent FlowCanvas.Port::<displayContent>k__BackingField
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___U3CdisplayContentU3Ek__BackingField_5;
};

// FlowCanvas.Nodes.Legacy.ReflectedFieldNode
struct ReflectedFieldNode_t9CD932A9B7F77ACC1429D6ACA7168DF83C68BBC3  : public RuntimeObject
{
};

// FlowCanvas.Nodes.Legacy.ReflectedMethodNode
struct ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F  : public RuntimeObject
{
};

// ParadoxNotion.ReflectionTools
struct ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A  : public RuntimeObject
{
};

struct ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_StaticFields
{
	// System.Reflection.Assembly[] ParadoxNotion.ReflectionTools::_loadedAssemblies
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ____loadedAssemblies_2;
	// System.Type[] ParadoxNotion.ReflectionTools::_allTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____allTypes_3;
	// System.Object[] ParadoxNotion.ReflectionTools::_tempArgs
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____tempArgs_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> ParadoxNotion.ReflectionTools::_typesMap
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ____typesMap_5;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type[]> ParadoxNotion.ReflectionTools::_subTypesMap
	Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74* ____subTypesMap_6;
	// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,ParadoxNotion.ReflectionTools/MethodType> ParadoxNotion.ReflectionTools::_methodSpecialType
	Dictionary_2_tDE43543D51BAF8C549BA1C14849F216F1CECA492* ____methodSpecialType_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> ParadoxNotion.ReflectionTools::_typeFriendlyName
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* ____typeFriendlyName_8;
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> ParadoxNotion.ReflectionTools::_typeFriendlyNameCompileSafe
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* ____typeFriendlyNameCompileSafe_9;
	// System.Collections.Generic.Dictionary`2<System.Reflection.MethodBase,System.String> ParadoxNotion.ReflectionTools::_methodSignatures
	Dictionary_2_tB99BE1F98E2256A42A0607D4DF41295F5DC662AF* ____methodSignatures_10;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.ConstructorInfo[]> ParadoxNotion.ReflectionTools::_typeConstructors
	Dictionary_2_t2FF68596D4538465717BB4ED01363A7CA08B8C79* ____typeConstructors_11;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo[]> ParadoxNotion.ReflectionTools::_typeMethods
	Dictionary_2_tE271D578889BD0F25D4C0BF8524ABC171B216470* ____typeMethods_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]> ParadoxNotion.ReflectionTools::_typeFields
	Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365* ____typeFields_13;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo[]> ParadoxNotion.ReflectionTools::_typeProperties
	Dictionary_2_t1C975266349E9BFED4CE843F46E4A1C10DC28CAD* ____typeProperties_14;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.EventInfo[]> ParadoxNotion.ReflectionTools::_typeEvents
	Dictionary_2_t73AAD868FA51D0A42C7A4CA6432996DD2AF63CEE* ____typeEvents_15;
	// System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,System.Object[]> ParadoxNotion.ReflectionTools::_memberAttributes
	Dictionary_2_tB4A455D09FC3BAF8E4EDE22EA13FE413D2FA87E5* ____memberAttributes_16;
	// System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,System.Boolean> ParadoxNotion.ReflectionTools::_obsoleteCache
	Dictionary_2_tF911E54AE967371E5AC2088BA2263F5EC87357B9* ____obsoleteCache_17;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo[]> ParadoxNotion.ReflectionTools::_typeExtensions
	Dictionary_2_tE271D578889BD0F25D4C0BF8524ABC171B216470* ____typeExtensions_18;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type[]> ParadoxNotion.ReflectionTools::_genericArgsTypeCache
	Dictionary_2_t362AB1E36F58A6769607F7DA6835762F36230B74* ____genericArgsTypeCache_19;
	// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Type[]> ParadoxNotion.ReflectionTools::_genericArgsMathodCache
	Dictionary_2_t703AB49ED2A82EFB163B756B55B31DDB0146278D* ____genericArgsMathodCache_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ParadoxNotion.ReflectionTools::op_FriendlyNamesLong
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___op_FriendlyNamesLong_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ParadoxNotion.ReflectionTools::op_FriendlyNamesShort
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___op_FriendlyNamesShort_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ParadoxNotion.ReflectionTools::op_CSharpAliases
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___op_CSharpAliases_23;
};

// ParadoxNotion.Serialization.SerializedMethodInfo
struct SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1  : public RuntimeObject
{
	// System.String ParadoxNotion.Serialization.SerializedMethodInfo::_baseInfo
	String_t* ____baseInfo_0;
	// System.String ParadoxNotion.Serialization.SerializedMethodInfo::_paramsInfo
	String_t* ____paramsInfo_1;
	// System.String ParadoxNotion.Serialization.SerializedMethodInfo::_genericArgumentsInfo
	String_t* ____genericArgumentsInfo_2;
	// System.Reflection.MethodInfo ParadoxNotion.Serialization.SerializedMethodInfo::_method
	MethodInfo_t* ____method_3;
	// System.Boolean ParadoxNotion.Serialization.SerializedMethodInfo::_hasChanged
	bool ____hasChanged_4;
};

// FlowCanvas.Nodes.SimplexNode
struct SimplexNode_t613BB162905B641EA44DB55A29D56E78BED1A8FD  : public RuntimeObject
{
	// System.String FlowCanvas.Nodes.SimplexNode::_name
	String_t* ____name_0;
	// System.String FlowCanvas.Nodes.SimplexNode::_description
	String_t* ____description_1;
	// FlowCanvas.FlowNode FlowCanvas.Nodes.SimplexNode::<parentNode>k__BackingField
	FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* ___U3CparentNodeU3Ek__BackingField_2;
	// System.Reflection.ParameterInfo[] FlowCanvas.Nodes.SimplexNode::_parameters
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ____parameters_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// FlowCanvas.Macros.Macro/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F  : public RuntimeObject
{
	// ParadoxNotion.DynamicParameterDefinition FlowCanvas.Macros.Macro/<>c__DisplayClass18_0::def
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def_0;
};

// FlowCanvas.Macros.Macro/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C  : public RuntimeObject
{
	// ParadoxNotion.DynamicParameterDefinition FlowCanvas.Macros.Macro/<>c__DisplayClass19_0::def
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def_0;
};

// FlowCanvas.Macros.Macro/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509  : public RuntimeObject
{
	// System.String FlowCanvas.Macros.Macro/<>c__DisplayClass22_0::name
	String_t* ___name_0;
};

// FlowCanvas.Macros.Macro/DerivedSerializationData
struct DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412  : public RuntimeObject
{
	// System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition> FlowCanvas.Macros.Macro/DerivedSerializationData::inputDefinitions
	List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* ___inputDefinitions_0;
	// System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition> FlowCanvas.Macros.Macro/DerivedSerializationData::outputDefinitions
	List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* ___outputDefinitions_1;
};

// FlowCanvas.Macros.MacroInputNode/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F  : public RuntimeObject
{
	// ParadoxNotion.DynamicParameterDefinition FlowCanvas.Macros.MacroInputNode/<>c__DisplayClass4_0::def
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def_0;
	// FlowCanvas.Macros.MacroInputNode FlowCanvas.Macros.MacroInputNode/<>c__DisplayClass4_0::<>4__this
	MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* ___U3CU3E4__this_1;
};

// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F  : public RuntimeObject
{
	// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_0::target
	Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* ___target_0;
};

// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_1
struct U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF  : public RuntimeObject
{
	// ParadoxNotion.DynamicParameterDefinition FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_1::defIn
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___defIn_0;
	// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_0 FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* ___CSU24U3CU3E8__locals1_1;
};

// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_2
struct U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789  : public RuntimeObject
{
	// ParadoxNotion.DynamicParameterDefinition FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_2::defOut
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___defOut_0;
	// FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_0 FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* ___CSU24U3CU3E8__locals2_1;
};

// FlowCanvas.Macros.MacroOutputNode/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD  : public RuntimeObject
{
	// ParadoxNotion.DynamicParameterDefinition FlowCanvas.Macros.MacroOutputNode/<>c__DisplayClass4_0::def
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def_0;
	// FlowCanvas.Macros.MacroOutputNode FlowCanvas.Macros.MacroOutputNode/<>c__DisplayClass4_0::<>4__this
	MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* ___U3CU3E4__this_1;
};

// FlowCanvas.Nodes.NullObject/<>c
struct U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E  : public RuntimeObject
{
};

struct U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_StaticFields
{
	// FlowCanvas.Nodes.NullObject/<>c FlowCanvas.Nodes.NullObject/<>c::<>9
	U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E* ___U3CU3E9_0;
	// FlowCanvas.ValueHandler`1<System.Object> FlowCanvas.Nodes.NullObject/<>c::<>9__0_0
	ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* ___U3CU3E9__0_0_1;
};

// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788  : public RuntimeObject
{
	// System.Reflection.FieldInfo FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_0::field
	FieldInfo_t* ___field_0;
};

// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE  : public RuntimeObject
{
	// System.Object FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_1::constantValue
	RuntimeObject* ___constantValue_0;
};

// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_2
struct U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106  : public RuntimeObject
{
	// FlowCanvas.ValueInput FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_2::instanceInput
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* ___instanceInput_0;
	// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_0 FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_2::CS$<>8__locals1
	U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* ___CSU24U3CU3E8__locals1_1;
};

// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3
struct U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F  : public RuntimeObject
{
	// System.Object FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::instance
	RuntimeObject* ___instance_0;
	// FlowCanvas.ValueInput FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::instanceInput
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* ___instanceInput_1;
	// FlowCanvas.ValueInput FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::valueInput
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* ___valueInput_2;
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::flowOut
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___flowOut_3;
	// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_0 FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::CS$<>8__locals2
	U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* ___CSU24U3CU3E8__locals2_4;
};

// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_1
struct U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26  : public RuntimeObject
{
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_1::o
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___o_0;
	// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0 FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* ___CSU24U3CU3E8__locals1_1;
};

// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_2
struct U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164  : public RuntimeObject
{
	// System.Int32 FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_2::i
	int32_t ___i_0;
	// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0 FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* ___CSU24U3CU3E8__locals2_1;
};

// FlowCanvas.Nodes.Legacy.ReflectedActionNode/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001  : public RuntimeObject
{
	// FlowCanvas.Nodes.Legacy.ReflectedActionNode FlowCanvas.Nodes.Legacy.ReflectedActionNode/<>c__DisplayClass2_0::<>4__this
	ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744* ___U3CU3E4__this_0;
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.Legacy.ReflectedActionNode/<>c__DisplayClass2_0::o
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___o_1;
};

// FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c
struct U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B  : public RuntimeObject
{
};

struct U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields
{
	// FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::<>9
	U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::<>9__2_0
	Func_2_t083860B929985EC8DF79C99B5157C38632F84196* ___U3CU3E9__2_0_1;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::<>9__2_1
	Func_2_t083860B929985EC8DF79C99B5157C38632F84196* ___U3CU3E9__2_1_2;
};

// FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21  : public RuntimeObject
{
	// System.Reflection.ParameterInfo[] FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c__DisplayClass1_0::parameters
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___parameters_0;
};

// NodeCanvas.Framework.BBParameter`1<UnityEngine.Transform>
struct BBParameter_1_tFACCA4D200785A10D7DBEBD33086540B7E88FBAF  : public BBParameter_tD717AF8560E573DF3DA925034F257F669CDDBA60
{
	// T NodeCanvas.Framework.BBParameter`1::_value
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____value_5;
	// System.Func`1<T> NodeCanvas.Framework.BBParameter`1::getter
	Func_1_t5C8649582D0B0570068D350ED0CB20F598304F77* ___getter_6;
	// System.Action`1<T> NodeCanvas.Framework.BBParameter`1::setter
	Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D* ___setter_7;
};

// FlowCanvas.BinderConnection
struct BinderConnection_t338E14B976C2FDEC793FEC61EF1B9A51972991E1  : public Connection_t5306F1F5231246BC84674F9646F1B1393C0F8C7D
{
	// System.String FlowCanvas.BinderConnection::_sourcePortID
	String_t* ____sourcePortID_5;
	// System.String FlowCanvas.BinderConnection::_targetPortID
	String_t* ____targetPortID_6;
	// FlowCanvas.Port FlowCanvas.BinderConnection::_sourcePort
	Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* ____sourcePort_7;
	// FlowCanvas.Port FlowCanvas.BinderConnection::_targetPort
	Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* ____targetPort_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// FlowCanvas.Nodes.CallableFunctionNodeBase
struct CallableFunctionNodeBase_tCD9CE5CA1F2F605BC82B0C88C026F679E35FE068  : public SimplexNode_t613BB162905B641EA44DB55A29D56E78BED1A8FD
{
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD* ___cached_add_event_0;
};

// FlowCanvas.Nodes.ExtractorNode
struct ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93  : public SimplexNode_t613BB162905B641EA44DB55A29D56E78BED1A8FD
{
};

struct ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> FlowCanvas.Nodes.ExtractorNode::_extractors
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ____extractors_4;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// FlowCanvas.FlowInput
struct FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1  : public Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD
{
	// FlowCanvas.FlowHandler FlowCanvas.FlowInput::<pointer>k__BackingField
	FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* ___U3CpointerU3Ek__BackingField_6;
};

// FlowCanvas.FlowOutput
struct FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F  : public Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD
{
	// FlowCanvas.FlowHandler FlowCanvas.FlowOutput::pointer
	FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* ___pointer_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// FlowCanvas.Nodes.ParamDef
struct ParamDef_t76BA9B739434C35B386C8D9ECC7FD6DA4FAF6BD7 
{
	// System.Type FlowCanvas.Nodes.ParamDef::paramType
	Type_t* ___paramType_0;
	// System.Type FlowCanvas.Nodes.ParamDef::arrayType
	Type_t* ___arrayType_1;
	// FlowCanvas.Nodes.ParamMode FlowCanvas.Nodes.ParamDef::paramMode
	int32_t ___paramMode_2;
	// System.String FlowCanvas.Nodes.ParamDef::portName
	String_t* ___portName_3;
	// System.String FlowCanvas.Nodes.ParamDef::portId
	String_t* ___portId_4;
	// System.Boolean FlowCanvas.Nodes.ParamDef::isParamsArray
	bool ___isParamsArray_5;
	// System.Reflection.MemberInfo FlowCanvas.Nodes.ParamDef::presentedInfo
	MemberInfo_t* ___presentedInfo_6;
};
// Native definition for P/Invoke marshalling of FlowCanvas.Nodes.ParamDef
struct ParamDef_t76BA9B739434C35B386C8D9ECC7FD6DA4FAF6BD7_marshaled_pinvoke
{
	Type_t* ___paramType_0;
	Type_t* ___arrayType_1;
	int32_t ___paramMode_2;
	char* ___portName_3;
	char* ___portId_4;
	int32_t ___isParamsArray_5;
	MemberInfo_t* ___presentedInfo_6;
};
// Native definition for COM marshalling of FlowCanvas.Nodes.ParamDef
struct ParamDef_t76BA9B739434C35B386C8D9ECC7FD6DA4FAF6BD7_marshaled_com
{
	Type_t* ___paramType_0;
	Type_t* ___arrayType_1;
	int32_t ___paramMode_2;
	Il2CppChar* ___portName_3;
	Il2CppChar* ___portId_4;
	int32_t ___isParamsArray_5;
	MemberInfo_t* ___presentedInfo_6;
};

// FlowCanvas.Nodes.PureFunctionNodeBase
struct PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A  : public SimplexNode_t613BB162905B641EA44DB55A29D56E78BED1A8FD
{
};

// FlowCanvas.Nodes.Legacy.PureReflectedFieldNode
struct PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D  : public ReflectedFieldNode_t9CD932A9B7F77ACC1429D6ACA7168DF83C68BBC3
{
};

// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode
struct PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31  : public ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F
{
	// System.Reflection.MethodInfo FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::method
	MethodInfo_t* ___method_0;
	// FlowCanvas.ValueInput FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::instanceInput
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* ___instanceInput_1;
	// System.Collections.Generic.List`1<FlowCanvas.ValueInput> FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::inputs
	List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* ___inputs_2;
	// System.Collections.Generic.List`1<FlowCanvas.ValueInput> FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::paramsInputs
	List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* ___paramsInputs_3;
	// System.Type FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::paramsArrayType
	Type_t* ___paramsArrayType_4;
	// System.Object[] FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::args
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args_5;
	// System.Object FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::instance
	RuntimeObject* ___instance_6;
	// System.Object FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::returnValue
	RuntimeObject* ___returnValue_7;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// FlowCanvas.Nodes.Legacy.ReflectedActionNode
struct ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744  : public ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F
{
	// ParadoxNotion.ActionCall FlowCanvas.Nodes.Legacy.ReflectedActionNode::call
	ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF* ___call_0;
};

// FlowCanvas.Nodes.ReflectedMethodRegistrationOptions
struct ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 
{
	// System.Boolean FlowCanvas.Nodes.ReflectedMethodRegistrationOptions::callable
	bool ___callable_0;
	// System.Boolean FlowCanvas.Nodes.ReflectedMethodRegistrationOptions::exposeParams
	bool ___exposeParams_1;
	// System.Int32 FlowCanvas.Nodes.ReflectedMethodRegistrationOptions::exposedParamsCount
	int32_t ___exposedParamsCount_2;
};
// Native definition for P/Invoke marshalling of FlowCanvas.Nodes.ReflectedMethodRegistrationOptions
struct ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_pinvoke
{
	int32_t ___callable_0;
	int32_t ___exposeParams_1;
	int32_t ___exposedParamsCount_2;
};
// Native definition for COM marshalling of FlowCanvas.Nodes.ReflectedMethodRegistrationOptions
struct ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_com
{
	int32_t ___callable_0;
	int32_t ___exposeParams_1;
	int32_t ___exposedParamsCount_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// FlowCanvas.ValueInput
struct ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D  : public Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD
{
	// System.Boolean FlowCanvas.ValueInput::<skipSelfInstanceAssignment>k__BackingField
	bool ___U3CskipSelfInstanceAssignmentU3Ek__BackingField_6;
	// System.Boolean FlowCanvas.ValueInput::<isRequired>k__BackingField
	bool ___U3CisRequiredU3Ek__BackingField_7;
};

// FlowCanvas.ValueOutput
struct ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0  : public Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD
{
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// FlowCanvas.Flow/ReturnData
struct ReturnData_t5725494182918CEF6BACB6DA6B3F3CF7AFCC8E30 
{
	// FlowCanvas.FlowReturn FlowCanvas.Flow/ReturnData::<returnCall>k__BackingField
	FlowReturn_t1806923C4502ACEA75580A1D044096A767FA2258* ___U3CreturnCallU3Ek__BackingField_0;
	// System.Type FlowCanvas.Flow/ReturnData::<returnType>k__BackingField
	Type_t* ___U3CreturnTypeU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of FlowCanvas.Flow/ReturnData
struct ReturnData_t5725494182918CEF6BACB6DA6B3F3CF7AFCC8E30_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3CreturnCallU3Ek__BackingField_0;
	Type_t* ___U3CreturnTypeU3Ek__BackingField_1;
};
// Native definition for COM marshalling of FlowCanvas.Flow/ReturnData
struct ReturnData_t5725494182918CEF6BACB6DA6B3F3CF7AFCC8E30_marshaled_com
{
	Il2CppMethodPointer ___U3CreturnCallU3Ek__BackingField_0;
	Type_t* ___U3CreturnTypeU3Ek__BackingField_1;
};

// FlowCanvas.Nodes.CallableFunctionNode`4<UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion>
struct CallableFunctionNode_4_t5660E5EFC4BE1E9588E3AF8C01AB3688E48EE2A0  : public CallableFunctionNodeBase_tCD9CE5CA1F2F605BC82B0C88C026F679E35FE068
{
	// TResult FlowCanvas.Nodes.CallableFunctionNode`4::result
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___result_4;
};

// FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_3_t458A4E6E6EC05CD6DADFCFA13E7D736C8C1912F3  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`3::a
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`3::b
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b_6;
};

// FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Vector2,System.Single,System.Single>
struct ExtractorNode_3_tEF36C13777DBE3026B41184294DA8B616BB4DFFC  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`3::a
	float ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`3::b
	float ___b_6;
};

// FlowCanvas.Nodes.ExtractorNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>
struct ExtractorNode_4_tE14DFA343D0893ADD4EF18282F9DBD5A734335E5  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`4::a
	float ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`4::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`4::c
	float ___c_7;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.AnimationCurve,UnityEngine.Keyframe[],System.Single,UnityEngine.WrapMode,UnityEngine.WrapMode>
struct ExtractorNode_5_tA177456BDE9B93177B065DDF20281079B0F093A1  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	int32_t ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	int32_t ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_5_t12471920B60704B0DD16221EE1CE309FEBDC5858  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	float ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	float ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	float ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider,UnityEngine.Collider>
struct ExtractorNode_5_t4282A70F3210D11A5AEFF796D996B269EC35C905  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Collider2D,UnityEngine.Collider2D>
struct ExtractorNode_5_t6049F3C036B937E6B23CDAEFCA0B5CE4CB857189  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Keyframe,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_5_tD75167FDB89C071DB0D375FA53BB225287DF2BC3  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	float ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	float ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	float ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.RaycastHit,UnityEngine.GameObject,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_5_tDAB0401E5CDB34B6B022E78690BE0BFF0A6C04E1  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_5_t1990B38D7CDA54038FDFC9EC8E94AFA1E828086F  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	float ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	float ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	float ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_6_t8264D664DA0F77170CF218E684094680AF8066E6  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`6::a
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`6::b
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`6::c
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`6::d
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___d_8;
	// T5 FlowCanvas.Nodes.ExtractorNode`6::e
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___e_9;
};

// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3>
struct ExtractorNode_6_t263EBD8A0845AE6887DC475CEEBC76A83F7B6C44  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`6::a
	float ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`6::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`6::c
	float ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`6::d
	float ___d_8;
	// T5 FlowCanvas.Nodes.ExtractorNode`6::e
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___e_9;
};

// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.RaycastHit2D,UnityEngine.GameObject,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>
struct ExtractorNode_6_tE7070D1890DF15FD455F026ACD1B077CCC5050F2  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`6::a
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`6::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`6::c
	float ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`6::d
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___d_8;
	// T5 FlowCanvas.Nodes.ExtractorNode`6::e
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___e_9;
};

// FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.Single,System.Single,System.Single>
struct ExtractorNode_6_t66835993EC2DB5DBB71C4EC63936745973CB8486  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`6::a
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`6::b
	float ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`6::c
	float ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`6::d
	float ___d_8;
	// T5 FlowCanvas.Nodes.ExtractorNode`6::e
	float ___e_9;
};

// FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3>
struct PureFunctionNode_3_t03B15279553BA270B0FC8F4C3E35388BEF9D9C5E  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>
struct PureFunctionNode_3_t0DAAB6F80D24D71C68E53D981FEAAA75DD4D1A0F  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Vector2,System.Single,System.Single>
struct PureFunctionNode_3_tF8B4AD349DB6BEB93C23406F38544F3E8F751B51  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.Nodes.PureFunctionNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>
struct PureFunctionNode_4_tC6258C4E387E3B93C72B234624458301FE1B4C50  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_t6CCC5054005213F56C5415A6A8288530B2E803F7  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_t92C578BEB13C8EE07B227B55A440303268D1E39C  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_tA67A5450270B403FFC24A989A03B328872E6350E  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>
struct PureFunctionNode_5_tF2375E99D87E37757990C4C016B84B4C24A2A77D  : public PureFunctionNodeBase_tE9B68DAC10686CCE6BAD3B39C31EBCEB25D2369A
{
};

// FlowCanvas.ValueInput`1<System.Object>
struct ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36  : public ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D
{
	// FlowCanvas.ValueHandler`1<T> FlowCanvas.ValueInput`1::getter
	ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* ___getter_8;
	// System.Action`1<T> FlowCanvas.ValueInput`1::callback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback_9;
	// T FlowCanvas.ValueInput`1::_value
	RuntimeObject* ____value_10;
	// T FlowCanvas.ValueInput`1::_defaultValue
	RuntimeObject* ____defaultValue_11;
};

// FlowCanvas.ValueOutput`1<UnityEngine.GameObject>
struct ValueOutput_1_t77EC70F767F5997CCE19DB8ACD7C74F83691B3D2  : public ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0
{
	// FlowCanvas.ValueHandler`1<T> FlowCanvas.ValueOutput`1::<getter>k__BackingField
	ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49* ___U3CgetterU3Ek__BackingField_6;
};

// FlowCanvas.ValueOutput`1<System.Object>
struct ValueOutput_1_t9E3A508BB230FF30375461491A27D69FA2D78B04  : public ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0
{
	// FlowCanvas.ValueHandler`1<T> FlowCanvas.ValueOutput`1::<getter>k__BackingField
	ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* ___U3CgetterU3Ek__BackingField_6;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// FlowCanvas.Nodes.BaseReflectedMethodNode
struct BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5  : public RuntimeObject
{
	// System.Reflection.MethodInfo FlowCanvas.Nodes.BaseReflectedMethodNode::methodInfo
	MethodInfo_t* ___methodInfo_1;
	// System.Collections.Generic.List`1<FlowCanvas.Nodes.ParamDef> FlowCanvas.Nodes.BaseReflectedMethodNode::paramDefinitions
	List_1_t541A3A678CA7933F8947CEAEE4A92E04398BFDBC* ___paramDefinitions_2;
	// FlowCanvas.Nodes.ParamDef FlowCanvas.Nodes.BaseReflectedMethodNode::instanceDef
	ParamDef_t76BA9B739434C35B386C8D9ECC7FD6DA4FAF6BD7 ___instanceDef_3;
	// FlowCanvas.Nodes.ParamDef FlowCanvas.Nodes.BaseReflectedMethodNode::resultDef
	ParamDef_t76BA9B739434C35B386C8D9ECC7FD6DA4FAF6BD7 ___resultDef_4;
	// FlowCanvas.Nodes.ReflectedMethodRegistrationOptions FlowCanvas.Nodes.BaseReflectedMethodNode::options
	ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 ___options_5;
};

struct BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5_StaticFields
{
	// System.Func`2<System.Reflection.MethodInfo,FlowCanvas.Nodes.BaseReflectedMethodNode> FlowCanvas.Nodes.BaseReflectedMethodNode::OnGetAotReflectedMethodNode
	Func_2_t45AE3C0110096C1F4033B44128F4C2CCDBB32FB5* ___OnGetAotReflectedMethodNode_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
};

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// FlowCanvas.Flow
struct Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 
{
	// System.Int32 FlowCanvas.Flow::<ticks>k__BackingField
	int32_t ___U3CticksU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> FlowCanvas.Flow::parameters
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_1;
	// FlowCanvas.Flow/ReturnData FlowCanvas.Flow::returnData
	ReturnData_t5725494182918CEF6BACB6DA6B3F3CF7AFCC8E30 ___returnData_2;
	// FlowCanvas.FlowBreak FlowCanvas.Flow::breakCall
	FlowBreak_t31C5FA4B335688ADF7FCF54EF64E9A08C5E27B2D* ___breakCall_3;
};
// Native definition for P/Invoke marshalling of FlowCanvas.Flow
struct Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_marshaled_pinvoke
{
	int32_t ___U3CticksU3Ek__BackingField_0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_1;
	ReturnData_t5725494182918CEF6BACB6DA6B3F3CF7AFCC8E30_marshaled_pinvoke ___returnData_2;
	Il2CppMethodPointer ___breakCall_3;
};
// Native definition for COM marshalling of FlowCanvas.Flow
struct Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_marshaled_com
{
	int32_t ___U3CticksU3Ek__BackingField_0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters_1;
	ReturnData_t5725494182918CEF6BACB6DA6B3F3CF7AFCC8E30_marshaled_com ___returnData_2;
	Il2CppMethodPointer ___breakCall_3;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// NodeCanvas.Framework.Node
struct Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8  : public RuntimeObject
{
	// System.String NodeCanvas.Framework.Node::_UID
	String_t* ____UID_0;
	// System.String NodeCanvas.Framework.Node::_name
	String_t* ____name_1;
	// System.String NodeCanvas.Framework.Node::_tag
	String_t* ____tag_2;
	// UnityEngine.Vector2 NodeCanvas.Framework.Node::_position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____position_3;
	// System.String NodeCanvas.Framework.Node::_comment
	String_t* ____comment_4;
	// System.Boolean NodeCanvas.Framework.Node::_isBreakpoint
	bool ____isBreakpoint_5;
	// NodeCanvas.Framework.Graph NodeCanvas.Framework.Node::_graph
	Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ____graph_6;
	// System.Int32 NodeCanvas.Framework.Node::_ID
	int32_t ____ID_7;
	// System.Collections.Generic.List`1<NodeCanvas.Framework.Connection> NodeCanvas.Framework.Node::_inConnections
	List_1_t619EB3258C7F1EBD15A485EA09888BE9FC87AC7E* ____inConnections_8;
	// System.Collections.Generic.List`1<NodeCanvas.Framework.Connection> NodeCanvas.Framework.Node::_outConnections
	List_1_t619EB3258C7F1EBD15A485EA09888BE9FC87AC7E* ____outConnections_9;
	// NodeCanvas.Framework.Status NodeCanvas.Framework.Node::_status
	int32_t ____status_10;
	// System.String NodeCanvas.Framework.Node::_nameCache
	String_t* ____nameCache_11;
	// System.String NodeCanvas.Framework.Node::_descriptionCache
	String_t* ____descriptionCache_12;
	// System.Int32 NodeCanvas.Framework.Node::_priorityCache
	int32_t ____priorityCache_13;
	// System.Single NodeCanvas.Framework.Node::<timeStarted>k__BackingField
	float ___U3CtimeStartedU3Ek__BackingField_14;
	// System.Boolean NodeCanvas.Framework.Node::<isChecked>k__BackingField
	bool ___U3CisCheckedU3Ek__BackingField_15;
	// System.Boolean NodeCanvas.Framework.Node::<breakPointReached>k__BackingField
	bool ___U3CbreakPointReachedU3Ek__BackingField_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1  : public RuntimeObject
{
	// FlowCanvas.Nodes.Legacy.PureReflectedMethodNode FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0::<>4__this
	PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* ___U3CU3E4__this_0;
	// FlowCanvas.Nodes.ReflectedMethodRegistrationOptions FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0::options
	ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 ___options_1;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Collision,UnityEngine.ContactPoint[],UnityEngine.ContactPoint,UnityEngine.GameObject,UnityEngine.Vector3>
struct ExtractorNode_5_t1164BB3E37D2EFB537E24BE24CF2865BC9C40E15  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___d_8;
};

// FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Collision2D,UnityEngine.ContactPoint2D[],UnityEngine.ContactPoint2D,UnityEngine.GameObject,UnityEngine.Vector2>
struct ExtractorNode_5_tE7260ED1074A0E59D069358489A601734BBEF568  : public ExtractorNode_t8249DB5A9C4E34DF6CA1CB945DC8415D7A4F3D93
{
	// T1 FlowCanvas.Nodes.ExtractorNode`5::a
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___a_5;
	// T2 FlowCanvas.Nodes.ExtractorNode`5::b
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___b_6;
	// T3 FlowCanvas.Nodes.ExtractorNode`5::c
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___c_7;
	// T4 FlowCanvas.Nodes.ExtractorNode`5::d
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___d_8;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// FlowCanvas.Nodes.ExtractAnimationCurve
struct ExtractAnimationCurve_t6E5A2B47F45C21FCD7A4D3B0840E62210867C944  : public ExtractorNode_5_tA177456BDE9B93177B065DDF20281079B0F093A1
{
};

// FlowCanvas.Nodes.ExtractBounds
struct ExtractBounds_t402A6A17BE6D0A14393CAE8197230D8B0F6EB162  : public ExtractorNode_6_t8264D664DA0F77170CF218E684094680AF8066E6
{
};

// FlowCanvas.Nodes.ExtractColor
struct ExtractColor_tDAA8C8D17F76D7F2776E9DFCA5D22D8795CC7A75  : public ExtractorNode_5_t12471920B60704B0DD16221EE1CE309FEBDC5858
{
};

// FlowCanvas.Nodes.ExtractContactPoint
struct ExtractContactPoint_t9515579A90C0998E97220F296225EFF8DFDCE778  : public ExtractorNode_5_t4282A70F3210D11A5AEFF796D996B269EC35C905
{
};

// FlowCanvas.Nodes.ExtractContactPoint2D
struct ExtractContactPoint2D_t64351115DD07E0BCEBD11A5AA87E069186491BDA  : public ExtractorNode_5_t6049F3C036B937E6B23CDAEFCA0B5CE4CB857189
{
};

// FlowCanvas.Nodes.ExtractKeyFrame
struct ExtractKeyFrame_t5BAD627065EDDF66B228CCA8773307E6BB95D05D  : public ExtractorNode_5_tD75167FDB89C071DB0D375FA53BB225287DF2BC3
{
};

// FlowCanvas.Nodes.ExtractQuaternion
struct ExtractQuaternion_tA864A63DC101B4FC78C6B6EFC7EC2AF246B57508  : public ExtractorNode_6_t263EBD8A0845AE6887DC475CEEBC76A83F7B6C44
{
};

// FlowCanvas.Nodes.ExtractRay
struct ExtractRay_tF346B81C2CB742DE878365246DE885AB49BF2F15  : public ExtractorNode_3_t458A4E6E6EC05CD6DADFCFA13E7D736C8C1912F3
{
};

// FlowCanvas.Nodes.ExtractRaycastHit
struct ExtractRaycastHit_t08CF467E2A539B85E051FB2C45BEBDC22079FDA0  : public ExtractorNode_5_tDAB0401E5CDB34B6B022E78690BE0BFF0A6C04E1
{
};

// FlowCanvas.Nodes.ExtractRaycastHit2D
struct ExtractRaycastHit2D_tC7BC249AA03143E7927563EF8FA2361B6C412477  : public ExtractorNode_6_tE7070D1890DF15FD455F026ACD1B077CCC5050F2
{
};

// FlowCanvas.Nodes.ExtractRect
struct ExtractRect_tA3E7D7F71BE4969C7513FCEE49CFE0C2463F478E  : public ExtractorNode_6_t66835993EC2DB5DBB71C4EC63936745973CB8486
{
};

// FlowCanvas.Nodes.ExtractVector2
struct ExtractVector2_tB163A20D0A0FF6A20BDAC0C4764AFE53388BD7A5  : public ExtractorNode_3_tEF36C13777DBE3026B41184294DA8B616BB4DFFC
{
};

// FlowCanvas.Nodes.ExtractVector3
struct ExtractVector3_tE213E0064532FA5E9034A9CA0E4F774356E65040  : public ExtractorNode_4_tE14DFA343D0893ADD4EF18282F9DBD5A734335E5
{
};

// FlowCanvas.Nodes.ExtractVector4
struct ExtractVector4_t047B065599272526E94039FD40BC0BFC47AC5BD8  : public ExtractorNode_5_t1990B38D7CDA54038FDFC9EC8E94AFA1E828086F
{
};

// FlowCanvas.FlowNode
struct FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB  : public Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> FlowCanvas.FlowNode::_inputPortValues
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____inputPortValues_17;
	// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.Port> FlowCanvas.FlowNode::inputPorts
	Dictionary_2_t5A90A7597EA323A0957D8123401252F3D6FD12A5* ___inputPorts_18;
	// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.Port> FlowCanvas.FlowNode::outputPorts
	Dictionary_2_t5A90A7597EA323A0957D8123401252F3D6FD12A5* ___outputPorts_19;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// FlowCanvas.Nodes.NewBounds
struct NewBounds_tCD9E71739CBDCA845ED7192DAE3A7613524ABDEC  : public PureFunctionNode_3_t03B15279553BA270B0FC8F4C3E35388BEF9D9C5E
{
};

// FlowCanvas.Nodes.NewColor
struct NewColor_t708C36A8A4E40EA31D201140FD6B87E6269FD5E0  : public PureFunctionNode_5_t6CCC5054005213F56C5415A6A8288530B2E803F7
{
};

// FlowCanvas.Nodes.NewGameObject
struct NewGameObject_t78EE87915A64F816398512F8EEA16134B7A8A458  : public CallableFunctionNode_4_t5660E5EFC4BE1E9588E3AF8C01AB3688E48EE2A0
{
};

// FlowCanvas.Nodes.NewQuaternion
struct NewQuaternion_tB54E87ADB68ECC10D430276721437B251FFFA8AC  : public PureFunctionNode_5_t92C578BEB13C8EE07B227B55A440303268D1E39C
{
};

// FlowCanvas.Nodes.NewRay
struct NewRay_tD2385433B970C238BECDB08BB7CFC74EEF543683  : public PureFunctionNode_3_t0DAAB6F80D24D71C68E53D981FEAAA75DD4D1A0F
{
};

// FlowCanvas.Nodes.NewRect
struct NewRect_t11177040E6616C53E0D6EE6563240AE2D4408909  : public PureFunctionNode_5_tA67A5450270B403FFC24A989A03B328872E6350E
{
};

// FlowCanvas.Nodes.NewVector2
struct NewVector2_t56AF31B1F8FBDC7A2DC490FEC72BF0D7D76126D2  : public PureFunctionNode_3_tF8B4AD349DB6BEB93C23406F38544F3E8F751B51
{
};

// FlowCanvas.Nodes.NewVector3
struct NewVector3_t26A0F5D15EF4E238E3B032DCF8FCC4EB48BC849A  : public PureFunctionNode_4_tC6258C4E387E3B93C72B234624458301FE1B4C50
{
};

// FlowCanvas.Nodes.NewVector4
struct NewVector4_tAA9955F6C551659BB48B1D263EC71D774C0FE37D  : public PureFunctionNode_5_tF2375E99D87E37757990C4C016B84B4C24A2A77D
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// FlowCanvas.FlowNodeNested`1<FlowCanvas.FlowScript>
struct FlowNodeNested_1_t23623691D3C8C247AA0EAF412B8C03A6A4671BD5  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
	// System.Collections.Generic.List`1<NodeCanvas.Framework.Internal.BBMappingParameter> FlowCanvas.FlowNodeNested`1::_variablesMap
	List_1_t624B7FC2AE145EBF7BB7EE422EF3049A2BBD744B* ____variablesMap_20;
	// T FlowCanvas.FlowNodeNested`1::<currentInstance>k__BackingField
	FlowScript_t4052534F3FCF4845673F9CB9A560C997C871E41B* ___U3CcurrentInstanceU3Ek__BackingField_21;
	// System.Collections.Generic.Dictionary`2<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph> FlowCanvas.FlowNodeNested`1::<instances>k__BackingField
	Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA* ___U3CinstancesU3Ek__BackingField_22;
};

// System.Func`2<ParadoxNotion.DynamicParameterDefinition,System.Boolean>
struct Func_2_t790E3300CD054164B42266D675076FECE295D2F7  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t083860B929985EC8DF79C99B5157C38632F84196  : public MulticastDelegate_t
{
};

// System.Predicate`1<ParadoxNotion.DynamicParameterDefinition>
struct Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61  : public MulticastDelegate_t
{
};

// FlowCanvas.ValueHandler`1<UnityEngine.GameObject>
struct ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49  : public MulticastDelegate_t
{
};

// FlowCanvas.ValueHandler`1<System.Object>
struct ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// ParadoxNotion.ActionCall
struct ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FlowCanvas.Nodes.CustomObjectWrapper
struct CustomObjectWrapper_t20FA1EB5FEB99D76AB3485810F36204F24D0A54B  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Nodes.EventNode
struct EventNode_t6FBBA4063F56E451C0FF107E0F97B8E41950C315  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Nodes.ExtractCollision
struct ExtractCollision_t2E8360FD3F013435C3663864A7B978507676ACB1  : public ExtractorNode_5_t1164BB3E37D2EFB537E24BE24CF2865BC9C40E15
{
};

// FlowCanvas.Nodes.ExtractCollision2D
struct ExtractCollision2D_t52FE07CB88C6DA90D37D14A379865FB625700E5D  : public ExtractorNode_5_tE7260ED1074A0E59D069358489A601734BBEF568
{
};

// FlowCanvas.FlowHandler
struct FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619  : public MulticastDelegate_t
{
};

// NodeCanvas.Framework.Graph
struct Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String NodeCanvas.Framework.Graph::_serializedGraph
	String_t* ____serializedGraph_4;
	// System.Collections.Generic.List`1<UnityEngine.Object> NodeCanvas.Framework.Graph::_objectReferences
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ____objectReferences_5;
	// NodeCanvas.Framework.Internal.GraphSource NodeCanvas.Framework.Graph::_graphSource
	GraphSource_tDFC175F2BFB99D693583B1D52BB6857C73932914* ____graphSource_6;
	// System.Boolean NodeCanvas.Framework.Graph::_haltSerialization
	bool ____haltSerialization_7;
	// UnityEngine.TextAsset NodeCanvas.Framework.Graph::_externalSerializationFile
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ____externalSerializationFile_8;
	// System.Boolean NodeCanvas.Framework.Graph::haltForUndo
	bool ___haltForUndo_9;
	// System.Action`1<System.Boolean> NodeCanvas.Framework.Graph::onFinish
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onFinish_12;
	// System.Boolean NodeCanvas.Framework.Graph::<hasInitialized>k__BackingField
	bool ___U3ChasInitializedU3Ek__BackingField_14;
	// ParadoxNotion.HierarchyTree/Element NodeCanvas.Framework.Graph::<flatMetaGraph>k__BackingField
	Element_t3ABE015B81AFFE208F4314A4A588E9E7EFD63407* ___U3CflatMetaGraphU3Ek__BackingField_15;
	// ParadoxNotion.HierarchyTree/Element NodeCanvas.Framework.Graph::<fullMetaGraph>k__BackingField
	Element_t3ABE015B81AFFE208F4314A4A588E9E7EFD63407* ___U3CfullMetaGraphU3Ek__BackingField_16;
	// ParadoxNotion.HierarchyTree/Element NodeCanvas.Framework.Graph::<nestedMetaGraph>k__BackingField
	Element_t3ABE015B81AFFE208F4314A4A588E9E7EFD63407* ___U3CnestedMetaGraphU3Ek__BackingField_17;
	// NodeCanvas.Framework.Graph NodeCanvas.Framework.Graph::<parentGraph>k__BackingField
	Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ___U3CparentGraphU3Ek__BackingField_18;
	// System.Single NodeCanvas.Framework.Graph::<elapsedTime>k__BackingField
	float ___U3CelapsedTimeU3Ek__BackingField_19;
	// System.Single NodeCanvas.Framework.Graph::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_20;
	// System.Int32 NodeCanvas.Framework.Graph::<lastUpdateFrame>k__BackingField
	int32_t ___U3ClastUpdateFrameU3Ek__BackingField_21;
	// System.Boolean NodeCanvas.Framework.Graph::<isRunning>k__BackingField
	bool ___U3CisRunningU3Ek__BackingField_22;
	// System.Boolean NodeCanvas.Framework.Graph::<isPaused>k__BackingField
	bool ___U3CisPausedU3Ek__BackingField_23;
	// NodeCanvas.Framework.Graph/UpdateMode NodeCanvas.Framework.Graph::<updateMode>k__BackingField
	int32_t ___U3CupdateModeU3Ek__BackingField_24;
	// UnityEngine.Component NodeCanvas.Framework.Graph::<agent>k__BackingField
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___U3CagentU3Ek__BackingField_25;
	// NodeCanvas.Framework.IBlackboard NodeCanvas.Framework.Graph::<parentBlackboard>k__BackingField
	RuntimeObject* ___U3CparentBlackboardU3Ek__BackingField_26;
	// System.Action NodeCanvas.Framework.Graph::delayedInitCalls
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___delayedInitCalls_27;
};

struct Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032_StaticFields
{
	// System.Action`1<NodeCanvas.Framework.Graph> NodeCanvas.Framework.Graph::onGraphSerialized
	Action_1_t9D5B6373D6027B3BE7FF6B70A01B3CB38AAA3965* ___onGraphSerialized_10;
	// System.Action`1<NodeCanvas.Framework.Graph> NodeCanvas.Framework.Graph::onGraphDeserialized
	Action_1_t9D5B6373D6027B3BE7FF6B70A01B3CB38AAA3965* ___onGraphDeserialized_11;
	// System.Collections.Generic.List`1<NodeCanvas.Framework.Graph> NodeCanvas.Framework.Graph::_runningGraphs
	List_1_tAC3699D052F658AFF59ECF6AB1A90478603F6294* ____runningGraphs_13;
};

// FlowCanvas.Macros.MacroInputNode
struct MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Macros.MacroNodeWrapper
struct MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
	// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroNodeWrapper::_macro
	Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* ____macro_20;
	// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroNodeWrapper::_currentInstance
	Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* ____currentInstance_21;
};

// FlowCanvas.Macros.MacroOutputNode
struct MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Nodes.NullObject
struct NullObject_t78A45B684BADF8565824996B4A4E6B4EDE1A6B20  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Nodes.OwnerVariable
struct OwnerVariable_t9F98503FBB5EEA43D7B5135C4306BA3BF32EAD3E  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Nodes.ParameterVariableNode
struct ParameterVariableNode_t8244289ECA73B73735D6F242D931E2B92BDE2F61  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper
struct ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
	// System.Boolean FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::_callable
	bool ____callable_20;
	// System.Boolean FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::_exposeParams
	bool ____exposeParams_21;
	// System.Int32 FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::_exposedParamsCount
	int32_t ____exposedParamsCount_22;
};

// FlowCanvas.Nodes.RelayValueInputBase
struct RelayValueInputBase_t8E5318F595B50464768F33B711426F6F082C0D32  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// FlowCanvas.Nodes.RelayValueOutputBase
struct RelayValueOutputBase_t839E282BC064ECB02C91BC233DA10D45BDB6CF16  : public FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FlowCanvas.ValueHandlerObject
struct ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8  : public MulticastDelegate_t
{
};

// FlowCanvas.Nodes.EventNode`1<UnityEngine.Transform>
struct EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F  : public EventNode_t6FBBA4063F56E451C0FF107E0F97B8E41950C315
{
	// NodeCanvas.Framework.BBParameter`1<T> FlowCanvas.Nodes.EventNode`1::target
	BBParameter_1_tFACCA4D200785A10D7DBEBD33086540B7E88FBAF* ___target_20;
};

// FlowCanvas.Nodes.FlowNestedBase`1<FlowCanvas.FlowScript>
struct FlowNestedBase_1_tC4B8DBF45D09A55DB16BF874C525668030CB626F  : public FlowNodeNested_1_t23623691D3C8C247AA0EAF412B8C03A6A4671BD5
{
	// NodeCanvas.Framework.BBParameter`1<T> FlowCanvas.Nodes.FlowNestedBase`1::_subGraph
	BBParameter_1_t739C9985573E7A24DA02FC0E6E5DFF20B510895C* ____subGraph_23;
	// FlowCanvas.ValueInput`1<UnityEngine.Component> FlowCanvas.Nodes.FlowNestedBase`1::targetAgent
	ValueInput_1_tBA38C4D089CE83B04DF7776ECE40E21F09BB8FE0* ___targetAgent_24;
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.FlowNestedBase`1::onStart
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___onStart_25;
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.FlowNestedBase`1::onUpdate
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___onUpdate_26;
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.FlowNestedBase`1::onFinish
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___onFinish_27;
	// System.Boolean FlowCanvas.Nodes.FlowNestedBase`1::paused
	bool ___paused_28;
	// System.Boolean FlowCanvas.Nodes.FlowNestedBase`1::endResult
	bool ___endResult_29;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// FlowCanvas.FlowGraph
struct FlowGraph_t6375AD5F120B6C625C5E0B07A399BE261CBB63C8  : public Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032
{
	// System.Collections.Generic.List`1<NodeCanvas.Framework.IUpdatable> FlowCanvas.FlowGraph::updatableNodes
	List_1_tF3D90B5476D6AE355DFB5599CB2B0E647E33BE9B* ___updatableNodes_28;
	// System.Collections.Generic.List`1<FlowCanvas.Macros.MacroNodeWrapper> FlowCanvas.FlowGraph::macroWrappers
	List_1_t8EC824E14E334CEDEC457550E2E0790987B7A219* ___macroWrappers_29;
	// System.Collections.Generic.Dictionary`2<System.String,NodeCanvas.Framework.IInvokable> FlowCanvas.FlowGraph::functions
	Dictionary_2_tC11DBF27BCD2B8537FCF8A05930CDB48EBFADE8A* ___functions_30;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component> FlowCanvas.FlowGraph::cachedAgentComponents
	Dictionary_2_t645C11EEDE0775E6E880E2ABBF6C1605295B1DB0* ___cachedAgentComponents_31;
};

// FlowCanvas.Nodes.ReflectedMethodNodeWrapper
struct ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031  : public ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370
{
	// ParadoxNotion.Serialization.SerializedMethodInfo FlowCanvas.Nodes.ReflectedMethodNodeWrapper::_method
	SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* ____method_23;
	// FlowCanvas.Nodes.BaseReflectedMethodNode FlowCanvas.Nodes.ReflectedMethodNodeWrapper::<reflectedMethodNode>k__BackingField
	BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* ___U3CreflectedMethodNodeU3Ek__BackingField_24;
};

// FlowCanvas.Nodes.StaticCodeEventBase
struct StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73  : public EventNode_t6FBBA4063F56E451C0FF107E0F97B8E41950C315
{
	// System.String FlowCanvas.Nodes.StaticCodeEventBase::eventName
	String_t* ___eventName_20;
	// System.Type FlowCanvas.Nodes.StaticCodeEventBase::targetType
	Type_t* ___targetType_21;
};

// FlowCanvas.Nodes.CodeEventBase
struct CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F  : public EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F
{
	// System.String FlowCanvas.Nodes.CodeEventBase::eventName
	String_t* ___eventName_21;
	// System.Type FlowCanvas.Nodes.CodeEventBase::targetType
	Type_t* ___targetType_22;
	// UnityEngine.Component FlowCanvas.Nodes.CodeEventBase::targetComponent
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___targetComponent_23;
};

// FlowCanvas.Nodes.FlowNestedFlow
struct FlowNestedFlow_t027A948D4128974B4DBA2439666275B3CFD9492F  : public FlowNestedBase_1_tC4B8DBF45D09A55DB16BF874C525668030CB626F
{
};

// FlowCanvas.FlowScriptBase
struct FlowScriptBase_t7A1C819A6C5A412A964FD0327EDFF9AF595C6C8D  : public FlowGraph_t6375AD5F120B6C625C5E0B07A399BE261CBB63C8
{
};

// FlowCanvas.Nodes.StaticCodeEvent
struct StaticCodeEvent_tA69FBAD55AD58E1568C863D69F91B97B0C07D259  : public StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73
{
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.StaticCodeEvent::o
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___o_22;
	// System.Action FlowCanvas.Nodes.StaticCodeEvent::pointer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___pointer_23;
};

// FlowCanvas.Nodes.CodeEvent
struct CodeEvent_t5452642F9965FB21E0112034C8E2DA044A296672  : public CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F
{
	// FlowCanvas.FlowOutput FlowCanvas.Nodes.CodeEvent::o
	FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* ___o_24;
	// System.Action FlowCanvas.Nodes.CodeEvent::pointer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___pointer_25;
};

// FlowCanvas.Macros.Macro
struct Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08  : public FlowScriptBase_t7A1C819A6C5A412A964FD0327EDFF9AF595C6C8D
{
	// System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition> FlowCanvas.Macros.Macro::inputDefinitions
	List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* ___inputDefinitions_32;
	// System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition> FlowCanvas.Macros.Macro::outputDefinitions
	List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* ___outputDefinitions_33;
	// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.FlowHandler> FlowCanvas.Macros.Macro::entryActionMap
	Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* ___entryActionMap_34;
	// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.FlowHandler> FlowCanvas.Macros.Macro::exitActionMap
	Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* ___exitActionMap_35;
	// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.ValueHandlerObject> FlowCanvas.Macros.Macro::entryFunctionMap
	Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* ___entryFunctionMap_36;
	// System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.ValueHandlerObject> FlowCanvas.Macros.Macro::exitFunctionMap
	Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* ___exitFunctionMap_37;
	// FlowCanvas.Macros.MacroInputNode FlowCanvas.Macros.Macro::_entry
	MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* ____entry_38;
	// FlowCanvas.Macros.MacroOutputNode FlowCanvas.Macros.Macro::_exit
	MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* ____exit_39;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 m_Items[1];

	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.FlowNestedBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowNestedBase_1__ctor_m108813EC5F06CEFF7662BC2DBA61C7744C1B72E5_gshared (FlowNestedBase_1_tE8D4AE375C80C01A3A1A82CA91120BCF1AE07D03* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.ValueHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueHandler_1__ctor_mDA6D4B2EC26888D5CACCFB22FB64EDB744019AFC_gshared (ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// FlowCanvas.ValueOutput`1<T> FlowCanvas.FlowNode::AddValueOutput<System.Object>(System.String,FlowCanvas.ValueHandler`1<T>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_1_t9E3A508BB230FF30375461491A27D69FA2D78B04* FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8_gshared (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___name0, ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* ___getter1, String_t* ___ID2, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.EventNode`1<System.Object>::ResolveSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventNode_1_ResolveSelf_m5EE9D93CC7DA3828BEBD76E8886EDE43D776EDE7_gshared (EventNode_1_t1A6DE4EE56C228F0074E723E0F3C739130A2AE51* __this, const RuntimeMethod* method) ;
// T NodeCanvas.Framework.BBParameter`1<System.Object>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BBParameter_1_get_value_mD726F3B9C069F7F2EF7CB68934E87764BAD6967F_gshared (BBParameter_1_tB46669698C0BE7BD6EFB9A7BE9458183044389E3* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.EventNode`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventNode_1__ctor_m8E1E6B8E3E0A84A894C1BF6C6D092C450FDE12F0_gshared (EventNode_1_t1A6DE4EE56C228F0074E723E0F3C739130A2AE51* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.CallableFunctionNode`4<System.Object,System.Object,UnityEngine.Vector3,UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallableFunctionNode_4__ctor_mBCF76F0C34F2769B7E07351ABE4674E57B41B748_gshared (CallableFunctionNode_4_tE56049EDFB098E0E1CED3E8568BDEAFE55EE137C* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Vector2,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_3__ctor_m6D3F0E559BD33E3F7F6A99AE96185966C5174A97_gshared (PureFunctionNode_3_tF8B4AD349DB6BEB93C23406F38544F3E8F751B51* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_4__ctor_mB55D0B59AF7AE0D2EB5F0AD3AC1CE2D117200E42_gshared (PureFunctionNode_4_tC6258C4E387E3B93C72B234624458301FE1B4C50* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_5__ctor_mFF1E914D4EE64A4EE36C7E8A8F2D536DF65FD128_gshared (PureFunctionNode_5_tF2375E99D87E37757990C4C016B84B4C24A2A77D* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_5__ctor_mEFC95B614F549A5A9BF6CBA14F914CA527014539_gshared (PureFunctionNode_5_t92C578BEB13C8EE07B227B55A440303268D1E39C* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_5__ctor_mF50B28896B5F42695FA13BE543B37F08E6DD4D39_gshared (PureFunctionNode_5_t6CCC5054005213F56C5415A6A8288530B2E803F7* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_3__ctor_m9DDC0D71F0FF93D45A446950FF97BB026AF405FD_gshared (PureFunctionNode_3_t03B15279553BA270B0FC8F4C3E35388BEF9D9C5E* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_5__ctor_m391F4B135AB87FF213650D32C0D91C77C44D6058_gshared (PureFunctionNode_5_tA67A5450270B403FFC24A989A03B328872E6350E* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureFunctionNode_3__ctor_mFFC40FB5EB3195520A0FA383DE0BA326E27B9D2A_gshared (PureFunctionNode_3_t0DAAB6F80D24D71C68E53D981FEAAA75DD4D1A0F* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Vector2,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_3__ctor_m5AC336B895A9013B863FB709C63AF049EE4E31F8_gshared (ExtractorNode_3_tEF36C13777DBE3026B41184294DA8B616BB4DFFC* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_4__ctor_mEE2549C4A9160FF1CE397B8CAEE4CAAC39D1F1F9_gshared (ExtractorNode_4_tE14DFA343D0893ADD4EF18282F9DBD5A734335E5* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_mC3730FB71A2C0317262CB36CAA14F8607FC773EC_gshared (ExtractorNode_5_t1990B38D7CDA54038FDFC9EC8E94AFA1E828086F* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_6__ctor_mD18C712DBDE535CF610F2BCC43296CCAEF5B3A6F_gshared (ExtractorNode_6_t263EBD8A0845AE6887DC475CEEBC76A83F7B6C44* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_6__ctor_m433E502295A5DA174A8CF33D15BD5C43881E8601_gshared (ExtractorNode_6_t66835993EC2DB5DBB71C4EC63936745973CB8486* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_m5C853EAD748B899A98000F0332F9B4DA50F8EA67_gshared (ExtractorNode_5_t12471920B60704B0DD16221EE1CE309FEBDC5858* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.RaycastHit,System.Object,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_m0E5878698ED3E88B82432D84374E1EF876BE5FB4_gshared (ExtractorNode_5_tAFB5663A965E24BC049262E224364678B9078107* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.RaycastHit2D,System.Object,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_6__ctor_m12C83C53AE466E23C2297510D912BF21BA29C208_gshared (ExtractorNode_6_t60B832CAA97F53461B16DDB76ADE6AD8A07B5D2A* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_3__ctor_m4C5ABB212354E679021130915DBD4403F7791F71_gshared (ExtractorNode_3_t458A4E6E6EC05CD6DADFCFA13E7D736C8C1912F3* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_6__ctor_mE28ACE9D633C8A9B646119E81DCA8E4B5BD74806_gshared (ExtractorNode_6_t8264D664DA0F77170CF218E684094680AF8066E6* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<System.Object,System.Object,UnityEngine.ContactPoint,System.Object,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_mA479CF1756E436677DAC442999FC3F086FA1F7AD_gshared (ExtractorNode_5_tB6F942614EB435D0D4DED341F877C630002781C0* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<System.Object,System.Object,UnityEngine.ContactPoint2D,System.Object,UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_m10BC71C3F60B87402FB9386D4074D17A062EA375_gshared (ExtractorNode_5_t7C01734A527532EB0D93640993A448A071AE998E* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint,UnityEngine.Vector3,UnityEngine.Vector3,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_m03E5CCA3B5AF7D091308DECD1957124F06AE30BA_gshared (ExtractorNode_5_t7016D8CF03238354FCDDD5A7ECD7C7675A4D60A3* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_mFC94DEA475237146F2AAC9011C763B8AE57B9C1C_gshared (ExtractorNode_5_t644369B3DB1BF5E3DEAD86BD531E29D46707AE54* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<System.Object,System.Object,System.Single,System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_m238991DAC0DFCA04C80961D7B443D84EA53A035A_gshared (ExtractorNode_5_t5E06F2D6C1FFA076970B30DA2A0877006A360AA3* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Keyframe,System.Single,System.Single,System.Single,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractorNode_5__ctor_m8521D3C262CC7849765A30A26EB6295F0D767AC1_gshared (ExtractorNode_5_tD75167FDB89C071DB0D375FA53BB225287DF2BC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.ValueInput`1<System.Object>::.ctor(FlowCanvas.FlowNode,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueInput_1__ctor_m3F443E59624DD23868C01CF491B618666F93AB87_gshared (ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36* __this, FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* ___parent0, String_t* ___name1, String_t* ___ID2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T ParadoxNotion.ReflectionTools::RTCreateDelegate<System.Object>(System.Reflection.MethodInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionTools_RTCreateDelegate_TisRuntimeObject_m394A51358A57FE626C07E40930A304AE37FBDB23_gshared (MethodInfo_t* ___method0, RuntimeObject* ___instance1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T NodeCanvas.Framework.Graph::AddNode<System.Object>(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Graph_AddNode_TisRuntimeObject_m7C54F5553E1019987BD06CC73C02648EA659666A_gshared (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T NodeCanvas.Framework.Graph::Clone<System.Object>(T,NodeCanvas.Framework.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Graph_Clone_TisRuntimeObject_m125ACD19366EAB56A1B60C2F527665806A067201_gshared (RuntimeObject* ___graph0, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ___parentGraph1, const RuntimeMethod* method) ;

// System.Reflection.MethodBase FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* ReflectedMethodBaseNodeWrapper_get_method_mDEE6A17032CA0108EAD8A917D3270DE24DED6EA5 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Inequality_m867339DE9EBA4C07B538DEA80722A9B9EB95349C (MethodBase_t* ___left0, MethodBase_t* ___right1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.FlowNode::GatherPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterInfo_get_IsOptional_mB27F82EA5A21188AD6E5CC5A34A3913C6D887BD4 (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* __this, const RuntimeMethod* method) ;
// FlowCanvas.Port FlowCanvas.FlowNode::GetInputPort(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* FlowNode_GetInputPort_m27A4555C9EA9DEEFFD851848A97BDCE0AA55B8EC (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___ID0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// FlowCanvas.Port FlowCanvas.FlowNode::GetFirstInputOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* FlowNode_GetFirstInputOfType_mAE65B3DCB29942E4D9AC6C750A47D81575E43849 (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.FlowNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5 (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo ParadoxNotion.Serialization.SerializedMethodInfo::op_Implicit(ParadoxNotion.Serialization.SerializedMethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* SerializedMethodInfo_op_Implicit_m4CD262C1E1C8A99CEDCFBF00B980A3E0BC83D197 (SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* ___value0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo FlowCanvas.Nodes.ReflectedMethodNodeWrapper::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.String ParadoxNotion.ReflectionTools::FriendlyName(System.Reflection.MethodBase,ParadoxNotion.ReflectionTools/MethodType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionTools_FriendlyName_m4DBFF155ED7CAF8B41CF89849BE2538627B1D57D (MethodBase_t* ___method0, int32_t* ___specialNameType1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String ParadoxNotion.StringUtils::SplitCamelCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_SplitCamelCase_mF07E3CD7DD32F88CA8D75E9075AA4A7E9681A1F5 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Type[] ParadoxNotion.ReflectionTools::RTGetGenericArguments(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ReflectionTools_RTGetGenericArguments_mA6E0060F6C5502582E182691833A65B6C3B43EC9 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Type_t* Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.String ParadoxNotion.ReflectionTools::FriendlyName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0 (Type_t* ___t0, bool ___compileSafe1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean ParadoxNotion.ReflectionTools::IsExtensionMethod(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionTools_IsExtensionMethod_m4F908FE3B9A90B7D41750909FC5F8E4103B558A8 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String ParadoxNotion.Serialization.SerializedMethodInfo::AsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializedMethodInfo_AsString_m42F8E470563DCB5AE314D5B52D8DDD5D59A00E2E (SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* __this, const RuntimeMethod* method) ;
// System.String ParadoxNotion.StringUtils::FormatError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatError_mBE1D0984BFA24054F7B57B8014A57EF00C302E65 (String_t* ___input0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::SetMethod(System.Reflection.MethodInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_SetMethod_m2FC5E32A20FB717D569EB4255E125CB21F9F7F9F (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, MethodInfo_t* ___newMethod0, RuntimeObject* ___instance1, const RuntimeMethod* method) ;
// System.Type ParadoxNotion.ReflectionTools::GetFirstGenericParameterConstraintType(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionTools_GetFirstGenericParameterConstraintType_m08B04C310A991B4FA86412023BCC365A508E1AFA (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Void ParadoxNotion.Serialization.SerializedMethodInfo::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedMethodInfo__ctor_mDC004CAFB98728AAF7C382D89F697675B9FE4496 (SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* __this, MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::SetDropInstanceReference(System.Reflection.MethodBase,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper_SetDropInstanceReference_m323E84B2DE3A98CF5A3D29E2D44ACFCA00EFCF54 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, MethodBase_t* ___newMethod0, RuntimeObject* ___instance1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::SetDefaultParameterValues(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper_SetDefaultParameterValues_m08C400414A56A2DCC1D0833651CA35137629F696 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, MethodBase_t* ___newMethod0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo FlowCanvas.FlowNode::TryGetNewGenericMethodForWild(System.Type,System.Type,System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* FlowNode_TryGetNewGenericMethodForWild_m9ECAB9092E9227BEC76B68E3FADFC87B40F9335E (Type_t* ___wildType0, Type_t* ___currentType1, Type_t* ___targetType2, MethodInfo_t* ___content3, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_callable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectedMethodBaseNodeWrapper_get_callable_m99D9EEF7752797787582C298BFFAED609E917544_inline (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) ;
// System.Boolean FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_exposeParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectedMethodBaseNodeWrapper_get_exposeParams_m7BFF18E2D92F24A3C6DAA9A2F1626E864F8A68B9_inline (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) ;
// System.Int32 FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_exposedParamsCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReflectedMethodBaseNodeWrapper_get_exposedParamsCount_m9921E35367F3F38D80D4F8D274DC61C119EF5701_inline (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) ;
// FlowCanvas.Nodes.BaseReflectedMethodNode FlowCanvas.Nodes.BaseReflectedMethodNode::GetMethodNode(System.Reflection.MethodInfo,FlowCanvas.Nodes.ReflectedMethodRegistrationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* BaseReflectedMethodNode_GetMethodNode_m3E2D66C7FC1DDA3DE60FC83FA936523692756619 (MethodInfo_t* ___targetMethod0, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 ___options1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::set_reflectedMethodNode(FlowCanvas.Nodes.BaseReflectedMethodNode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_set_reflectedMethodNode_m252E18BA9088F9E37DB6DC8D9D47733CEAF8F3E5_inline (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* ___value0, const RuntimeMethod* method) ;
// FlowCanvas.Nodes.BaseReflectedMethodNode FlowCanvas.Nodes.ReflectedMethodNodeWrapper::get_reflectedMethodNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* ReflectedMethodNodeWrapper_get_reflectedMethodNode_m66241777B12D7427333833FC876AEE9654763819_inline (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper__ctor_m914544B1C4191C9CAA9332EF483384A63577723D (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.FlowNestedBase`1<FlowCanvas.FlowScript>::.ctor()
inline void FlowNestedBase_1__ctor_m72C1DC0DA6A1A95261C669627B68848886F4145D (FlowNestedBase_1_tC4B8DBF45D09A55DB16BF874C525668030CB626F* __this, const RuntimeMethod* method)
{
	((  void (*) (FlowNestedBase_1_tC4B8DBF45D09A55DB16BF874C525668030CB626F*, const RuntimeMethod*))FlowNestedBase_1__ctor_m108813EC5F06CEFF7662BC2DBA61C7744C1B72E5_gshared)(__this, method);
}
// System.Void FlowCanvas.ValueHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void ValueHandler_1__ctor_mDA6D4B2EC26888D5CACCFB22FB64EDB744019AFC (ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899*, RuntimeObject*, intptr_t, const RuntimeMethod*))ValueHandler_1__ctor_mDA6D4B2EC26888D5CACCFB22FB64EDB744019AFC_gshared)(__this, ___object0, ___method1, method);
}
// FlowCanvas.ValueOutput`1<T> FlowCanvas.FlowNode::AddValueOutput<System.Object>(System.String,FlowCanvas.ValueHandler`1<T>,System.String)
inline ValueOutput_1_t9E3A508BB230FF30375461491A27D69FA2D78B04* FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8 (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___name0, ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* ___getter1, String_t* ___ID2, const RuntimeMethod* method)
{
	return ((  ValueOutput_1_t9E3A508BB230FF30375461491A27D69FA2D78B04* (*) (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB*, String_t*, ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899*, String_t*, const RuntimeMethod*))FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8_gshared)(__this, ___name0, ___getter1, ___ID2, method);
}
// System.Void FlowCanvas.Nodes.NullObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mECB1EDA9546015DFD3B5C071F2DC820E7802065A (U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.ValueHandler`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void ValueHandler_1__ctor_mB5EAC79A5D3267030366BB914FED62C1C13E5691 (ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49*, RuntimeObject*, intptr_t, const RuntimeMethod*))ValueHandler_1__ctor_mDA6D4B2EC26888D5CACCFB22FB64EDB744019AFC_gshared)(__this, ___object0, ___method1, method);
}
// FlowCanvas.ValueOutput`1<T> FlowCanvas.FlowNode::AddValueOutput<UnityEngine.GameObject>(System.String,FlowCanvas.ValueHandler`1<T>,System.String)
inline ValueOutput_1_t77EC70F767F5997CCE19DB8ACD7C74F83691B3D2* FlowNode_AddValueOutput_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8AB02FBD59060B8FDFEEE085A69A0EA577C40431 (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___name0, ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49* ___getter1, String_t* ___ID2, const RuntimeMethod* method)
{
	return ((  ValueOutput_1_t77EC70F767F5997CCE19DB8ACD7C74F83691B3D2* (*) (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB*, String_t*, ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49*, String_t*, const RuntimeMethod*))FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8_gshared)(__this, ___name0, ___getter1, ___ID2, method);
}
// UnityEngine.Component NodeCanvas.Framework.Node::get_graphAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Node_get_graphAgent_m1D13BBF1FBF26F5DC1C2B0B4D4C99815A7AEE929 (Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Reflection.EventInfo ParadoxNotion.ReflectionTools::RTGetEvent(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* ReflectionTools_RTGetEvent_m7E89A3E1E9FE8A37E60C808F0E65DD97E743CA7E (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Type ParadoxNotion.ReflectionTools::RTReflectedOrDeclaredType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionTools_RTReflectedOrDeclaredType_m98F1DB5DB1EA378B9248D5D53668B932D2D91C68 (MemberInfo_t* ___member0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.EventNode`1<UnityEngine.Transform>::ResolveSelf()
inline void EventNode_1_ResolveSelf_m08E82C06E78C5821700D6D7959B118DE5B1D95B9 (EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F*, const RuntimeMethod*))EventNode_1_ResolveSelf_m5EE9D93CC7DA3828BEBD76E8886EDE43D776EDE7_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T NodeCanvas.Framework.BBParameter`1<UnityEngine.Transform>::get_value()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F (BBParameter_1_tFACCA4D200785A10D7DBEBD33086540B7E88FBAF* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (BBParameter_1_tFACCA4D200785A10D7DBEBD33086540B7E88FBAF*, const RuntimeMethod*))BBParameter_1_get_value_mD726F3B9C069F7F2EF7CB68934E87764BAD6967F_gshared)(__this, method);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Reflection.EventInfo FlowCanvas.Nodes.CodeEventBase::get_eventInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* CodeEventBase_get_eventInfo_m2DF3B2684F064555787F2B420627C31EB07F4023 (CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.EventInfo::op_Equality(System.Reflection.EventInfo,System.Reflection.EventInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInfo_op_Equality_m84DBF1C1B4CBE26BEDB8768052C678C92F21D3DF (EventInfo_t* ___left0, EventInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.EventNode`1<UnityEngine.Transform>::.ctor()
inline void EventNode_1__ctor_m339EBA0A6D82C50457764A34DCFB711F27357C5C (EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F*, const RuntimeMethod*))EventNode_1__ctor_m8E1E6B8E3E0A84A894C1BF6C6D092C450FDE12F0_gshared)(__this, method);
}
// System.Void FlowCanvas.Nodes.CodeEventBase::OnPostGraphStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEventBase_OnPostGraphStarted_m2E009420236D2F23467870BC109EDCBF15C18B7E (CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.EventInfo::op_Inequality(System.Reflection.EventInfo,System.Reflection.EventInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInfo_op_Inequality_m40916A69D45DC8CD9CE9A5935FC8449292388F57 (EventInfo_t* ___left0, EventInfo_t* ___right1, const RuntimeMethod* method) ;
// FlowCanvas.FlowOutput FlowCanvas.FlowNode::AddFlowOutput(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022 (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___name0, String_t* ___ID1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.FlowOutput::Call(FlowCanvas.Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479 (FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.CodeEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEventBase__ctor_mDB09BC3C4CB8F25713BBB0B1F214AB69EDCF8A43 (CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.CallableFunctionNode`4<UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion>::.ctor()
inline void CallableFunctionNode_4__ctor_mDDE10BBC92E06065A5EC7DD71648A2ACFCEF50DE (CallableFunctionNode_4_t5660E5EFC4BE1E9588E3AF8C01AB3688E48EE2A0* __this, const RuntimeMethod* method)
{
	((  void (*) (CallableFunctionNode_4_t5660E5EFC4BE1E9588E3AF8C01AB3688E48EE2A0*, const RuntimeMethod*))CallableFunctionNode_4__ctor_mBCF76F0C34F2769B7E07351ABE4674E57B41B748_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Vector2,System.Single,System.Single>::.ctor()
inline void PureFunctionNode_3__ctor_m6D3F0E559BD33E3F7F6A99AE96185966C5174A97 (PureFunctionNode_3_tF8B4AD349DB6BEB93C23406F38544F3E8F751B51* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_3_tF8B4AD349DB6BEB93C23406F38544F3E8F751B51*, const RuntimeMethod*))PureFunctionNode_3__ctor_m6D3F0E559BD33E3F7F6A99AE96185966C5174A97_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>::.ctor()
inline void PureFunctionNode_4__ctor_mB55D0B59AF7AE0D2EB5F0AD3AC1CE2D117200E42 (PureFunctionNode_4_tC6258C4E387E3B93C72B234624458301FE1B4C50* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_4_tC6258C4E387E3B93C72B234624458301FE1B4C50*, const RuntimeMethod*))PureFunctionNode_4__ctor_mB55D0B59AF7AE0D2EB5F0AD3AC1CE2D117200E42_gshared)(__this, method);
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void PureFunctionNode_5__ctor_mFF1E914D4EE64A4EE36C7E8A8F2D536DF65FD128 (PureFunctionNode_5_tF2375E99D87E37757990C4C016B84B4C24A2A77D* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_5_tF2375E99D87E37757990C4C016B84B4C24A2A77D*, const RuntimeMethod*))PureFunctionNode_5__ctor_mFF1E914D4EE64A4EE36C7E8A8F2D536DF65FD128_gshared)(__this, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void PureFunctionNode_5__ctor_mEFC95B614F549A5A9BF6CBA14F914CA527014539 (PureFunctionNode_5_t92C578BEB13C8EE07B227B55A440303268D1E39C* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_5_t92C578BEB13C8EE07B227B55A440303268D1E39C*, const RuntimeMethod*))PureFunctionNode_5__ctor_mEFC95B614F549A5A9BF6CBA14F914CA527014539_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void PureFunctionNode_5__ctor_mF50B28896B5F42695FA13BE543B37F08E6DD4D39 (PureFunctionNode_5_t6CCC5054005213F56C5415A6A8288530B2E803F7* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_5_t6CCC5054005213F56C5415A6A8288530B2E803F7*, const RuntimeMethod*))PureFunctionNode_5__ctor_mF50B28896B5F42695FA13BE543B37F08E6DD4D39_gshared)(__this, method);
}
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
inline void PureFunctionNode_3__ctor_m9DDC0D71F0FF93D45A446950FF97BB026AF405FD (PureFunctionNode_3_t03B15279553BA270B0FC8F4C3E35388BEF9D9C5E* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_3_t03B15279553BA270B0FC8F4C3E35388BEF9D9C5E*, const RuntimeMethod*))PureFunctionNode_3__ctor_m9DDC0D71F0FF93D45A446950FF97BB026AF405FD_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`5<UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void PureFunctionNode_5__ctor_m391F4B135AB87FF213650D32C0D91C77C44D6058 (PureFunctionNode_5_tA67A5450270B403FFC24A989A03B328872E6350E* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_5_tA67A5450270B403FFC24A989A03B328872E6350E*, const RuntimeMethod*))PureFunctionNode_5__ctor_m391F4B135AB87FF213650D32C0D91C77C44D6058_gshared)(__this, method);
}
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.PureFunctionNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
inline void PureFunctionNode_3__ctor_mFFC40FB5EB3195520A0FA383DE0BA326E27B9D2A (PureFunctionNode_3_t0DAAB6F80D24D71C68E53D981FEAAA75DD4D1A0F* __this, const RuntimeMethod* method)
{
	((  void (*) (PureFunctionNode_3_t0DAAB6F80D24D71C68E53D981FEAAA75DD4D1A0F*, const RuntimeMethod*))PureFunctionNode_3__ctor_mFFC40FB5EB3195520A0FA383DE0BA326E27B9D2A_gshared)(__this, method);
}
// System.Void FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Vector2,System.Single,System.Single>::.ctor()
inline void ExtractorNode_3__ctor_m5AC336B895A9013B863FB709C63AF049EE4E31F8 (ExtractorNode_3_tEF36C13777DBE3026B41184294DA8B616BB4DFFC* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_3_tEF36C13777DBE3026B41184294DA8B616BB4DFFC*, const RuntimeMethod*))ExtractorNode_3__ctor_m5AC336B895A9013B863FB709C63AF049EE4E31F8_gshared)(__this, method);
}
// System.Void FlowCanvas.Nodes.ExtractorNode`4<UnityEngine.Vector3,System.Single,System.Single,System.Single>::.ctor()
inline void ExtractorNode_4__ctor_mEE2549C4A9160FF1CE397B8CAEE4CAAC39D1F1F9 (ExtractorNode_4_tE14DFA343D0893ADD4EF18282F9DBD5A734335E5* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_4_tE14DFA343D0893ADD4EF18282F9DBD5A734335E5*, const RuntimeMethod*))ExtractorNode_4__ctor_mEE2549C4A9160FF1CE397B8CAEE4CAAC39D1F1F9_gshared)(__this, method);
}
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Vector4,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void ExtractorNode_5__ctor_mC3730FB71A2C0317262CB36CAA14F8607FC773EC (ExtractorNode_5_t1990B38D7CDA54038FDFC9EC8E94AFA1E828086F* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_t1990B38D7CDA54038FDFC9EC8E94AFA1E828086F*, const RuntimeMethod*))ExtractorNode_5__ctor_mC3730FB71A2C0317262CB36CAA14F8607FC773EC_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Quaternion,System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3>::.ctor()
inline void ExtractorNode_6__ctor_mD18C712DBDE535CF610F2BCC43296CCAEF5B3A6F (ExtractorNode_6_t263EBD8A0845AE6887DC475CEEBC76A83F7B6C44* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_6_t263EBD8A0845AE6887DC475CEEBC76A83F7B6C44*, const RuntimeMethod*))ExtractorNode_6__ctor_mD18C712DBDE535CF610F2BCC43296CCAEF5B3A6F_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void ExtractorNode_6__ctor_m433E502295A5DA174A8CF33D15BD5C43881E8601 (ExtractorNode_6_t66835993EC2DB5DBB71C4EC63936745973CB8486* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_6_t66835993EC2DB5DBB71C4EC63936745973CB8486*, const RuntimeMethod*))ExtractorNode_6__ctor_m433E502295A5DA174A8CF33D15BD5C43881E8601_gshared)(__this, method);
}
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Color,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void ExtractorNode_5__ctor_m5C853EAD748B899A98000F0332F9B4DA50F8EA67 (ExtractorNode_5_t12471920B60704B0DD16221EE1CE309FEBDC5858* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_t12471920B60704B0DD16221EE1CE309FEBDC5858*, const RuntimeMethod*))ExtractorNode_5__ctor_m5C853EAD748B899A98000F0332F9B4DA50F8EA67_gshared)(__this, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.RaycastHit,UnityEngine.GameObject,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
inline void ExtractorNode_5__ctor_mF4E181E12E8BD69BD2A5AAF948A8AEA0A7625DD7 (ExtractorNode_5_tDAB0401E5CDB34B6B022E78690BE0BFF0A6C04E1* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_tDAB0401E5CDB34B6B022E78690BE0BFF0A6C04E1*, const RuntimeMethod*))ExtractorNode_5__ctor_m0E5878698ED3E88B82432D84374E1EF876BE5FB4_gshared)(__this, method);
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit2D::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit2D_get_fraction_m9BF416582F5C4D5FC8D93E5DA57B4CDC64E030BE (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.RaycastHit2D,UnityEngine.GameObject,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
inline void ExtractorNode_6__ctor_mA6DB4D82999B1E8FC457A7DDA38D284175F1EBCA (ExtractorNode_6_tE7070D1890DF15FD455F026ACD1B077CCC5050F2* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_6_tE7070D1890DF15FD455F026ACD1B077CCC5050F2*, const RuntimeMethod*))ExtractorNode_6__ctor_m12C83C53AE466E23C2297510D912BF21BA29C208_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`3<UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
inline void ExtractorNode_3__ctor_m4C5ABB212354E679021130915DBD4403F7791F71 (ExtractorNode_3_t458A4E6E6EC05CD6DADFCFA13E7D736C8C1912F3* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_3_t458A4E6E6EC05CD6DADFCFA13E7D736C8C1912F3*, const RuntimeMethod*))ExtractorNode_3__ctor_m4C5ABB212354E679021130915DBD4403F7791F71_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`6<UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
inline void ExtractorNode_6__ctor_mE28ACE9D633C8A9B646119E81DCA8E4B5BD74806 (ExtractorNode_6_t8264D664DA0F77170CF218E684094680AF8066E6* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_6_t8264D664DA0F77170CF218E684094680AF8066E6*, const RuntimeMethod*))ExtractorNode_6__ctor_mE28ACE9D633C8A9B646119E81DCA8E4B5BD74806_gshared)(__this, method);
}
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Collision,UnityEngine.ContactPoint[],UnityEngine.ContactPoint,UnityEngine.GameObject,UnityEngine.Vector3>::.ctor()
inline void ExtractorNode_5__ctor_m2F7905F0445351D757850C78317DE02182C6389B (ExtractorNode_5_t1164BB3E37D2EFB537E24BE24CF2865BC9C40E15* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_t1164BB3E37D2EFB537E24BE24CF2865BC9C40E15*, const RuntimeMethod*))ExtractorNode_5__ctor_mA479CF1756E436677DAC442999FC3F086FA1F7AD_gshared)(__this, method);
}
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Collision2D::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Collision2D_get_relativeVelocity_m1F0BB90BC73FB0A0EA27212D832BB3F26D4C004A (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Collision2D,UnityEngine.ContactPoint2D[],UnityEngine.ContactPoint2D,UnityEngine.GameObject,UnityEngine.Vector2>::.ctor()
inline void ExtractorNode_5__ctor_mCC05494AE232B636C4FADBF969A836E9DD250FB7 (ExtractorNode_5_tE7260ED1074A0E59D069358489A601734BBEF568* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_tE7260ED1074A0E59D069358489A601734BBEF568*, const RuntimeMethod*))ExtractorNode_5__ctor_m10BC71C3F60B87402FB9386D4074D17A062EA375_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ContactPoint::get_thisCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ContactPoint_get_thisCollider_m5CECC2F86CD3D73FE35543127C22C02D8ED1AFD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ContactPoint::get_otherCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ContactPoint_get_otherCollider_m717D0758D578C93C6CA26E2BA87325682B6C2550 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider,UnityEngine.Collider>::.ctor()
inline void ExtractorNode_5__ctor_m7EB582214308C06E78302EF3E824CD508561AB1D (ExtractorNode_5_t4282A70F3210D11A5AEFF796D996B269EC35C905* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_t4282A70F3210D11A5AEFF796D996B269EC35C905*, const RuntimeMethod*))ExtractorNode_5__ctor_m03E5CCA3B5AF7D091308DECD1957124F06AE30BA_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ContactPoint2D_get_point_mFF9B7395F63E748507C85166F3EDC218B8740396 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.ContactPoint2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ContactPoint2D_get_collider_mCEC4BBE3C9CF0977C3EC5D529C2D5B664180768F (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.ContactPoint2D::get_otherCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ContactPoint2D_get_otherCollider_m1892E5E5AA0032610E8252FC371654E4198A7779 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.ContactPoint2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Collider2D,UnityEngine.Collider2D>::.ctor()
inline void ExtractorNode_5__ctor_mCD1D80A82F75BC083A844C0C3EFA560DD49CB392 (ExtractorNode_5_t6049F3C036B937E6B23CDAEFCA0B5CE4CB857189* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_t6049F3C036B937E6B23CDAEFCA0B5CE4CB857189*, const RuntimeMethod*))ExtractorNode_5__ctor_mFC94DEA475237146F2AAC9011C763B8AE57B9C1C_gshared)(__this, method);
}
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_postWrapMode_m5A56504372DD5597CF7844ED9E58BDD2D3C805E7 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_preWrapMode_m6F386731866F888BC8BD98B2C1A5B03D2ACCAF14 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.AnimationCurve,UnityEngine.Keyframe[],System.Single,UnityEngine.WrapMode,UnityEngine.WrapMode>::.ctor()
inline void ExtractorNode_5__ctor_m9955B4BBCA8F8D00108DFE3D6DB4BEB48004F7D2 (ExtractorNode_5_tA177456BDE9B93177B065DDF20281079B0F093A1* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_tA177456BDE9B93177B065DDF20281079B0F093A1*, const RuntimeMethod*))ExtractorNode_5__ctor_m238991DAC0DFCA04C80961D7B443D84EA53A035A_gshared)(__this, method);
}
// System.Single UnityEngine.Keyframe::get_inTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_inTangent_mD8C59CBC81D520362C010AB5E86CE57169AD80AE (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_outTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_outTangent_m36830B6A71356987DD04BB13785471E89D3B3C99 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.ExtractorNode`5<UnityEngine.Keyframe,System.Single,System.Single,System.Single,System.Single>::.ctor()
inline void ExtractorNode_5__ctor_m8521D3C262CC7849765A30A26EB6295F0D767AC1 (ExtractorNode_5_tD75167FDB89C071DB0D375FA53BB225287DF2BC3* __this, const RuntimeMethod* method)
{
	((  void (*) (ExtractorNode_5_tD75167FDB89C071DB0D375FA53BB225287DF2BC3*, const RuntimeMethod*))ExtractorNode_5__ctor_m8521D3C262CC7849765A30A26EB6295F0D767AC1_gshared)(__this, method);
}
// System.Void NodeCanvas.Framework.Node::OnGraphStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_OnGraphStarted_m9240C8A99F2BB8AFBDC9AB718D2C89ACAFCF3E94 (Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8* __this, const RuntimeMethod* method) ;
// System.Reflection.EventInfo FlowCanvas.Nodes.StaticCodeEventBase::get_eventInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* StaticCodeEventBase_get_eventInfo_mFA76010D1C3569D5DA9DFAADD19CF4EBD5CB14FE (StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.EventNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventNode__ctor_m779AB7CEDD15F141BBB167074A7D57EA20F2C6CE (EventNode_t6FBBA4063F56E451C0FF107E0F97B8E41950C315* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.StaticCodeEventBase::OnGraphStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEventBase_OnGraphStarted_mC2D778A88779470B28E1C6950811D7FED88890B4 (StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.StaticCodeEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEventBase__ctor_mAAB89502221F26A8B0DCB66780E76B29B746C28C (StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureReflectedFieldNode__ctor_mC4AD2E6C0E3258B8566797DF9AB58125613A30D1 (PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m4F52F852D0A4C5C6D5AA572224B8CAE5E4B0A5AE (U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* __this, const RuntimeMethod* method) ;
// System.Boolean ParadoxNotion.ReflectionTools::IsConstant(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionTools_IsConstant_m633F8E6DB0ACA392782200117E35DF5C14990B82 (FieldInfo_t* ___field0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m71EE5C24F70B17C9FE482723292DE95CEBC24471 (U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.ValueHandlerObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1 (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// FlowCanvas.ValueOutput FlowCanvas.FlowNode::AddValueOutput(System.String,System.Type,FlowCanvas.ValueHandlerObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___name0, Type_t* ___type1, ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* ___getter2, String_t* ___ID3, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_2__ctor_m21E67F443810F1F6010B4A40162615207D2C12DC (U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* __this, const RuntimeMethod* method) ;
// FlowCanvas.ValueInput FlowCanvas.FlowNode::AddValueInput(System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55 (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___name0, Type_t* ___type1, String_t* ___ID2, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_3__ctor_mAB45F491BEB30537D3D31A47AC6C20FC0B472922 (U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.FlowHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272 (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// FlowCanvas.FlowInput FlowCanvas.FlowNode::AddFlowInput(System.String,FlowCanvas.FlowHandler,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1* FlowNode_AddFlowInput_mA0BC2BD46D1E1C6FC93DF0EFC8D203DBA5AD7DAD (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___name0, FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* ___pointer1, String_t* ___ID2, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.ReflectedFieldNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedFieldNode__ctor_m340160241F49EF20752BB511115ACDC3CDD6CF4E (ReflectedFieldNode_t9CD932A9B7F77ACC1429D6ACA7168DF83C68BBC3* __this, const RuntimeMethod* method) ;
// System.Object FlowCanvas.ValueInput::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueInput_get_value_m277A371FECFD72E26117E56D0F4A7D86EF18A342 (ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9B4EA56A3D5A283EBED0485A5D3C0675F47DCDF7 (U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* __this, const RuntimeMethod* method) ;
// System.Boolean ParadoxNotion.ReflectionTools::RTIsValueType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionTools_RTIsValueType_m68FB788265574A49B5D6C31640BCA106F060B1E8 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4EB50A8D85414DB2DF89BD0200D31D2A6DC97026 (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m6FEDBE31D78DFD9FB0F9509C800DC72950673F00 (RuntimeObject* ___source0, Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared)(___source0, ___predicate1, method);
}
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureReflectedMethodNode__ctor_mD9F60374E43E2A55C10EE8398BCA6533697E340D (PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* __this, const RuntimeMethod* method) ;
// FlowCanvas.Nodes.Legacy.ReflectedMethodNode FlowCanvas.Nodes.Legacy.ReflectedMethodNode::TryCreateJit(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* ReflectedMethodNode_TryCreateJit_mF57B11C166CD8F95A313FEDA7336F8DCF7B8B92C (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
inline void List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mABAC2A1749B8A3F716CAD567A9ABCC9654A7E97E (Func_2_t083860B929985EC8DF79C99B5157C38632F84196* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t083860B929985EC8DF79C99B5157C38632F84196*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Reflection.ParameterInfo,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisType_t_m275E353BA1242C1B0AF4B73B7BEE3994E4DF6A84 (RuntimeObject* ___source0, Func_2_t083860B929985EC8DF79C99B5157C38632F84196* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t083860B929985EC8DF79C99B5157C38632F84196*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
inline int32_t List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Type ParadoxNotion.ReflectionTools::RTMakeGenericType(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionTools_RTMakeGenericType_m051F63096B34442163B811AED1E64C7D38E94ED5 (Type_t* ___type0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___typeArgs1, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean ParadoxNotion.ReflectionTools::IsParams(System.Reflection.ParameterInfo,System.Reflection.ParameterInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionTools_IsParams_mC107A5DB63D56E74BE89B46ACE7EDDDF29BA2FF8 (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___parameter0, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___parameters1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF8E2916287F527205332BC259333AB02C70BBF4C (U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mA0330BB0B533D46E42882B984CAFCBC96985CF43 (U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1__ctor_m65C80CB9C696E470C79E7F9943DAFC56CB469937 (U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FlowCanvas.ValueInput>::.ctor()
inline void List_1__ctor_m92EF6B417E2100D09897A1008F8292FC63B38229 (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_2__ctor_m8DCB40AAC95C0D3557543F1ED417883EC7DEEE53 (U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* __this, const RuntimeMethod* method) ;
// System.String FlowCanvas.Port::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Port_get_name_mA065A94124E299D515E4C09BC6684A7A65803BCC_inline (Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterInfo_get_IsOut_m7832D76F7B5FAE8B94A7D2BDC2CF466000FB235C (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.ValueInput`1<System.Object>::.ctor(FlowCanvas.FlowNode,System.String,System.String)
inline void ValueInput_1__ctor_m3F443E59624DD23868C01CF491B618666F93AB87 (ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36* __this, FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* ___parent0, String_t* ___name1, String_t* ___ID2, const RuntimeMethod* method)
{
	((  void (*) (ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36*, FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB*, String_t*, String_t*, const RuntimeMethod*))ValueInput_1__ctor_m3F443E59624DD23868C01CF491B618666F93AB87_gshared)(__this, ___parent0, ___name1, ___ID2, method);
}
// System.Void System.Collections.Generic.List`1<FlowCanvas.ValueInput>::Add(T)
inline void List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_inline (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* __this, ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A*, ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Type ParadoxNotion.ReflectionTools::GetEnumerableElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionTools_GetEnumerableElementType_mC0C19FD9C713651A4466D36F56668DC14156B90D (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FlowCanvas.ValueInput>::get_Count()
inline int32_t List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_inline (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<FlowCanvas.ValueInput>::get_Item(System.Int32)
inline ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* List_1_get_Item_m3875A9434C58C8BB5295E7ACA979966A0F32434C (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* (*) (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m40F80F4A7A05B492BC5A19CEFB7F9AE8641FDE2C (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.ReflectedMethodNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNode__ctor_m296734EFDDCC1418B4A22CE1F1A42DC2A7A83DAD (ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* __this, const RuntimeMethod* method) ;
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::CallMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PureReflectedMethodNode_CallMethod_m8BF4719FD16AE8D679FC1573A4E1285BB16C6E17 (PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* __this, const RuntimeMethod* method) ;
// System.Void ParadoxNotion.ActionCall::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActionCall_Invoke_m805BE8D23AFF86DD93A37EE202CAA6BD2945252B_inline (ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Nodes.Legacy.ReflectedActionNode/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m2C66EB3B657A69F6CAB85C558FAC5060F196FC38 (U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* __this, const RuntimeMethod* method) ;
// T ParadoxNotion.ReflectionTools::RTCreateDelegate<ParadoxNotion.ActionCall>(System.Reflection.MethodInfo,System.Object)
inline ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF* ReflectionTools_RTCreateDelegate_TisActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF_m2A046D14E381451F478690F0F2A1EFE16CE3D155 (MethodInfo_t* ___method0, RuntimeObject* ___instance1, const RuntimeMethod* method)
{
	return ((  ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF* (*) (MethodInfo_t*, RuntimeObject*, const RuntimeMethod*))ReflectionTools_RTCreateDelegate_TisRuntimeObject_m394A51358A57FE626C07E40930A304AE37FBDB23_gshared)(___method0, ___instance1, method);
}
// System.Void FlowCanvas.Nodes.Legacy.ReflectedActionNode::Call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedActionNode_Call_mDD00D2CB42ECC35D7C627ABCE4BE90369767C0D2 (ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.Macro/DerivedSerializationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DerivedSerializationData__ctor_mA190FC517D96C1CB2B3C6B2B5D5D382BBE33D245 (DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<NodeCanvas.Framework.Node> NodeCanvas.Framework.Graph::get_allNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t90487A8EA186417AA0A6F2B22B58D1BAE3334437* Graph_get_allNodes_m16F2C73330C293E5724E04C1185FAA62C74BDAF6 (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<FlowCanvas.Macros.MacroInputNode>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6D9929A29574CB9F49ACF6951E1389A6CA7C9798 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared)(___source0, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<FlowCanvas.Macros.MacroInputNode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* Enumerable_FirstOrDefault_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m60AF9EDFD3D5D2CDA1CE91CD790FDDFF6B3DD0DE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// UnityEngine.Vector2 NodeCanvas.Framework.Graph::get_translation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Graph_get_translation_m6954B16766565C99C2C119C82DEE98D58C05B0EC (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, const RuntimeMethod* method) ;
// T NodeCanvas.Framework.Graph::AddNode<FlowCanvas.Macros.MacroInputNode>(UnityEngine.Vector2)
inline MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* Graph_AddNode_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6DA3127C848855E2093BDB809D3BCBDA6106320D (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method)
{
	return ((  MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* (*) (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Graph_AddNode_TisRuntimeObject_m7C54F5553E1019987BD06CC73C02648EA659666A_gshared)(__this, ___pos0, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<FlowCanvas.Macros.MacroOutputNode>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m6CBB88ACC26C645D1A196FD3996503B0DDB8B3B3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared)(___source0, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<FlowCanvas.Macros.MacroOutputNode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* Enumerable_FirstOrDefault_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m3B43C6ABEB26C48387D1B0BD85BF284EC2ED08FB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// T NodeCanvas.Framework.Graph::AddNode<FlowCanvas.Macros.MacroOutputNode>(UnityEngine.Vector2)
inline MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* Graph_AddNode_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_mC955FC30D724C926D9366C4AB1D1461FE61368DD (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method)
{
	return ((  MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* (*) (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Graph_AddNode_TisRuntimeObject_m7C54F5553E1019987BD06CC73C02648EA659666A_gshared)(__this, ___pos0, method);
}
// System.Void NodeCanvas.Framework.Graph::OnGraphValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_OnGraphValidate_m691EFA86C0ECD3DF8A5560D2BD4105DED8D28A17 (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, const RuntimeMethod* method) ;
// FlowCanvas.Macros.MacroInputNode FlowCanvas.Macros.Macro::get_entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* Macro_get_entry_m2406BA51EA1F96D42ABA3BAA5E31FD8C47105634 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) ;
// FlowCanvas.Macros.MacroOutputNode FlowCanvas.Macros.Macro::get_exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* Macro_get_exit_m92E55C9E49117A52EA957273E9498E23B171F271 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.Macro/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mC1248AA0B04104263D2AC7FF9616F1B0C40E9D2E (U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<ParadoxNotion.DynamicParameterDefinition>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m14DA829CD126599386E4512CFA59FE271A9FC768 (Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition>::Find(System.Predicate`1<T>)
inline DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7 (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* __this, Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61* ___match0, const RuntimeMethod* method)
{
	return ((  DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* (*) (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1*, Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition>::Add(T)
inline void List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_inline (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1*, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String ParadoxNotion.DynamicParameterDefinition::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* __this, const RuntimeMethod* method) ;
// FlowCanvas.Port FlowCanvas.FlowNode::GetOutputPort(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* FlowNode_GetOutputPort_m235AC2F5E22870B04BC7874074C3D221BE0C82F4 (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* __this, String_t* ___ID0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.Macro/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m4245C781425D5C7298F4F0D61FA7D5B125F6C6DF (U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition>::get_Count()
inline int32_t List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_inline (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ParadoxNotion.DynamicParameterDefinition::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicParameterDefinition__ctor_m771C37B6FFAE999691AC2C538C35097381C0CDDE (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// FlowCanvas.Port FlowCanvas.Macros.Macro::AddInputDefinition(ParadoxNotion.DynamicParameterDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* Macro_AddInputDefinition_m97C927E6F88C3FFE4840D388D2651A2F7AF08B5B (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def0, const RuntimeMethod* method) ;
// FlowCanvas.Port FlowCanvas.Macros.Macro::AddOutputDefinition(ParadoxNotion.DynamicParameterDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* Macro_AddOutputDefinition_mF543954ED5CDE5D47E1DE22CAC495E2DDD3CE8E2 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def0, const RuntimeMethod* method) ;
// FlowCanvas.BinderConnection FlowCanvas.BinderConnection::Create(FlowCanvas.Port,FlowCanvas.Port)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinderConnection_t338E14B976C2FDEC793FEC61EF1B9A51972991E1* BinderConnection_Create_m841C82E0A46F3B7ABBDDAC183483FF1059B1D01D (Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* ___source0, Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* ___target1, const RuntimeMethod* method) ;
// System.Void NodeCanvas.Framework.Graph::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_Validate_m577260FA4A5EE3D674804D2520EA259B98B01884 (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.Macro/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m18009DA13FFF71A8DB0F22D36FCAE8FAA4EFE5F0 (U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ParadoxNotion.DynamicParameterDefinition,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCBBF654153026F3608B89BF09BF9922E7085DDD4 (Func_2_t790E3300CD054164B42266D675076FECE295D2F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t790E3300CD054164B42266D675076FECE295D2F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<ParadoxNotion.DynamicParameterDefinition>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* Enumerable_FirstOrDefault_TisDynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_mEBBCEE999A57236EDA769814C68D9F6E47D4A600 (RuntimeObject* ___source0, Func_2_t790E3300CD054164B42266D675076FECE295D2F7* ___predicate1, const RuntimeMethod* method)
{
	return ((  DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* (*) (RuntimeObject*, Func_2_t790E3300CD054164B42266D675076FECE295D2F7*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.FlowHandler>::get_Item(TKey)
inline FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469 (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* (*) (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void FlowCanvas.FlowHandler::Invoke(FlowCanvas.Flow)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlowHandler_Invoke_mF97D2BEF129CB78CED178ED67679502C9F40C2AA_inline (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition>::.ctor()
inline void List_1__ctor_mED4F73CA4066DDCEDD35781D6C1CDBA6FADD0370 (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.FlowHandler>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m71334EBE38F3F7E925FF57332D93988AA91BD290 (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.ValueHandlerObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_mCD379A7A7FC86B5A76B1F743AF803C62292EF5F5 (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void FlowCanvas.FlowScriptBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowScriptBase__ctor_m9C69BB742510A9C748FCDAEC577E81FCE16A546D (FlowScriptBase_t7A1C819A6C5A412A964FD0327EDFF9AF595C6C8D* __this, const RuntimeMethod* method) ;
// System.String ParadoxNotion.DynamicParameterDefinition::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* __this, const RuntimeMethod* method) ;
// System.Type ParadoxNotion.DynamicParameterDefinition::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* __this, const RuntimeMethod* method) ;
// NodeCanvas.Framework.Graph NodeCanvas.Framework.Node::get_graph()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* Node_get_graph_mB21F59A8B53310BF25DE6085397701DB23CC3A08_inline (Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8* __this, const RuntimeMethod* method) ;
// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroInputNode::get_macro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E (MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.MacroInputNode/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m46FE2B6D8153BB05137FB7D310C966A2CC641616 (U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ParadoxNotion.DynamicParameterDefinition>::get_Item(System.Int32)
inline DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* (*) (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.FlowHandler>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805 (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* __this, String_t* ___key0, FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA*, String_t*, FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.ValueHandlerObject>::get_Item(TKey)
inline ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0 (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* (*) (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Object FlowCanvas.ValueHandlerObject::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueHandlerObject_Invoke_m637D0C89810D53D959AE8F83E4C41465E37B4B04_inline (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* __this, const RuntimeMethod* method) ;
// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroNodeWrapper::get_macro()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String NodeCanvas.Framework.Graph::get_comments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Graph_get_comments_m737C72338C645C09CD14759D92132E007639D46C (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, const RuntimeMethod* method) ;
// System.String NodeCanvas.Framework.Node::get_description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_description_mCC69A5C6CE184956EFF11FC431E24BEB328C6401 (Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.MacroNodeWrapper::set_macro(FlowCanvas.Macros.Macro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_set_macro_mF37243571E7271E484CA3573BB0C929DDF41EE83 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>::.ctor()
inline void Dictionary_2__ctor_mC309D921A9B6D5BD89BD95BC8A944368B441228B (Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mEF1EA5784E50B8BFDDA6EF2A8067B3B1C28586BF (Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA* __this, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ___key0, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA*, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032*, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T NodeCanvas.Framework.Graph::Clone<FlowCanvas.Macros.Macro>(T,NodeCanvas.Framework.Graph)
inline Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* Graph_Clone_TisMacro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_m37C28E2E62B9C80BBEB14D86AC102EEF05B1B226 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* ___graph0, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ___parentGraph1, const RuntimeMethod* method)
{
	return ((  Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* (*) (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08*, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032*, const RuntimeMethod*))Graph_Clone_TisRuntimeObject_m125ACD19366EAB56A1B60C2F527665806A067201_gshared)(___graph0, ___parentGraph1, method);
}
// System.Single NodeCanvas.Framework.Graph::get_deltaTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Graph_get_deltaTime_mE54EE3C1B054C11AF60C7F4785F96DFF6BC3B6FC_inline (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, const RuntimeMethod* method) ;
// System.Void NodeCanvas.Framework.Graph::UpdateGraph(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_UpdateGraph_m8CE1931B8D3276FE54102A8BA479FDECF366AAF7 (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, float ___deltaTime0, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m3BCDFCF526EAC3977CED158187A290D4084F78A2 (U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_1__ctor_m6AC83F522AE50E81324FB1EBFD927F91E3AB423E (U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,FlowCanvas.ValueHandlerObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88 (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* __this, String_t* ___key0, ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE*, String_t*, ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_2__ctor_m71EC7806C0A743B4DE096834B9E2DD1635E75A01 (U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* __this, const RuntimeMethod* method) ;
// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroOutputNode::get_macro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175 (MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* __this, const RuntimeMethod* method) ;
// System.Void FlowCanvas.Macros.MacroOutputNode/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m131992A7B3F2F5EAF3090F25270DD1940F784CFD (U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ParadoxNotion.Serialization.ISerializedReflectedInfo FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::NodeCanvas.Framework.IReflectedWrapper.GetSerializedInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedMethodBaseNodeWrapper_NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo_mEC4F5FED4507E48DF3537E6CD516397223555B6D (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// ISerializedReflectedInfo IReflectedWrapper.GetSerializedInfo() { return serializedMethodBase; }
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(46 /* ParadoxNotion.Serialization.ISerializedMethodBaseInfo FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_serializedMethodBase() */, __this);
		return L_0;
	}
}
// System.Type FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::GetRuntimeIconType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectedMethodBaseNodeWrapper_GetRuntimeIconType_m62CE82A796FDABFD65EC7AE1F2232B4262BB16FF (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// public System.Type GetRuntimeIconType() { return method != null ? method.DeclaringType : null; }
		MethodBase_t* L_0;
		L_0 = ReflectedMethodBaseNodeWrapper_get_method_mDEE6A17032CA0108EAD8A917D3270DE24DED6EA5(__this, NULL);
		bool L_1;
		L_1 = MethodBase_op_Inequality_m867339DE9EBA4C07B538DEA80722A9B9EB95349C(L_0, (MethodBase_t*)NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (Type_t*)NULL;
	}

IL_0010:
	{
		MethodBase_t* L_2;
		L_2 = ReflectedMethodBaseNodeWrapper_get_method_mDEE6A17032CA0108EAD8A917D3270DE24DED6EA5(__this, NULL);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		return L_3;
	}
}
// System.Reflection.MethodBase FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* ReflectedMethodBaseNodeWrapper_get_method_mDEE6A17032CA0108EAD8A917D3270DE24DED6EA5 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedMethodBaseInfo_t4E7D7FFDA0A3AD2165971527C863BA35FD351E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MethodBase method { get { return serializedMethodBase != null ? serializedMethodBase.GetMethodBase() : null; } }
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(46 /* ParadoxNotion.Serialization.ISerializedMethodBaseInfo FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_serializedMethodBase() */, __this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (MethodBase_t*)NULL;
	}

IL_000a:
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(46 /* ParadoxNotion.Serialization.ISerializedMethodBaseInfo FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_serializedMethodBase() */, __this);
		NullCheck(L_1);
		MethodBase_t* L_2;
		L_2 = InterfaceFuncInvoker0< MethodBase_t* >::Invoke(0 /* System.Reflection.MethodBase ParadoxNotion.Serialization.ISerializedMethodBaseInfo::GetMethodBase() */, ISerializedMethodBaseInfo_t4E7D7FFDA0A3AD2165971527C863BA35FD351E7E_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Boolean FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_callable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectedMethodBaseNodeWrapper_get_callable_m99D9EEF7752797787582C298BFFAED609E917544 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// get { return _callable; }
		bool L_0 = __this->____callable_20;
		return L_0;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::set_callable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper_set_callable_mAD5DCD5C2506230ABE1CCCB3BB17162BA821B830 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if ( _callable != value ) {
		bool L_0 = __this->____callable_20;
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// _callable = value;
		bool L_2 = ___value0;
		__this->____callable_20 = L_2;
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Boolean FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_exposeParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectedMethodBaseNodeWrapper_get_exposeParams_m7BFF18E2D92F24A3C6DAA9A2F1626E864F8A68B9 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// get { return _exposeParams; }
		bool L_0 = __this->____exposeParams_21;
		return L_0;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::set_exposeParams(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper_set_exposeParams_m5517CFB72BAC624D25342879C2B58459F6FACEA2 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if ( _exposeParams != value ) {
		bool L_0 = __this->____exposeParams_21;
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// _exposeParams = value;
		bool L_2 = ___value0;
		__this->____exposeParams_21 = L_2;
		// _exposedParamsCount = Mathf.Max(_exposedParamsCount, 1);
		int32_t L_3 = __this->____exposedParamsCount_22;
		int32_t L_4;
		L_4 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_3, 1, NULL);
		__this->____exposedParamsCount_22 = L_4;
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Int32 FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::get_exposedParamsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectedMethodBaseNodeWrapper_get_exposedParamsCount_m9921E35367F3F38D80D4F8D274DC61C119EF5701 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// get { return _exposedParamsCount; }
		int32_t L_0 = __this->____exposedParamsCount_22;
		return L_0;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::set_exposedParamsCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper_set_exposedParamsCount_mAD958B20CD9C0F04CC6DCDAA2AE86B016E9A3210 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if ( _exposedParamsCount != value ) {
		int32_t L_0 = __this->____exposedParamsCount_22;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		// _exposedParamsCount = value;
		int32_t L_2 = ___value0;
		__this->____exposedParamsCount_22 = L_2;
		// if ( _exposedParamsCount <= 0 ) {
		int32_t L_3 = __this->____exposedParamsCount_22;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// _exposeParams = false;
		__this->____exposeParams_21 = (bool)0;
	}

IL_0020:
	{
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::SetDefaultParameterValues(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper_SetDefaultParameterValues_m08C400414A56A2DCC1D0833651CA35137629F696 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, MethodBase_t* ___newMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	int32_t V_1 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_2 = NULL;
	String_t* V_3 = NULL;
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* V_4 = NULL;
	{
		// var parameters = newMethod.GetParameters();
		MethodBase_t* L_0 = ___newMethod0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		// for ( var i = 0; i < parameters.Length; i++ ) {
		V_1 = 0;
		goto IL_004b;
	}

IL_000b:
	{
		// var parameter = parameters[i];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if ( parameter.IsOptional && parameter.DefaultValue != null ) {
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_6 = V_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = ParameterInfo_get_IsOptional_mB27F82EA5A21188AD6E5CC5A34A3913C6D887BD4(L_6, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_8);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// var nameID = parameters[i].Name;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_13);
		V_3 = L_14;
		// var paramPort = GetInputPort(nameID) as ValueInput;
		String_t* L_15 = V_3;
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_16;
		L_16 = FlowNode_GetInputPort_m27A4555C9EA9DEEFFD851848A97BDCE0AA55B8EC(__this, L_15, NULL);
		V_4 = ((ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D*)IsInstClass((RuntimeObject*)L_16, ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D_il2cpp_TypeInfo_var));
		// if ( paramPort != null ) {
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_17 = V_4;
		if (!L_17)
		{
			goto IL_0047;
		}
	}
	{
		// paramPort.serializedValue = parameter.DefaultValue;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_18 = V_4;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_19 = V_2;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_19);
		NullCheck(L_18);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void FlowCanvas.ValueInput::set_serializedValue(System.Object) */, L_18, L_20);
	}

IL_0047:
	{
		// for ( var i = 0; i < parameters.Length; i++ ) {
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004b:
	{
		// for ( var i = 0; i < parameters.Length; i++ ) {
		int32_t L_22 = V_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::SetDropInstanceReference(System.Reflection.MethodBase,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper_SetDropInstanceReference_m323E84B2DE3A98CF5A3D29E2D44ACFCA00EFCF54 (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, MethodBase_t* ___newMethod0, RuntimeObject* ___instance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* V_0 = NULL;
	{
		// if ( instance != null && !newMethod.IsStatic ) {
		RuntimeObject* L_0 = ___instance1;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		MethodBase_t* L_1 = ___newMethod0;
		NullCheck(L_1);
		bool L_2;
		L_2 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_1, NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// var port = (ValueInput)GetFirstInputOfType(instance.GetType());
		RuntimeObject* L_3 = ___instance1;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_5;
		L_5 = FlowNode_GetFirstInputOfType_mAE65B3DCB29942E4D9AC6C750A47D81575E43849(__this, L_4, NULL);
		V_0 = ((ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D*)CastclassClass((RuntimeObject*)L_5, ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D_il2cpp_TypeInfo_var));
		// if ( port != null ) {
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		// port.serializedValue = instance;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_7 = V_0;
		RuntimeObject* L_8 = ___instance1;
		NullCheck(L_7);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void FlowCanvas.ValueInput::set_serializedValue(System.Object) */, L_7, L_8);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodBaseNodeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodBaseNodeWrapper__ctor_m914544B1C4191C9CAA9332EF483384A63577723D (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FlowCanvas.Nodes.BaseReflectedMethodNode FlowCanvas.Nodes.ReflectedMethodNodeWrapper::get_reflectedMethodNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* ReflectedMethodNodeWrapper_get_reflectedMethodNode_m66241777B12D7427333833FC876AEE9654763819 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	{
		// private BaseReflectedMethodNode reflectedMethodNode { get; set; }
		BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* L_0 = __this->___U3CreflectedMethodNodeU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::set_reflectedMethodNode(FlowCanvas.Nodes.BaseReflectedMethodNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_set_reflectedMethodNode_m252E18BA9088F9E37DB6DC8D9D47733CEAF8F3E5 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* ___value0, const RuntimeMethod* method) 
{
	{
		// private BaseReflectedMethodNode reflectedMethodNode { get; set; }
		BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* L_0 = ___value0;
		__this->___U3CreflectedMethodNodeU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreflectedMethodNodeU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
// System.Reflection.MethodInfo FlowCanvas.Nodes.ReflectedMethodNodeWrapper::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	{
		// private MethodInfo method => _method;
		SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* L_0 = __this->____method_23;
		MethodInfo_t* L_1;
		L_1 = SerializedMethodInfo_op_Implicit_m4CD262C1E1C8A99CEDCFBF00B980A3E0BC83D197(L_0, NULL);
		return L_1;
	}
}
// ParadoxNotion.Serialization.ISerializedMethodBaseInfo FlowCanvas.Nodes.ReflectedMethodNodeWrapper::get_serializedMethodBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedMethodNodeWrapper_get_serializedMethodBase_m034F5802A390DE4C75021D7AFDA74B556E95B9A0 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	{
		// protected override ISerializedMethodBaseInfo serializedMethodBase => _method;
		SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* L_0 = __this->____method_23;
		return L_0;
	}
}
// System.String FlowCanvas.Nodes.ReflectedMethodNodeWrapper::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectedMethodNodeWrapper_get_name_mD848DD4C609D1C5C0D260444FB11BF27F2B77A3F (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtils_t1B1A8555A1FD4C84FEEF6A67762EA7230E48164A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C3DC3545B19367340C353E1C8BBC9B14CB5F2AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// if ( method != null ) {
		MethodInfo_t* L_0;
		L_0 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		bool L_1;
		L_1 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00b3;
		}
	}
	{
		// var specialType = ReflectionTools.MethodType.Normal;
		V_0 = 0;
		// var methodName = method.FriendlyName(out specialType);
		MethodInfo_t* L_2;
		L_2 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = ReflectionTools_FriendlyName_m4DBFF155ED7CAF8B41CF89849BE2538627B1D57D(L_2, (&V_0), NULL);
		V_1 = L_3;
		// if ( specialType == ReflectionTools.MethodType.Operator ) {
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_003f;
		}
	}
	{
		// ReflectionTools.op_FriendlyNamesShort.TryGetValue(method.Name, out methodName);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = ((ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var))->___op_FriendlyNamesShort_22;
		MethodInfo_t* L_6;
		L_6 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		NullCheck(L_5);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_5, L_7, (&V_1), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		// return methodName;
		String_t* L_9 = V_1;
		return L_9;
	}

IL_003f:
	{
		// methodName = methodName.SplitCamelCase();
		String_t* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(StringUtils_t1B1A8555A1FD4C84FEEF6A67762EA7230E48164A_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = StringUtils_SplitCamelCase_mF07E3CD7DD32F88CA8D75E9075AA4A7E9681A1F5(L_10, NULL);
		V_1 = L_11;
		// if ( method.IsGenericMethod ) {
		MethodInfo_t* L_12;
		L_12 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_12);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// methodName += string.Format(" ({0})", method.RTGetGenericArguments().First().FriendlyName());
		String_t* L_14 = V_1;
		MethodInfo_t* L_15;
		L_15 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16;
		L_16 = ReflectionTools_RTGetGenericArguments_mA6E0060F6C5502582E182691833A65B6C3B43EC9(L_15, NULL);
		Type_t* L_17;
		L_17 = Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE((RuntimeObject*)L_16, Enumerable_First_TisType_t_mAD2E23FD705E2079020BC0570109AD51B76854CE_RuntimeMethod_var);
		String_t* L_18;
		L_18 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_17, (bool)0, NULL);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D, L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_14, L_19, NULL);
		V_1 = L_20;
	}

IL_007a:
	{
		// if ( !method.IsStatic || method.IsExtensionMethod() ) {
		MethodInfo_t* L_21;
		L_21 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		NullCheck(L_21);
		bool L_22;
		L_22 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_21, NULL);
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		MethodInfo_t* L_23;
		L_23 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ReflectionTools_IsExtensionMethod_m4F908FE3B9A90B7D41750909FC5F8E4103B558A8(L_23, NULL);
		if (!L_24)
		{
			goto IL_0096;
		}
	}

IL_0094:
	{
		// return methodName;
		String_t* L_25 = V_1;
		return L_25;
	}

IL_0096:
	{
		// return string.Format("{0}.{1}", method.DeclaringType.FriendlyName(), methodName);
		MethodInfo_t* L_26;
		L_26 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_26);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_27, (bool)0, NULL);
		String_t* L_29 = V_1;
		String_t* L_30;
		L_30 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, L_28, L_29, NULL);
		return L_30;
	}

IL_00b3:
	{
		// if ( _method != null ) {
		SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* L_31 = __this->____method_23;
		if (!L_31)
		{
			goto IL_00cc;
		}
	}
	{
		// return _method.AsString().FormatError();
		SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* L_32 = __this->____method_23;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = SerializedMethodInfo_AsString_m42F8E470563DCB5AE314D5B52D8DDD5D59A00E2E(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(StringUtils_t1B1A8555A1FD4C84FEEF6A67762EA7230E48164A_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = StringUtils_FormatError_mBE1D0984BFA24054F7B57B8014A57EF00C302E65(L_33, NULL);
		return L_34;
	}

IL_00cc:
	{
		// return "NOT SET";
		return _stringLiteral8C3DC3545B19367340C353E1C8BBC9B14CB5F2AD;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::SetMethodBase(System.Reflection.MethodBase,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_SetMethodBase_m840734B5D0A6E453BA6B7AE19B0F23EC91439154 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, MethodBase_t* ___newMethod0, RuntimeObject* ___instance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( newMethod is MethodInfo ) {
		MethodBase_t* L_0 = ___newMethod0;
		if (!((MethodInfo_t*)IsInstClass((RuntimeObject*)L_0, MethodInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// SetMethod((MethodInfo)newMethod, instance);
		MethodBase_t* L_1 = ___newMethod0;
		RuntimeObject* L_2 = ___instance1;
		ReflectedMethodNodeWrapper_SetMethod_m2FC5E32A20FB717D569EB4255E125CB21F9F7F9F(__this, ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_1, MethodInfo_t_il2cpp_TypeInfo_var)), L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::SetMethod(System.Reflection.MethodInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_SetMethod_m2FC5E32A20FB717D569EB4255E125CB21F9F7F9F (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, MethodInfo_t* ___newMethod0, RuntimeObject* ___instance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		// if ( newMethod.IsGenericMethodDefinition ) {
		MethodInfo_t* L_0 = ___newMethod0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_0);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// var wildType = newMethod.GetFirstGenericParameterConstraintType();
		MethodInfo_t* L_2 = ___newMethod0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = ReflectionTools_GetFirstGenericParameterConstraintType_m08B04C310A991B4FA86412023BCC365A508E1AFA(L_2, NULL);
		V_0 = L_3;
		// newMethod = newMethod.MakeGenericMethod(wildType);
		MethodInfo_t* L_4 = ___newMethod0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_5;
		Type_t* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_7);
		NullCheck(L_4);
		MethodInfo_t* L_8;
		L_8 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_4, L_6);
		___newMethod0 = L_8;
	}

IL_0021:
	{
		// newMethod = newMethod.GetBaseDefinition();
		MethodInfo_t* L_9 = ___newMethod0;
		NullCheck(L_9);
		MethodInfo_t* L_10;
		L_10 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(51 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_9);
		___newMethod0 = L_10;
		// _method = new SerializedMethodInfo(newMethod);
		MethodInfo_t* L_11 = ___newMethod0;
		SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* L_12 = (SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1*)il2cpp_codegen_object_new(SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		SerializedMethodInfo__ctor_mDC004CAFB98728AAF7C382D89F697675B9FE4496(L_12, L_11, NULL);
		__this->____method_23 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____method_23), (void*)L_12);
		// _callable = newMethod.ReturnType == typeof(void);
		MethodInfo_t* L_13 = ___newMethod0;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_14, L_16, NULL);
		((ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370*)__this)->____callable_20 = L_17;
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
		// base.SetDropInstanceReference(newMethod, instance);
		MethodInfo_t* L_18 = ___newMethod0;
		RuntimeObject* L_19 = ___instance1;
		ReflectedMethodBaseNodeWrapper_SetDropInstanceReference_m323E84B2DE3A98CF5A3D29E2D44ACFCA00EFCF54(__this, L_18, L_19, NULL);
		// base.SetDefaultParameterValues(newMethod);
		MethodInfo_t* L_20 = ___newMethod0;
		ReflectedMethodBaseNodeWrapper_SetDefaultParameterValues_m08C400414A56A2DCC1D0833651CA35137629F696(__this, L_20, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::OnPortConnected(FlowCanvas.Port,FlowCanvas.Port)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_OnPortConnected_m1D95367EAE10DC825D3FE9A0BBFCA6DBED339D18 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* ___port0, Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* ___otherPort1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		// if ( method.IsGenericMethod ) {
		MethodInfo_t* L_0;
		L_0 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_0);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// var wildType = method.GetFirstGenericParameterConstraintType();
		MethodInfo_t* L_2;
		L_2 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = ReflectionTools_GetFirstGenericParameterConstraintType_m08B04C310A991B4FA86412023BCC365A508E1AFA(L_2, NULL);
		// var newMethod = FlowNode.TryGetNewGenericMethodForWild(wildType, port.type, otherPort.type, method);
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_4 = ___port0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type FlowCanvas.Port::get_type() */, L_4);
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_6 = ___otherPort1;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type FlowCanvas.Port::get_type() */, L_6);
		MethodInfo_t* L_8;
		L_8 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		MethodInfo_t* L_9;
		L_9 = FlowNode_TryGetNewGenericMethodForWild_m9ECAB9092E9227BEC76B68E3FADFC87B40F9335E(L_3, L_5, L_7, L_8, NULL);
		V_0 = L_9;
		// if ( newMethod != null ) {
		MethodInfo_t* L_10 = V_0;
		bool L_11;
		L_11 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_10, (MethodInfo_t*)NULL, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		// _method = new SerializedMethodInfo(newMethod);
		MethodInfo_t* L_12 = V_0;
		SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1* L_13 = (SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1*)il2cpp_codegen_object_new(SerializedMethodInfo_t0178C1A4EC415982F21BDF7AD6260FE066C2A3E1_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		SerializedMethodInfo__ctor_mDC004CAFB98728AAF7C382D89F697675B9FE4496(L_13, L_12, NULL);
		__this->____method_23 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____method_23), (void*)L_13);
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Type FlowCanvas.Nodes.ReflectedMethodNodeWrapper::GetNodeWildDefinitionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectedMethodNodeWrapper_GetNodeWildDefinitionType_mD323B2C67A01E19E416CD0BFA024DC3E0BCABDAE (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return method.GetFirstGenericParameterConstraintType();
		MethodInfo_t* L_0;
		L_0 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = ReflectionTools_GetFirstGenericParameterConstraintType_m08B04C310A991B4FA86412023BCC365A508E1AFA(L_0, NULL);
		return L_1;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_RegisterPorts_m2682A32EB65839EFCC6B1F01F01731C04804CDB5 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ( method == null ) {
		MethodInfo_t* L_0;
		L_0 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		bool L_1;
		L_1 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var options = new ReflectedMethodRegistrationOptions();
		il2cpp_codegen_initobj((&V_0), sizeof(ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499));
		// options.callable = callable;
		bool L_2;
		L_2 = ReflectedMethodBaseNodeWrapper_get_callable_m99D9EEF7752797787582C298BFFAED609E917544_inline(__this, NULL);
		(&V_0)->___callable_0 = L_2;
		// options.exposeParams = exposeParams;
		bool L_3;
		L_3 = ReflectedMethodBaseNodeWrapper_get_exposeParams_m7BFF18E2D92F24A3C6DAA9A2F1626E864F8A68B9_inline(__this, NULL);
		(&V_0)->___exposeParams_1 = L_3;
		// options.exposedParamsCount = exposedParamsCount;
		int32_t L_4;
		L_4 = ReflectedMethodBaseNodeWrapper_get_exposedParamsCount_m9921E35367F3F38D80D4F8D274DC61C119EF5701_inline(__this, NULL);
		(&V_0)->___exposedParamsCount_2 = L_4;
		// reflectedMethodNode = BaseReflectedMethodNode.GetMethodNode(method, options);
		MethodInfo_t* L_5;
		L_5 = ReflectedMethodNodeWrapper_get_method_m3BC388B13B4BAEF433684AA44E45A0E85D3BA329(__this, NULL);
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 L_6 = V_0;
		BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* L_7;
		L_7 = BaseReflectedMethodNode_GetMethodNode_m3E2D66C7FC1DDA3DE60FC83FA936523692756619(L_5, L_6, NULL);
		ReflectedMethodNodeWrapper_set_reflectedMethodNode_m252E18BA9088F9E37DB6DC8D9D47733CEAF8F3E5_inline(__this, L_7, NULL);
		// if ( reflectedMethodNode != null ) {
		BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* L_8;
		L_8 = ReflectedMethodNodeWrapper_get_reflectedMethodNode_m66241777B12D7427333833FC876AEE9654763819_inline(__this, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		// reflectedMethodNode.RegisterPorts(this, options);
		BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* L_9;
		L_9 = ReflectedMethodNodeWrapper_get_reflectedMethodNode_m66241777B12D7427333833FC876AEE9654763819_inline(__this, NULL);
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 L_10 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker2< FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB*, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 >::Invoke(5 /* System.Void FlowCanvas.Nodes.BaseReflectedMethodNode::RegisterPorts(FlowCanvas.FlowNode,FlowCanvas.Nodes.ReflectedMethodRegistrationOptions) */, L_9, __this, L_10);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ReflectedMethodNodeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper__ctor_mA62D7638520FA0CC435107A8D9E886B285D69218 (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	{
		ReflectedMethodBaseNodeWrapper__ctor_m914544B1C4191C9CAA9332EF483384A63577723D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: FlowCanvas.Nodes.ReflectedMethodRegistrationOptions
IL2CPP_EXTERN_C void ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshal_pinvoke(const ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499& unmarshaled, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_pinvoke& marshaled)
{
	marshaled.___callable_0 = static_cast<int32_t>(unmarshaled.___callable_0);
	marshaled.___exposeParams_1 = static_cast<int32_t>(unmarshaled.___exposeParams_1);
	marshaled.___exposedParamsCount_2 = unmarshaled.___exposedParamsCount_2;
}
IL2CPP_EXTERN_C void ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshal_pinvoke_back(const ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_pinvoke& marshaled, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499& unmarshaled)
{
	bool unmarshaledcallable_temp_0 = false;
	unmarshaledcallable_temp_0 = static_cast<bool>(marshaled.___callable_0);
	unmarshaled.___callable_0 = unmarshaledcallable_temp_0;
	bool unmarshaledexposeParams_temp_1 = false;
	unmarshaledexposeParams_temp_1 = static_cast<bool>(marshaled.___exposeParams_1);
	unmarshaled.___exposeParams_1 = unmarshaledexposeParams_temp_1;
	int32_t unmarshaledexposedParamsCount_temp_2 = 0;
	unmarshaledexposedParamsCount_temp_2 = marshaled.___exposedParamsCount_2;
	unmarshaled.___exposedParamsCount_2 = unmarshaledexposedParamsCount_temp_2;
}
// Conversion method for clean up from marshalling of: FlowCanvas.Nodes.ReflectedMethodRegistrationOptions
IL2CPP_EXTERN_C void ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshal_pinvoke_cleanup(ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FlowCanvas.Nodes.ReflectedMethodRegistrationOptions
IL2CPP_EXTERN_C void ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshal_com(const ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499& unmarshaled, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_com& marshaled)
{
	marshaled.___callable_0 = static_cast<int32_t>(unmarshaled.___callable_0);
	marshaled.___exposeParams_1 = static_cast<int32_t>(unmarshaled.___exposeParams_1);
	marshaled.___exposedParamsCount_2 = unmarshaled.___exposedParamsCount_2;
}
IL2CPP_EXTERN_C void ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshal_com_back(const ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_com& marshaled, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499& unmarshaled)
{
	bool unmarshaledcallable_temp_0 = false;
	unmarshaledcallable_temp_0 = static_cast<bool>(marshaled.___callable_0);
	unmarshaled.___callable_0 = unmarshaledcallable_temp_0;
	bool unmarshaledexposeParams_temp_1 = false;
	unmarshaledexposeParams_temp_1 = static_cast<bool>(marshaled.___exposeParams_1);
	unmarshaled.___exposeParams_1 = unmarshaledexposeParams_temp_1;
	int32_t unmarshaledexposedParamsCount_temp_2 = 0;
	unmarshaledexposedParamsCount_temp_2 = marshaled.___exposedParamsCount_2;
	unmarshaled.___exposedParamsCount_2 = unmarshaledexposedParamsCount_temp_2;
}
// Conversion method for clean up from marshalling of: FlowCanvas.Nodes.ReflectedMethodRegistrationOptions
IL2CPP_EXTERN_C void ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshal_com_cleanup(ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.FlowNestedFlow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowNestedFlow__ctor_m2EEA7A1C85BB03BEB9A77C308C8B0A5D5A92873F (FlowNestedFlow_t027A948D4128974B4DBA2439666275B3CFD9492F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowNestedBase_1__ctor_m72C1DC0DA6A1A95261C669627B68848886F4145D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FlowNestedBase_1__ctor_m72C1DC0DA6A1A95261C669627B68848886F4145D(__this, FlowNestedBase_1__ctor_m72C1DC0DA6A1A95261C669627B68848886F4145D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.RelayValueInputBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayValueInputBase__ctor_mE3367746C1C9F7E5E28A51375E8865E0D1C3C414 (RelayValueInputBase_t8E5318F595B50464768F33B711426F6F082C0D32* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.RelayValueOutputBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayValueOutputBase__ctor_m96597F795489CA32DA99227BE69EF86C022231AE (RelayValueOutputBase_t839E282BC064ECB02C91BC233DA10D45BDB6CF16* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.NullObject::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullObject_RegisterPorts_m299628511E1BCB53ED1B12048D8E2AA8241F20EE (NullObject_t78A45B684BADF8565824996B4A4E6B4EDE1A6B20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterPortsU3Eb__0_0_m0BC8EC864FE83D7841108B98BE775A1C03E1CE4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	NullObject_t78A45B684BADF8565824996B4A4E6B4EDE1A6B20* G_B2_2 = NULL;
	ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	NullObject_t78A45B684BADF8565824996B4A4E6B4EDE1A6B20* G_B1_2 = NULL;
	{
		// AddValueOutput<object>("Value", () => { return null; });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var);
		ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* L_0 = ((U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
		G_B1_2 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
			G_B2_2 = __this;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var);
		U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E* L_2 = ((U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* L_3 = (ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899*)il2cpp_codegen_object_new(ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ValueHandler_1__ctor_mDA6D4B2EC26888D5CACCFB22FB64EDB744019AFC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CRegisterPortsU3Eb__0_0_m0BC8EC864FE83D7841108B98BE775A1C03E1CE4B_RuntimeMethod_var), NULL);
		ValueHandler_1_t8F128A85BCC1E0DE8B725E5E8F0385AC5B28F899* L_4 = L_3;
		((U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		NullCheck(G_B2_2);
		ValueOutput_1_t9E3A508BB230FF30375461491A27D69FA2D78B04* L_5;
		L_5 = FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8(G_B2_2, G_B2_1, G_B2_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, FlowNode_AddValueOutput_TisRuntimeObject_m3A2B7B7729E3CFB06139166E4E054A998822F1F8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.NullObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullObject__ctor_mD763FBF820CB68ED78235DF63E239538840E9F68 (NullObject_t78A45B684BADF8565824996B4A4E6B4EDE1A6B20* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.NullObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFF6E40A0665827467B041CB152DCFF24D48C13FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E* L_0 = (U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E*)il2cpp_codegen_object_new(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mECB1EDA9546015DFD3B5C071F2DC820E7802065A(L_0, NULL);
		((U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FlowCanvas.Nodes.NullObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mECB1EDA9546015DFD3B5C071F2DC820E7802065A (U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Nodes.NullObject/<>c::<RegisterPorts>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterPortsU3Eb__0_0_m0BC8EC864FE83D7841108B98BE775A1C03E1CE4B (U3CU3Ec_t0F2715EF766664FA51B1537809C882FAF0850E7E* __this, const RuntimeMethod* method) 
{
	{
		// AddValueOutput<object>("Value", () => { return null; });
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String FlowCanvas.Nodes.OwnerVariable::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OwnerVariable_get_name_m3C658BB6F3BC4D3408C1140A111FFD19A64F8992 (OwnerVariable_t9F98503FBB5EEA43D7B5135C4306BA3BF32EAD3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E95785B1B7D58EE35F48653A3347B481AB384B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "<size=20>SELF</size>"; }
		return _stringLiteral0E95785B1B7D58EE35F48653A3347B481AB384B7;
	}
}
// System.Void FlowCanvas.Nodes.OwnerVariable::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerVariable_RegisterPorts_m34EAC37514745E8FB48865756823DFBC4FBD3AD8 (OwnerVariable_t9F98503FBB5EEA43D7B5135C4306BA3BF32EAD3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowNode_AddValueOutput_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8AB02FBD59060B8FDFEEE085A69A0EA577C40431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OwnerVariable_U3CRegisterPortsU3Eb__2_0_mBA8B50E663AE16F171F7C7AF47F5F42326995029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddValueOutput<GameObject>("Value", () => { return graphAgent ? graphAgent.gameObject : null; });
		ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49* L_0 = (ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49*)il2cpp_codegen_object_new(ValueHandler_1_tBE56225DC6C338F348A24720AAA873F394BA1A49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueHandler_1__ctor_mB5EAC79A5D3267030366BB914FED62C1C13E5691(L_0, __this, (intptr_t)((void*)OwnerVariable_U3CRegisterPortsU3Eb__2_0_mBA8B50E663AE16F171F7C7AF47F5F42326995029_RuntimeMethod_var), NULL);
		ValueOutput_1_t77EC70F767F5997CCE19DB8ACD7C74F83691B3D2* L_1;
		L_1 = FlowNode_AddValueOutput_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8AB02FBD59060B8FDFEEE085A69A0EA577C40431(__this, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, FlowNode_AddValueOutput_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8AB02FBD59060B8FDFEEE085A69A0EA577C40431_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.OwnerVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerVariable__ctor_m1F645B6B937DE2583B63C20B345AFB8CEBE15469 (OwnerVariable_t9F98503FBB5EEA43D7B5135C4306BA3BF32EAD3E* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
// UnityEngine.GameObject FlowCanvas.Nodes.OwnerVariable::<RegisterPorts>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* OwnerVariable_U3CRegisterPortsU3Eb__2_0_mBA8B50E663AE16F171F7C7AF47F5F42326995029 (OwnerVariable_t9F98503FBB5EEA43D7B5135C4306BA3BF32EAD3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddValueOutput<GameObject>("Value", () => { return graphAgent ? graphAgent.gameObject : null; });
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0;
		L_0 = Node_get_graphAgent_m1D13BBF1FBF26F5DC1C2B0B4D4C99815A7AEE929(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_000f:
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = Node_get_graphAgent_m1D13BBF1FBF26F5DC1C2B0B4D4C99815A7AEE929(__this, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ParameterVariableNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterVariableNode__ctor_m935F278F8E794717EA7EA27F0B32E51C1DDA0530 (ParameterVariableNode_t8244289ECA73B73735D6F242D931E2B92BDE2F61* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.EventInfo FlowCanvas.Nodes.CodeEventBase::get_eventInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* CodeEventBase_get_eventInfo_m2DF3B2684F064555787F2B420627C31EB07F4023 (CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return targetType != null ? targetType.RTGetEvent(eventName) : null; }
		Type_t* L_0 = __this->___targetType_22;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, (Type_t*)NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (EventInfo_t*)NULL;
	}

IL_0010:
	{
		Type_t* L_2 = __this->___targetType_22;
		String_t* L_3 = __this->___eventName_21;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		EventInfo_t* L_4;
		L_4 = ReflectionTools_RTGetEvent_m7E89A3E1E9FE8A37E60C808F0E65DD97E743CA7E(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void FlowCanvas.Nodes.CodeEventBase::SetEvent(System.Reflection.EventInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEventBase_SetEvent_mF35260FD9BF4CE95A4BECC4DA4A0B401F7E36033 (CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F* __this, EventInfo_t* ___e0, RuntimeObject* ___instace1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetType = e.RTReflectedOrDeclaredType();
		EventInfo_t* L_0 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = ReflectionTools_RTReflectedOrDeclaredType_m98F1DB5DB1EA378B9248D5D53668B932D2D91C68(L_0, NULL);
		__this->___targetType_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetType_22), (void*)L_1);
		// eventName = e.Name;
		EventInfo_t* L_2 = ___e0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->___eventName_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventName_21), (void*)L_3);
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.CodeEventBase::OnPostGraphStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEventBase_OnPostGraphStarted_m2E009420236D2F23467870BC109EDCBF15C18B7E (CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventNode_1_ResolveSelf_m08E82C06E78C5821700D6D7959B118DE5B1D95B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35527D85E84EE581E654DE732424814873E50342);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B309B07230BF9E0BDC7672EAC8DF8DA92501DBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5CC4384616451E5367E69A70DCEC428753E4BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResolveSelf();
		EventNode_1_ResolveSelf_m08E82C06E78C5821700D6D7959B118DE5B1D95B9(__this, EventNode_1_ResolveSelf_m08E82C06E78C5821700D6D7959B118DE5B1D95B9_RuntimeMethod_var);
		// if ( string.IsNullOrEmpty(eventName) ) {
		String_t* L_0 = __this->___eventName_21;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("No Event Selected for CodeEvent, or target is NULL");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral4B309B07230BF9E0BDC7672EAC8DF8DA92501DBA, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// targetComponent = target.value.GetComponent(targetType);
		BBParameter_1_tFACCA4D200785A10D7DBEBD33086540B7E88FBAF* L_2 = ((EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F*)__this)->___target_20;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F(L_2, BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F_RuntimeMethod_var);
		Type_t* L_4 = __this->___targetType_22;
		NullCheck(L_3);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5;
		L_5 = Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D(L_3, L_4, NULL);
		__this->___targetComponent_23 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetComponent_23), (void*)L_5);
		// if ( targetComponent == null ) {
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6 = __this->___targetComponent_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.LogError("Target is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralDB5CC4384616451E5367E69A70DCEC428753E4BC, NULL);
		// return;
		return;
	}

IL_0053:
	{
		// if ( eventInfo == null ) {
		EventInfo_t* L_8;
		L_8 = CodeEventBase_get_eventInfo_m2DF3B2684F064555787F2B420627C31EB07F4023(__this, NULL);
		bool L_9;
		L_9 = EventInfo_op_Equality_m84DBF1C1B4CBE26BEDB8768052C678C92F21D3DF(L_8, (EventInfo_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// Debug.LogError(string.Format("Event {0} is not found", eventName));
		String_t* L_10 = __this->___eventName_21;
		String_t* L_11;
		L_11 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral35527D85E84EE581E654DE732424814873E50342, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_11, NULL);
		// return;
		return;
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.CodeEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEventBase__ctor_mDB09BC3C4CB8F25713BBB0B1F214AB69EDCF8A43 (CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventNode_1__ctor_m339EBA0A6D82C50457764A34DCFB711F27357C5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventNode_1__ctor_m339EBA0A6D82C50457764A34DCFB711F27357C5C(__this, EventNode_1__ctor_m339EBA0A6D82C50457764A34DCFB711F27357C5C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.CodeEvent::OnPostGraphStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEvent_OnPostGraphStarted_mDC9446555995F3118D875223B75BAAEF22A30697 (CodeEvent_t5452642F9965FB21E0112034C8E2DA044A296672* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeEvent_Call_m8FE91A50B4190F4472B6B83E4B7D87A290A9BB96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnPostGraphStarted();
		CodeEventBase_OnPostGraphStarted_m2E009420236D2F23467870BC109EDCBF15C18B7E(__this, NULL);
		// pointer = Call;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)CodeEvent_Call_m8FE91A50B4190F4472B6B83E4B7D87A290A9BB96_RuntimeMethod_var), NULL);
		__this->___pointer_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointer_25), (void*)L_0);
		// eventInfo.AddEventHandler(targetComponent, pointer);
		EventInfo_t* L_1;
		L_1 = CodeEventBase_get_eventInfo_m2DF3B2684F064555787F2B420627C31EB07F4023(__this, NULL);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2 = ((CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F*)__this)->___targetComponent_23;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___pointer_25;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(30 /* System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.CodeEvent::OnGraphStoped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEvent_OnGraphStoped_mCD5313F3A0BCD51AD6D65E688697538474CA6C22 (CodeEvent_t5452642F9965FB21E0112034C8E2DA044A296672* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( !string.IsNullOrEmpty(eventName) && eventInfo != null ) {
		String_t* L_0 = ((CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F*)__this)->___eventName_21;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0042;
		}
	}
	{
		EventInfo_t* L_2;
		L_2 = CodeEventBase_get_eventInfo_m2DF3B2684F064555787F2B420627C31EB07F4023(__this, NULL);
		bool L_3;
		L_3 = EventInfo_op_Inequality_m40916A69D45DC8CD9CE9A5935FC8449292388F57(L_2, (EventInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// eventInfo.RemoveEventHandler(target.value.GetComponent(targetType), pointer);
		EventInfo_t* L_4;
		L_4 = CodeEventBase_get_eventInfo_m2DF3B2684F064555787F2B420627C31EB07F4023(__this, NULL);
		BBParameter_1_tFACCA4D200785A10D7DBEBD33086540B7E88FBAF* L_5 = ((EventNode_1_t25DD84AC8655112B06983D27CC6C571340122D2F*)__this)->___target_20;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F(L_5, BBParameter_1_get_value_mC67589850ECC5169B50C15A668CCADDDD0429F9F_RuntimeMethod_var);
		Type_t* L_7 = ((CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F*)__this)->___targetType_22;
		NullCheck(L_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_8;
		L_8 = Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D(L_6, L_7, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = __this->___pointer_25;
		NullCheck(L_4);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(29 /* System.Void System.Reflection.EventInfo::RemoveEventHandler(System.Object,System.Delegate) */, L_4, L_8, L_9);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.CodeEvent::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEvent_RegisterPorts_m783E11EFB1BBC74C9E1DB4730A8CB8BC1E7720B7 (CodeEvent_t5452642F9965FB21E0112034C8E2DA044A296672* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( !string.IsNullOrEmpty(eventName) ) {
		String_t* L_0 = ((CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F*)__this)->___eventName_21;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// o = AddFlowOutput(eventName);
		String_t* L_2 = ((CodeEventBase_tACBF2F017A74A6CD9C7F3587A846862A95A6668F*)__this)->___eventName_21;
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_3;
		L_3 = FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022(__this, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___o_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___o_24), (void*)L_3);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.CodeEvent::Call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEvent_Call_m8FE91A50B4190F4472B6B83E4B7D87A290A9BB96 (CodeEvent_t5452642F9965FB21E0112034C8E2DA044A296672* __this, const RuntimeMethod* method) 
{
	Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// o.Call(new Flow());
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_0 = __this->___o_24;
		il2cpp_codegen_initobj((&V_0), sizeof(Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734));
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_1 = V_0;
		NullCheck(L_0);
		FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.CodeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeEvent__ctor_m07B6AA63273096130796D9D90AA16971E93879D3 (CodeEvent_t5452642F9965FB21E0112034C8E2DA044A296672* __this, const RuntimeMethod* method) 
{
	{
		CodeEventBase__ctor_mDB09BC3C4CB8F25713BBB0B1F214AB69EDCF8A43(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject FlowCanvas.Nodes.NewGameObject::Invoke(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NewGameObject_Invoke_m501A36F41DF83670E1F0EB5BBF0B6DDB6018C923 (NewGameObject_t78EE87915A64F816398512F8EEA16134B7A8A458* __this, String_t* ___name0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var go = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		// go.transform.position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position1;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// go.transform.rotation = rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___rotation2;
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_7, NULL);
		// return go;
		return L_5;
	}
}
// System.Void FlowCanvas.Nodes.NewGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewGameObject__ctor_mB353316F044FAC54E602796BB0FCFBB2542E6401 (NewGameObject_t78EE87915A64F816398512F8EEA16134B7A8A458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallableFunctionNode_4__ctor_mDDE10BBC92E06065A5EC7DD71648A2ACFCEF50DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CallableFunctionNode_4__ctor_mDDE10BBC92E06065A5EC7DD71648A2ACFCEF50DE(__this, CallableFunctionNode_4__ctor_mDDE10BBC92E06065A5EC7DD71648A2ACFCEF50DE_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 FlowCanvas.Nodes.NewVector2::Invoke(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NewVector2_Invoke_m9A6BB68C940830A1CF6766701D5AA06332487EF5 (NewVector2_t56AF31B1F8FBDC7A2DC490FEC72BF0D7D76126D2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		// return new Vector2(x, y);
		float L_0 = ___x0;
		float L_1 = ___y1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void FlowCanvas.Nodes.NewVector2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewVector2__ctor_mBBF45BD70C5006137E86E7CE3707CC345C13BC2D (NewVector2_t56AF31B1F8FBDC7A2DC490FEC72BF0D7D76126D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_3__ctor_m6D3F0E559BD33E3F7F6A99AE96185966C5174A97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_3__ctor_m6D3F0E559BD33E3F7F6A99AE96185966C5174A97(__this, PureFunctionNode_3__ctor_m6D3F0E559BD33E3F7F6A99AE96185966C5174A97_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 FlowCanvas.Nodes.NewVector3::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NewVector3_Invoke_mB83152FD48C7DC954B398297A1C081A3F2B2FAFF (NewVector3_t26A0F5D15EF4E238E3B032DCF8FCC4EB48BC849A* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// return new Vector3(x, y, z);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void FlowCanvas.Nodes.NewVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewVector3__ctor_mB66AD41D11B090940EABAB2C90BD42A9914A0700 (NewVector3_t26A0F5D15EF4E238E3B032DCF8FCC4EB48BC849A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_4__ctor_mB55D0B59AF7AE0D2EB5F0AD3AC1CE2D117200E42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_4__ctor_mB55D0B59AF7AE0D2EB5F0AD3AC1CE2D117200E42(__this, PureFunctionNode_4__ctor_mB55D0B59AF7AE0D2EB5F0AD3AC1CE2D117200E42_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector4 FlowCanvas.Nodes.NewVector4::Invoke(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 NewVector4_Invoke_m8C1A1AED2C7ABEBCB56A8EC592AF052D47E41367 (NewVector4_tAA9955F6C551659BB48B1D263EC71D774C0FE37D* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// return new Vector4(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void FlowCanvas.Nodes.NewVector4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewVector4__ctor_mBCD3201F4C827E66890A0D88F842640E4629D86A (NewVector4_tAA9955F6C551659BB48B1D263EC71D774C0FE37D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_5__ctor_mFF1E914D4EE64A4EE36C7E8A8F2D536DF65FD128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_5__ctor_mFF1E914D4EE64A4EE36C7E8A8F2D536DF65FD128(__this, PureFunctionNode_5__ctor_mFF1E914D4EE64A4EE36C7E8A8F2D536DF65FD128_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion FlowCanvas.Nodes.NewQuaternion::Invoke(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 NewQuaternion_Invoke_mD67E5B371D526C92DCC1570E846176F0836A15A8 (NewQuaternion_tB54E87ADB68ECC10D430276721437B251FFFA8AC* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// return new Quaternion(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void FlowCanvas.Nodes.NewQuaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewQuaternion__ctor_m2EDB82B9C78B3FD3ACD5F8176E5F06BFBA0EE5C1 (NewQuaternion_tB54E87ADB68ECC10D430276721437B251FFFA8AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_5__ctor_mEFC95B614F549A5A9BF6CBA14F914CA527014539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_5__ctor_mEFC95B614F549A5A9BF6CBA14F914CA527014539(__this, PureFunctionNode_5__ctor_mEFC95B614F549A5A9BF6CBA14F914CA527014539_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color FlowCanvas.Nodes.NewColor::Invoke(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F NewColor_Invoke_mB5DE2A91CD2347EB60846396EE03DCC4D8A73928 (NewColor_t708C36A8A4E40EA31D201140FD6B87E6269FD5E0* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		// return new Color(r, g, b, a);
		float L_0 = ___r0;
		float L_1 = ___g1;
		float L_2 = ___b2;
		float L_3 = ___a3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void FlowCanvas.Nodes.NewColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewColor__ctor_mEEFB21C85EFF0DAC56F9B832C972B56643DFB425 (NewColor_t708C36A8A4E40EA31D201140FD6B87E6269FD5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_5__ctor_mF50B28896B5F42695FA13BE543B37F08E6DD4D39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_5__ctor_mF50B28896B5F42695FA13BE543B37F08E6DD4D39(__this, PureFunctionNode_5__ctor_mF50B28896B5F42695FA13BE543B37F08E6DD4D39_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Bounds FlowCanvas.Nodes.NewBounds::Invoke(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 NewBounds_Invoke_m2FAAC847732FD758B2DE735399D079066EA66792 (NewBounds_tCD9E71739CBDCA845ED7192DAE3A7613524ABDEC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) 
{
	{
		// return new Bounds(center, size);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___size1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void FlowCanvas.Nodes.NewBounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBounds__ctor_m87C8CCAF2077ECE55E313F7247A3E32A80BCF401 (NewBounds_tCD9E71739CBDCA845ED7192DAE3A7613524ABDEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_3__ctor_m9DDC0D71F0FF93D45A446950FF97BB026AF405FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_3__ctor_m9DDC0D71F0FF93D45A446950FF97BB026AF405FD(__this, PureFunctionNode_3__ctor_m9DDC0D71F0FF93D45A446950FF97BB026AF405FD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rect FlowCanvas.Nodes.NewRect::Invoke(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D NewRect_Invoke_m9E61B2B686ABDFA5DDA43CC6D7079BAB900A4096 (NewRect_t11177040E6616C53E0D6EE6563240AE2D4408909* __this, float ___left0, float ___top1, float ___width2, float ___height3, const RuntimeMethod* method) 
{
	{
		// return new Rect(left, top, width, height);
		float L_0 = ___left0;
		float L_1 = ___top1;
		float L_2 = ___width2;
		float L_3 = ___height3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void FlowCanvas.Nodes.NewRect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewRect__ctor_m703A63F3CFE07E8EDA36B2C248E825FEF6C0A187 (NewRect_t11177040E6616C53E0D6EE6563240AE2D4408909* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_5__ctor_m391F4B135AB87FF213650D32C0D91C77C44D6058_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_5__ctor_m391F4B135AB87FF213650D32C0D91C77C44D6058(__this, PureFunctionNode_5__ctor_m391F4B135AB87FF213650D32C0D91C77C44D6058_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Ray FlowCanvas.Nodes.NewRay::Invoke(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 NewRay_Invoke_m8C2A55D5521CE5B87DE54C52E374F98C02154891 (NewRay_tD2385433B970C238BECDB08BB7CFC74EEF543683* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) 
{
	{
		// return new Ray(origin, direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___direction1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void FlowCanvas.Nodes.NewRay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewRay__ctor_m101CE4C1D399F84AE487C410951A1574BD9C119B (NewRay_tD2385433B970C238BECDB08BB7CFC74EEF543683* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureFunctionNode_3__ctor_mFFC40FB5EB3195520A0FA383DE0BA326E27B9D2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PureFunctionNode_3__ctor_mFFC40FB5EB3195520A0FA383DE0BA326E27B9D2A(__this, PureFunctionNode_3__ctor_mFFC40FB5EB3195520A0FA383DE0BA326E27B9D2A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.CustomObjectWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomObjectWrapper__ctor_mA0819F0768F6F72F95B4AEE00D09F7839223EBD3 (CustomObjectWrapper_t20FA1EB5FEB99D76AB3485810F36204F24D0A54B* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractVector2::Invoke(UnityEngine.Vector2,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractVector2_Invoke_mB6B876854AD5C515E2BCD24B722D9C23BFD068B3 (ExtractVector2_tB163A20D0A0FF6A20BDAC0C4764AFE53388BD7A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float* ___x1, float* ___y2, const RuntimeMethod* method) 
{
	{
		// x = vector.x;
		float* L_0 = ___x1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___vector0;
		float L_2 = L_1.___x_0;
		*((float*)L_0) = (float)L_2;
		// y = vector.y;
		float* L_3 = ___y2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___vector0;
		float L_5 = L_4.___y_1;
		*((float*)L_3) = (float)L_5;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractVector2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractVector2__ctor_m0A608160C190CBC684CA779616AAA6A25D520401 (ExtractVector2_tB163A20D0A0FF6A20BDAC0C4764AFE53388BD7A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_3__ctor_m5AC336B895A9013B863FB709C63AF049EE4E31F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_3__ctor_m5AC336B895A9013B863FB709C63AF049EE4E31F8(__this, ExtractorNode_3__ctor_m5AC336B895A9013B863FB709C63AF049EE4E31F8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractVector3::Invoke(UnityEngine.Vector3,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractVector3_Invoke_m6215D685D1494B6837EF946366ED74821BAAF5C8 (ExtractVector3_tE213E0064532FA5E9034A9CA0E4F774356E65040* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float* ___x1, float* ___y2, float* ___z3, const RuntimeMethod* method) 
{
	{
		// x = vector.x;
		float* L_0 = ___x1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		float L_2 = L_1.___x_2;
		*((float*)L_0) = (float)L_2;
		// y = vector.y;
		float* L_3 = ___y2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		*((float*)L_3) = (float)L_5;
		// z = vector.z;
		float* L_6 = ___z3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___z_4;
		*((float*)L_6) = (float)L_8;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractVector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractVector3__ctor_mF54DEBC3B13565032622DEED14C801BB7A5CD0EA (ExtractVector3_tE213E0064532FA5E9034A9CA0E4F774356E65040* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_4__ctor_mEE2549C4A9160FF1CE397B8CAEE4CAAC39D1F1F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_4__ctor_mEE2549C4A9160FF1CE397B8CAEE4CAAC39D1F1F9(__this, ExtractorNode_4__ctor_mEE2549C4A9160FF1CE397B8CAEE4CAAC39D1F1F9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractVector4::Invoke(UnityEngine.Vector4,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractVector4_Invoke_m480447FD6EF395F6DFCF3E7F16AE060C0A0523DB (ExtractVector4_t047B065599272526E94039FD40BC0BFC47AC5BD8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector0, float* ___x1, float* ___y2, float* ___z3, float* ___w4, const RuntimeMethod* method) 
{
	{
		// x = vector.x;
		float* L_0 = ___x1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___vector0;
		float L_2 = L_1.___x_1;
		*((float*)L_0) = (float)L_2;
		// y = vector.y;
		float* L_3 = ___y2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___vector0;
		float L_5 = L_4.___y_2;
		*((float*)L_3) = (float)L_5;
		// z = vector.z;
		float* L_6 = ___z3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___vector0;
		float L_8 = L_7.___z_3;
		*((float*)L_6) = (float)L_8;
		// w = vector.w;
		float* L_9 = ___w4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___vector0;
		float L_11 = L_10.___w_4;
		*((float*)L_9) = (float)L_11;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractVector4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractVector4__ctor_mAF4451B945AC846511A5B5963BB8487486EB2CD6 (ExtractVector4_t047B065599272526E94039FD40BC0BFC47AC5BD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_mC3730FB71A2C0317262CB36CAA14F8607FC773EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_mC3730FB71A2C0317262CB36CAA14F8607FC773EC(__this, ExtractorNode_5__ctor_mC3730FB71A2C0317262CB36CAA14F8607FC773EC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractQuaternion::Invoke(UnityEngine.Quaternion,System.Single&,System.Single&,System.Single&,System.Single&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractQuaternion_Invoke_m04201A670C30F46AE36ECD8A74102405A43B702E (ExtractQuaternion_tA864A63DC101B4FC78C6B6EFC7EC2AF246B57508* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, float* ___x1, float* ___y2, float* ___z3, float* ___w4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___eulerAngles5, const RuntimeMethod* method) 
{
	{
		// x = quaternion.x;
		float* L_0 = ___x1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___quaternion0;
		float L_2 = L_1.___x_0;
		*((float*)L_0) = (float)L_2;
		// y = quaternion.y;
		float* L_3 = ___y2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___quaternion0;
		float L_5 = L_4.___y_1;
		*((float*)L_3) = (float)L_5;
		// z = quaternion.z;
		float* L_6 = ___z3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___quaternion0;
		float L_8 = L_7.___z_2;
		*((float*)L_6) = (float)L_8;
		// w = quaternion.w;
		float* L_9 = ___w4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___quaternion0;
		float L_11 = L_10.___w_3;
		*((float*)L_9) = (float)L_11;
		// eulerAngles = quaternion.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___eulerAngles5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___quaternion0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_12 = L_13;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractQuaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractQuaternion__ctor_mD62140F8D901271783A520B368F29154A3B648A9 (ExtractQuaternion_tA864A63DC101B4FC78C6B6EFC7EC2AF246B57508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_6__ctor_mD18C712DBDE535CF610F2BCC43296CCAEF5B3A6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_6__ctor_mD18C712DBDE535CF610F2BCC43296CCAEF5B3A6F(__this, ExtractorNode_6__ctor_mD18C712DBDE535CF610F2BCC43296CCAEF5B3A6F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractRect::Invoke(UnityEngine.Rect,UnityEngine.Vector2&,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRect_Invoke_m6DA0108AA822BC0B2D44CBDD469C2988479FDECC (ExtractRect_tA3E7D7F71BE4969C7513FCEE49CFE0C2463F478E* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___center1, float* ___xMin2, float* ___xMax3, float* ___yMin4, float* ___yMax5, const RuntimeMethod* method) 
{
	{
		// center = rect.center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___center1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&___rect0), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_0 = L_1;
		// xMin = rect.xMin;
		float* L_2 = ___xMin2;
		float L_3;
		L_3 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___rect0), NULL);
		*((float*)L_2) = (float)L_3;
		// xMax = rect.xMax;
		float* L_4 = ___xMax3;
		float L_5;
		L_5 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		*((float*)L_4) = (float)L_5;
		// yMin = rect.yMin;
		float* L_6 = ___yMin4;
		float L_7;
		L_7 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___rect0), NULL);
		*((float*)L_6) = (float)L_7;
		// yMax = rect.yMax;
		float* L_8 = ___yMax5;
		float L_9;
		L_9 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		*((float*)L_8) = (float)L_9;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractRect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRect__ctor_mD83380EC34FCECD1CB160A4C3C4F7F4BA816CA40 (ExtractRect_tA3E7D7F71BE4969C7513FCEE49CFE0C2463F478E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_6__ctor_m433E502295A5DA174A8CF33D15BD5C43881E8601_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_6__ctor_m433E502295A5DA174A8CF33D15BD5C43881E8601(__this, ExtractorNode_6__ctor_m433E502295A5DA174A8CF33D15BD5C43881E8601_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractColor::Invoke(UnityEngine.Color,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractColor_Invoke_m23401ED8BF8A6E86ADBECF303CBE9C1EF972B2EF (ExtractColor_tDAA8C8D17F76D7F2776E9DFCA5D22D8795CC7A75* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float* ___r1, float* ___g2, float* ___b3, float* ___a4, const RuntimeMethod* method) 
{
	{
		// r = color.r;
		float* L_0 = ___r1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		float L_2 = L_1.___r_0;
		*((float*)L_0) = (float)L_2;
		// g = color.g;
		float* L_3 = ___g2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___g_1;
		*((float*)L_3) = (float)L_5;
		// b = color.b;
		float* L_6 = ___b3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___color0;
		float L_8 = L_7.___b_2;
		*((float*)L_6) = (float)L_8;
		// a = color.a;
		float* L_9 = ___a4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___color0;
		float L_11 = L_10.___a_3;
		*((float*)L_9) = (float)L_11;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractColor__ctor_m5E46254AE783C77BBD0B3ADFBC5BD4BA9C7CDF8A (ExtractColor_tDAA8C8D17F76D7F2776E9DFCA5D22D8795CC7A75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_m5C853EAD748B899A98000F0332F9B4DA50F8EA67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_m5C853EAD748B899A98000F0332F9B4DA50F8EA67(__this, ExtractorNode_5__ctor_m5C853EAD748B899A98000F0332F9B4DA50F8EA67_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractRaycastHit::Invoke(UnityEngine.RaycastHit,UnityEngine.GameObject&,System.Single&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRaycastHit_Invoke_m4E144D48017CBE528D7AA4F0DB20B78D0A845918 (ExtractRaycastHit_t08CF467E2A539B85E051FB2C45BEBDC22079FDA0* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___gameObject1, float* ___distance2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___point4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** G_B3_1 = NULL;
	{
		// gameObject = hit.collider != null ? hit.collider.gameObject : null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = ___gameObject1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&___hit0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_0013:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&___hit0), NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		*((RuntimeObject**)G_B3_1) = (RuntimeObject*)G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B3_1, (void*)(RuntimeObject*)G_B3_0);
		// distance = hit.distance;
		float* L_5 = ___distance2;
		float L_6;
		L_6 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___hit0), NULL);
		*((float*)L_5) = (float)L_6;
		// normal = hit.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___normal3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&___hit0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_7 = L_8;
		// point = hit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___point4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&___hit0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_9 = L_10;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractRaycastHit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRaycastHit__ctor_mC71CB0432901CA6B7DA6ABEF0C0A0E6951BDEE42 (ExtractRaycastHit_t08CF467E2A539B85E051FB2C45BEBDC22079FDA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_mF4E181E12E8BD69BD2A5AAF948A8AEA0A7625DD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_mF4E181E12E8BD69BD2A5AAF948A8AEA0A7625DD7(__this, ExtractorNode_5__ctor_mF4E181E12E8BD69BD2A5AAF948A8AEA0A7625DD7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractRaycastHit2D::Invoke(UnityEngine.RaycastHit2D,UnityEngine.GameObject&,System.Single&,System.Single&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRaycastHit2D_Invoke_m146845E44476222DDEC71EA13FAE5CF67E91B80A (ExtractRaycastHit2D_tC7BC249AA03143E7927563EF8FA2361B6C412477* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___gameObject1, float* ___distance2, float* ___fraction3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___point5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** G_B3_1 = NULL;
	{
		// gameObject = hit.collider != null ? hit.collider.gameObject : null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = ___gameObject1;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&___hit0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_0013:
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3;
		L_3 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&___hit0), NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		*((RuntimeObject**)G_B3_1) = (RuntimeObject*)G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B3_1, (void*)(RuntimeObject*)G_B3_0);
		// distance = hit.distance;
		float* L_5 = ___distance2;
		float L_6;
		L_6 = RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613((&___hit0), NULL);
		*((float*)L_5) = (float)L_6;
		// fraction = hit.fraction;
		float* L_7 = ___fraction3;
		float L_8;
		L_8 = RaycastHit2D_get_fraction_m9BF416582F5C4D5FC8D93E5DA57B4CDC64E030BE((&___hit0), NULL);
		*((float*)L_7) = (float)L_8;
		// normal = hit.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___normal4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2((&___hit0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_9 = L_11;
		// point = hit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___point5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B((&___hit0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_13, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_12 = L_14;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractRaycastHit2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRaycastHit2D__ctor_mBE69DB149A8E3A6C4F27BEF34BF61280ED2F7E8F (ExtractRaycastHit2D_tC7BC249AA03143E7927563EF8FA2361B6C412477* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_6__ctor_mA6DB4D82999B1E8FC457A7DDA38D284175F1EBCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_6__ctor_mA6DB4D82999B1E8FC457A7DDA38D284175F1EBCA(__this, ExtractorNode_6__ctor_mA6DB4D82999B1E8FC457A7DDA38D284175F1EBCA_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractRay::Invoke(UnityEngine.Ray,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRay_Invoke_mC52F7B14C684E027BAD07C1F0EE1BB58E90D7144 (ExtractRay_tF346B81C2CB742DE878365246DE885AB49BF2F15* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___origin1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___direction2, const RuntimeMethod* method) 
{
	{
		// origin = ray.origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___origin1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___ray0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_1;
		// direction = ray.direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___direction2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___ray0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractRay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractRay__ctor_mF8E4695B338C370260C311EAF047BE72E9528828 (ExtractRay_tF346B81C2CB742DE878365246DE885AB49BF2F15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_3__ctor_m4C5ABB212354E679021130915DBD4403F7791F71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_3__ctor_m4C5ABB212354E679021130915DBD4403F7791F71(__this, ExtractorNode_3__ctor_m4C5ABB212354E679021130915DBD4403F7791F71_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractBounds::Invoke(UnityEngine.Bounds,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractBounds_Invoke_m21832814B827E9664236F3946A555521F3FBD819 (ExtractBounds_t402A6A17BE6D0A14393CAE8197230D8B0F6EB162* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___extents2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___max3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___min4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___size5, const RuntimeMethod* method) 
{
	{
		// center = bounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___center1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___bounds0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_1;
		// extents = bounds.extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___extents2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___bounds0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// max = bounds.max;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___max3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&___bounds0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_5;
		// min = bounds.min;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___min4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___bounds0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_7;
		// size = bounds.size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___size5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___bounds0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8 = L_9;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractBounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractBounds__ctor_m7003B9AF8254B95387C06C603976F850E20C8617 (ExtractBounds_t402A6A17BE6D0A14393CAE8197230D8B0F6EB162* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_6__ctor_mE28ACE9D633C8A9B646119E81DCA8E4B5BD74806_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_6__ctor_mE28ACE9D633C8A9B646119E81DCA8E4B5BD74806(__this, ExtractorNode_6__ctor_mE28ACE9D633C8A9B646119E81DCA8E4B5BD74806_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractCollision::Invoke(UnityEngine.Collision,UnityEngine.ContactPoint[]&,UnityEngine.ContactPoint&,UnityEngine.GameObject&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractCollision_Invoke_mFB9B4234E04032363D5914F53804B0C07BBC57EB (ExtractCollision_t2E8360FD3F013435C3663864A7B978507676ACB1* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411** ___contacts1, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___firstContact2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___gameObject3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___velocity4, const RuntimeMethod* method) 
{
	{
		// contacts = collision.contacts;
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411** L_0 = ___contacts1;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		NullCheck(L_1);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_2;
		L_2 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// firstContact = collision.contacts[0];
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* L_3 = ___firstContact2;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___collision0;
		NullCheck(L_4);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_5;
		L_5 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6 = 0;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*(ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9*)L_3 = L_7;
		// gameObject = collision.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_8 = ___gameObject3;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_9, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
		// velocity = collision.relativeVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___velocity4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___collision0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_12, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_11 = L_13;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractCollision__ctor_m2144B5D2163EF9BDEE58C7775A0BE8C7314BF28C (ExtractCollision_t2E8360FD3F013435C3663864A7B978507676ACB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_m2F7905F0445351D757850C78317DE02182C6389B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_m2F7905F0445351D757850C78317DE02182C6389B(__this, ExtractorNode_5__ctor_m2F7905F0445351D757850C78317DE02182C6389B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractCollision2D::Invoke(UnityEngine.Collision2D,UnityEngine.ContactPoint2D[]&,UnityEngine.ContactPoint2D&,UnityEngine.GameObject&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractCollision2D_Invoke_mD514E3A64959A5348D6595B8E200025BDA195062 (ExtractCollision2D_t52FE07CB88C6DA90D37D14A379865FB625700E5D* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949** ___contacts1, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___firstContact2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___gameObject3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___velocity4, const RuntimeMethod* method) 
{
	{
		// contacts = collision.contacts;
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949** L_0 = ___contacts1;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_1 = ___collision0;
		NullCheck(L_1);
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_2;
		L_2 = Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68(L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// firstContact = collision.contacts[0];
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* L_3 = ___firstContact2;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___collision0;
		NullCheck(L_4);
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_5;
		L_5 = Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6 = 0;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*(ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801*)L_3 = L_7;
		// gameObject = collision.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_8 = ___gameObject3;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_9, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
		// velocity = collision.relativeVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___velocity4;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_12 = ___collision0;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Collision2D_get_relativeVelocity_m1F0BB90BC73FB0A0EA27212D832BB3F26D4C004A(L_12, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_11 = L_13;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractCollision2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractCollision2D__ctor_mAC28347A47261E34FA9E4DB70377B9625B1FABF6 (ExtractCollision2D_t52FE07CB88C6DA90D37D14A379865FB625700E5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_mCC05494AE232B636C4FADBF969A836E9DD250FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_mCC05494AE232B636C4FADBF969A836E9DD250FB7(__this, ExtractorNode_5__ctor_mCC05494AE232B636C4FADBF969A836E9DD250FB7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractContactPoint::Invoke(UnityEngine.ContactPoint,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Collider&,UnityEngine.Collider&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractContactPoint_Invoke_m461AD7955B8AC0F961E8C59D770E0E4AD4341E74 (ExtractContactPoint_t9515579A90C0998E97220F296225EFF8DFDCE778* __this, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___contactPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___point2, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** ___colliderA3, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** ___colliderB4, const RuntimeMethod* method) 
{
	{
		// normal = contactPoint.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___normal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&___contactPoint0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_1;
		// point = contactPoint.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&___contactPoint0), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// colliderA = contactPoint.thisCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** L_4 = ___colliderA3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = ContactPoint_get_thisCollider_m5CECC2F86CD3D73FE35543127C22C02D8ED1AFD6((&___contactPoint0), NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_5);
		// colliderB = contactPoint.otherCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** L_6 = ___colliderB4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = ContactPoint_get_otherCollider_m717D0758D578C93C6CA26E2BA87325682B6C2550((&___contactPoint0), NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_7);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractContactPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractContactPoint__ctor_mCEAC627CAF9FB0C1945DC3847988D2B8754ADC3B (ExtractContactPoint_t9515579A90C0998E97220F296225EFF8DFDCE778* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_m7EB582214308C06E78302EF3E824CD508561AB1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_m7EB582214308C06E78302EF3E824CD508561AB1D(__this, ExtractorNode_5__ctor_m7EB582214308C06E78302EF3E824CD508561AB1D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractContactPoint2D::Invoke(UnityEngine.ContactPoint2D,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Collider2D&,UnityEngine.Collider2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractContactPoint2D_Invoke_m8256A0FCC640F8EC54114B6043435EB605359697 (ExtractContactPoint2D_t64351115DD07E0BCEBD11A5AA87E069186491BDA* __this, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___contactPoint0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___normal1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___point2, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** ___colliderA3, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** ___colliderB4, const RuntimeMethod* method) 
{
	{
		// normal = contactPoint.normal;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___normal1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&___contactPoint0), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_0 = L_1;
		// point = contactPoint.point;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___point2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = ContactPoint2D_get_point_mFF9B7395F63E748507C85166F3EDC218B8740396((&___contactPoint0), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_3;
		// colliderA = contactPoint.collider;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** L_4 = ___colliderA3;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5;
		L_5 = ContactPoint2D_get_collider_mCEC4BBE3C9CF0977C3EC5D529C2D5B664180768F((&___contactPoint0), NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_5);
		// colliderB = contactPoint.otherCollider;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** L_6 = ___colliderB4;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7;
		L_7 = ContactPoint2D_get_otherCollider_m1892E5E5AA0032610E8252FC371654E4198A7779((&___contactPoint0), NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_7);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractContactPoint2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractContactPoint2D__ctor_mF53058E1E38B32CEBDC3E6FFAA19BF6D05BC5C54 (ExtractContactPoint2D_t64351115DD07E0BCEBD11A5AA87E069186491BDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_mCD1D80A82F75BC083A844C0C3EFA560DD49CB392_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_mCD1D80A82F75BC083A844C0C3EFA560DD49CB392(__this, ExtractorNode_5__ctor_mCD1D80A82F75BC083A844C0C3EFA560DD49CB392_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractAnimationCurve::Invoke(UnityEngine.AnimationCurve,UnityEngine.Keyframe[]&,System.Single&,UnityEngine.WrapMode&,UnityEngine.WrapMode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractAnimationCurve_Invoke_m693F0343C8E7679A7D5A37840FB97E12B2CFB735 (ExtractAnimationCurve_t6E5A2B47F45C21FCD7A4D3B0840E62210867C944* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3** ___keys1, float* ___length2, int32_t* ___postWrapMode3, int32_t* ___preWrapMode4, const RuntimeMethod* method) 
{
	{
		// keys = curve.keys;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3** L_0 = ___keys1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___curve0;
		NullCheck(L_1);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2;
		L_2 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// length = curve.length;
		float* L_3 = ___length2;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = ___curve0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_4, NULL);
		*((float*)L_3) = (float)((float)L_5);
		// postWrapMode = curve.postWrapMode;
		int32_t* L_6 = ___postWrapMode3;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = ___curve0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_get_postWrapMode_m5A56504372DD5597CF7844ED9E58BDD2D3C805E7(L_7, NULL);
		*((int32_t*)L_6) = (int32_t)L_8;
		// preWrapMode = curve.preWrapMode;
		int32_t* L_9 = ___preWrapMode4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = ___curve0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AnimationCurve_get_preWrapMode_m6F386731866F888BC8BD98B2C1A5B03D2ACCAF14(L_10, NULL);
		*((int32_t*)L_9) = (int32_t)L_11;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractAnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractAnimationCurve__ctor_mF6DC40B0F6ABB7372B5CFF612BF1E357E9025053 (ExtractAnimationCurve_t6E5A2B47F45C21FCD7A4D3B0840E62210867C944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_m9955B4BBCA8F8D00108DFE3D6DB4BEB48004F7D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_m9955B4BBCA8F8D00108DFE3D6DB4BEB48004F7D2(__this, ExtractorNode_5__ctor_m9955B4BBCA8F8D00108DFE3D6DB4BEB48004F7D2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.ExtractKeyFrame::Invoke(UnityEngine.Keyframe,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractKeyFrame_Invoke_m57A0BFC6E0AACC3DD859CD0569B66FAED25E1AD9 (ExtractKeyFrame_t5BAD627065EDDF66B228CCA8773307E6BB95D05D* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___key0, float* ___inTangent1, float* ___outTangent2, float* ___time3, float* ___value4, const RuntimeMethod* method) 
{
	{
		// inTangent = key.inTangent;
		float* L_0 = ___inTangent1;
		float L_1;
		L_1 = Keyframe_get_inTangent_mD8C59CBC81D520362C010AB5E86CE57169AD80AE((&___key0), NULL);
		*((float*)L_0) = (float)L_1;
		// outTangent = key.outTangent;
		float* L_2 = ___outTangent2;
		float L_3;
		L_3 = Keyframe_get_outTangent_m36830B6A71356987DD04BB13785471E89D3B3C99((&___key0), NULL);
		*((float*)L_2) = (float)L_3;
		// time = key.time;
		float* L_4 = ___time3;
		float L_5;
		L_5 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&___key0), NULL);
		*((float*)L_4) = (float)L_5;
		// value = key.value;
		float* L_6 = ___value4;
		float L_7;
		L_7 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C((&___key0), NULL);
		*((float*)L_6) = (float)L_7;
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.ExtractKeyFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractKeyFrame__ctor_mAB83023DD185D24507B0D9A9802810FFFFEED130 (ExtractKeyFrame_t5BAD627065EDDF66B228CCA8773307E6BB95D05D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractorNode_5__ctor_m8521D3C262CC7849765A30A26EB6295F0D767AC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExtractorNode_5__ctor_m8521D3C262CC7849765A30A26EB6295F0D767AC1(__this, ExtractorNode_5__ctor_m8521D3C262CC7849765A30A26EB6295F0D767AC1_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.EventInfo FlowCanvas.Nodes.StaticCodeEventBase::get_eventInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* StaticCodeEventBase_get_eventInfo_mFA76010D1C3569D5DA9DFAADD19CF4EBD5CB14FE (StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return targetType != null ? targetType.RTGetEvent(eventName) : null; }
		Type_t* L_0 = __this->___targetType_21;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, (Type_t*)NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (EventInfo_t*)NULL;
	}

IL_0010:
	{
		Type_t* L_2 = __this->___targetType_21;
		String_t* L_3 = __this->___eventName_20;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		EventInfo_t* L_4;
		L_4 = ReflectionTools_RTGetEvent_m7E89A3E1E9FE8A37E60C808F0E65DD97E743CA7E(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void FlowCanvas.Nodes.StaticCodeEventBase::SetEvent(System.Reflection.EventInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEventBase_SetEvent_m7F0C9C0772942F1EC6013C62B36CF0CD8194335D (StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73* __this, EventInfo_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetType = e.RTReflectedOrDeclaredType();
		EventInfo_t* L_0 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = ReflectionTools_RTReflectedOrDeclaredType_m98F1DB5DB1EA378B9248D5D53668B932D2D91C68(L_0, NULL);
		__this->___targetType_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetType_21), (void*)L_1);
		// eventName = e.Name;
		EventInfo_t* L_2 = ___e0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->___eventName_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventName_20), (void*)L_3);
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.StaticCodeEventBase::OnGraphStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEventBase_OnGraphStarted_mC2D778A88779470B28E1C6950811D7FED88890B4 (StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35527D85E84EE581E654DE732424814873E50342);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD545CEA0411270A371740D020B39BA5FBEFAAABE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnGraphStarted();
		Node_OnGraphStarted_m9240C8A99F2BB8AFBDC9AB718D2C89ACAFCF3E94(__this, NULL);
		// if ( string.IsNullOrEmpty(eventName) ) {
		String_t* L_0 = __this->___eventName_20;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("No Event Selected for 'Static Code Event'");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralD545CEA0411270A371740D020B39BA5FBEFAAABE, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if ( eventInfo == null ) {
		EventInfo_t* L_2;
		L_2 = StaticCodeEventBase_get_eventInfo_mFA76010D1C3569D5DA9DFAADD19CF4EBD5CB14FE(__this, NULL);
		bool L_3;
		L_3 = EventInfo_op_Equality_m84DBF1C1B4CBE26BEDB8768052C678C92F21D3DF(L_2, (EventInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError(string.Format("Event {0} is not found", eventName));
		String_t* L_4 = __this->___eventName_20;
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral35527D85E84EE581E654DE732424814873E50342, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_5, NULL);
		// return;
		return;
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.StaticCodeEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEventBase__ctor_mAAB89502221F26A8B0DCB66780E76B29B746C28C (StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73* __this, const RuntimeMethod* method) 
{
	{
		EventNode__ctor_m779AB7CEDD15F141BBB167074A7D57EA20F2C6CE(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.StaticCodeEvent::OnGraphStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEvent_OnGraphStarted_mB146788D33A5055751BD9774C16541DE42FF81D0 (StaticCodeEvent_tA69FBAD55AD58E1568C863D69F91B97B0C07D259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticCodeEvent_Call_m460B576F9D06BF4EB10C46ADF60B4792E7CE39CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnGraphStarted();
		StaticCodeEventBase_OnGraphStarted_mC2D778A88779470B28E1C6950811D7FED88890B4(__this, NULL);
		// pointer = Call;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)StaticCodeEvent_Call_m460B576F9D06BF4EB10C46ADF60B4792E7CE39CB_RuntimeMethod_var), NULL);
		__this->___pointer_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointer_23), (void*)L_0);
		// eventInfo.AddEventHandler(null, pointer);
		EventInfo_t* L_1;
		L_1 = StaticCodeEventBase_get_eventInfo_mFA76010D1C3569D5DA9DFAADD19CF4EBD5CB14FE(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___pointer_23;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(30 /* System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate) */, L_1, NULL, L_2);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.StaticCodeEvent::OnGraphStoped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEvent_OnGraphStoped_m61C2348DD407D8046D61D38196291F189A3F35F9 (StaticCodeEvent_tA69FBAD55AD58E1568C863D69F91B97B0C07D259* __this, const RuntimeMethod* method) 
{
	{
		// if ( !string.IsNullOrEmpty(eventName) && eventInfo != null ) {
		String_t* L_0 = ((StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73*)__this)->___eventName_20;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventInfo_t* L_2;
		L_2 = StaticCodeEventBase_get_eventInfo_mFA76010D1C3569D5DA9DFAADD19CF4EBD5CB14FE(__this, NULL);
		bool L_3;
		L_3 = EventInfo_op_Inequality_m40916A69D45DC8CD9CE9A5935FC8449292388F57(L_2, (EventInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// eventInfo.RemoveEventHandler(null, pointer);
		EventInfo_t* L_4;
		L_4 = StaticCodeEventBase_get_eventInfo_mFA76010D1C3569D5DA9DFAADD19CF4EBD5CB14FE(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___pointer_23;
		NullCheck(L_4);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(29 /* System.Void System.Reflection.EventInfo::RemoveEventHandler(System.Object,System.Delegate) */, L_4, NULL, L_5);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.StaticCodeEvent::Call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEvent_Call_m460B576F9D06BF4EB10C46ADF60B4792E7CE39CB (StaticCodeEvent_tA69FBAD55AD58E1568C863D69F91B97B0C07D259* __this, const RuntimeMethod* method) 
{
	Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// o.Call(new Flow());
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_0 = __this->___o_22;
		il2cpp_codegen_initobj((&V_0), sizeof(Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734));
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_1 = V_0;
		NullCheck(L_0);
		FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.StaticCodeEvent::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEvent_RegisterPorts_m35CCC9ECED0625FD83249A262556B8F0C9BFDF29 (StaticCodeEvent_tA69FBAD55AD58E1568C863D69F91B97B0C07D259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( !string.IsNullOrEmpty(eventName) ) {
		String_t* L_0 = ((StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73*)__this)->___eventName_20;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// o = AddFlowOutput(eventName);
		String_t* L_2 = ((StaticCodeEventBase_t3041132E7B9AA9F9C7D59130D45C1746F92BFB73*)__this)->___eventName_20;
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_3;
		L_3 = FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022(__this, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___o_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___o_22), (void*)L_3);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.StaticCodeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCodeEvent__ctor_m34B020CB2A98EEEB72867D8B31D48E206CEC412A (StaticCodeEvent_tA69FBAD55AD58E1568C863D69F91B97B0C07D259* __this, const RuntimeMethod* method) 
{
	{
		StaticCodeEventBase__ctor_mAAB89502221F26A8B0DCB66780E76B29B746C28C(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FlowCanvas.Nodes.Legacy.ReflectedFieldNode FlowCanvas.Nodes.Legacy.ReflectedFieldNode::Create(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectedFieldNode_t9CD932A9B7F77ACC1429D6ACA7168DF83C68BBC3* ReflectedFieldNode_Create_mC6EB943F2FBC07200CC673943B72EA9DC119DCE9 (FieldInfo_t* ___field0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new PureReflectedFieldNode();
		PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D* L_0 = (PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D*)il2cpp_codegen_object_new(PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PureReflectedFieldNode__ctor_mC4AD2E6C0E3258B8566797DF9AB58125613A30D1(L_0, NULL);
		return L_0;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.ReflectedFieldNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedFieldNode__ctor_m340160241F49EF20752BB511115ACDC3CDD6CF4E (ReflectedFieldNode_t9CD932A9B7F77ACC1429D6ACA7168DF83C68BBC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode::RegisterPorts(FlowCanvas.FlowNode,System.Reflection.FieldInfo,FlowCanvas.Nodes.ReflectedFieldNodeWrapper/AccessMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureReflectedFieldNode_RegisterPorts_mE6284058602E65572C872FEA25BD568C42AABCF4 (PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D* __this, FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* ___node0, FieldInfo_t* ___field1, int32_t ___accessMode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_U3CRegisterPortsU3Eb__0_mC2C9A555FA61F478B4E6136E1A447CE7705135A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_2_U3CRegisterPortsU3Eb__1_m645F4AB0EA1DEC63890AAAE209256D1DA94261B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__2_m3963B7F84D65679E041FDB27E1246503AF7166CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__3_m1C6BA1032EADD3FA38F4AEE56283E31C5268961F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* V_0 = NULL;
	Type_t* V_1 = NULL;
	U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE* V_2 = NULL;
	U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* V_3 = NULL;
	U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* V_4 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_0 = (U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m4F52F852D0A4C5C6D5AA572224B8CAE5E4B0A5AE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_1 = V_0;
		FieldInfo_t* L_2 = ___field1;
		NullCheck(L_1);
		L_1->___field_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___field_0), (void*)L_2);
		// if ( field.IsConstant() ) {
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___field_0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = ReflectionTools_IsConstant_m633F8E6DB0ACA392782200117E35DF5C14990B82(L_4, NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE* L_6 = (U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		U3CU3Ec__DisplayClass0_1__ctor_m71EE5C24F70B17C9FE482723292DE95CEBC24471(L_6, NULL);
		V_2 = L_6;
		// var constantValue = field.GetValue(null);
		U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE* L_7 = V_2;
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_8 = V_0;
		NullCheck(L_8);
		FieldInfo_t* L_9 = L_8->___field_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(32 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_9, NULL);
		NullCheck(L_7);
		L_7->___constantValue_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___constantValue_0), (void*)L_10);
		// node.AddValueOutput("Value", field.FieldType, () => { return constantValue; });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_11 = ___node0;
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_12 = V_0;
		NullCheck(L_12);
		FieldInfo_t* L_13 = L_12->___field_0;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(25 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_13);
		U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE* L_15 = V_2;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_16 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass0_1_U3CRegisterPortsU3Eb__0_mC2C9A555FA61F478B4E6136E1A447CE7705135A4_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_17;
		L_17 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(L_11, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, L_14, L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// return;
		return;
	}

IL_005b:
	{
		// var targetType = field.DeclaringType;
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_18 = V_0;
		NullCheck(L_18);
		FieldInfo_t* L_19 = L_18->___field_0;
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_19);
		V_1 = L_20;
		// if ( accessMode == ReflectedFieldNodeWrapper.AccessMode.GetField ) {
		int32_t L_21 = ___accessMode2;
		if (L_21)
		{
			goto IL_00be;
		}
	}
	{
		U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* L_22 = (U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		U3CU3Ec__DisplayClass0_2__ctor_m21E67F443810F1F6010B4A40162615207D2C12DC(L_22, NULL);
		V_3 = L_22;
		U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* L_23 = V_3;
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_24 = V_0;
		NullCheck(L_23);
		L_23->___CSU24U3CU3E8__locals1_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___CSU24U3CU3E8__locals1_1), (void*)L_24);
		// var instanceInput = node.AddValueInput(targetType.FriendlyName(), targetType);
		U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* L_25 = V_3;
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_26 = ___node0;
		Type_t* L_27 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_27, (bool)0, NULL);
		Type_t* L_29 = V_1;
		NullCheck(L_26);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_30;
		L_30 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(L_26, L_28, L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_25);
		L_25->___instanceInput_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___instanceInput_0), (void*)L_30);
		// node.AddValueOutput("Value", field.FieldType, () => { return field.GetValue(instanceInput.value); });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_31 = ___node0;
		U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* L_32 = V_3;
		NullCheck(L_32);
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_33 = L_32->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_33);
		FieldInfo_t* L_34 = L_33->___field_0;
		NullCheck(L_34);
		Type_t* L_35;
		L_35 = VirtualFuncInvoker0< Type_t* >::Invoke(25 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_34);
		U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* L_36 = V_3;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_37 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass0_2_U3CRegisterPortsU3Eb__1_m645F4AB0EA1DEC63890AAAE209256D1DA94261B4_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_38;
		L_38 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(L_31, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, L_35, L_37, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return;
	}

IL_00be:
	{
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_39 = (U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		U3CU3Ec__DisplayClass0_3__ctor_mAB45F491BEB30537D3D31A47AC6C20FC0B472922(L_39, NULL);
		V_4 = L_39;
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_40 = V_4;
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_41 = V_0;
		NullCheck(L_40);
		L_40->___CSU24U3CU3E8__locals2_4 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___CSU24U3CU3E8__locals2_4), (void*)L_41);
		// object instance = null;
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_42 = V_4;
		NullCheck(L_42);
		L_42->___instance_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___instance_0), (void*)NULL);
		// var instanceInput = node.AddValueInput(targetType.FriendlyName(), targetType);
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_43 = V_4;
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_44 = ___node0;
		Type_t* L_45 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_45, (bool)0, NULL);
		Type_t* L_47 = V_1;
		NullCheck(L_44);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_48;
		L_48 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(L_44, L_46, L_47, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_43);
		L_43->___instanceInput_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->___instanceInput_1), (void*)L_48);
		// var valueInput = node.AddValueInput("Value", field.FieldType);
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_49 = V_4;
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_50 = ___node0;
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_51 = V_4;
		NullCheck(L_51);
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_52 = L_51->___CSU24U3CU3E8__locals2_4;
		NullCheck(L_52);
		FieldInfo_t* L_53 = L_52->___field_0;
		NullCheck(L_53);
		Type_t* L_54;
		L_54 = VirtualFuncInvoker0< Type_t* >::Invoke(25 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_53);
		NullCheck(L_50);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_55;
		L_55 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(L_50, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, L_54, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_49);
		L_49->___valueInput_2 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->___valueInput_2), (void*)L_55);
		// var flowOut = node.AddFlowOutput(" ");
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_56 = V_4;
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_57 = ___node0;
		NullCheck(L_57);
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_58;
		L_58 = FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022(L_57, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_56);
		L_56->___flowOut_3 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&L_56->___flowOut_3), (void*)L_58);
		// node.AddValueOutput(targetType.FriendlyName(), targetType, () => { return instance; });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_59 = ___node0;
		Type_t* L_60 = V_1;
		String_t* L_61;
		L_61 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_60, (bool)0, NULL);
		Type_t* L_62 = V_1;
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_63 = V_4;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_64 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_64, L_63, (intptr_t)((void*)U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__2_m3963B7F84D65679E041FDB27E1246503AF7166CD_RuntimeMethod_var), NULL);
		NullCheck(L_59);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_65;
		L_65 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(L_59, L_61, L_62, L_64, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// node.AddFlowInput(" ", (f) => { instance = instanceInput.value; field.SetValue(instance, valueInput.value); flowOut.Call(f); });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_66 = ___node0;
		U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* L_67 = V_4;
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_68 = (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*)il2cpp_codegen_object_new(FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272(L_68, L_67, (intptr_t)((void*)U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__3_m1C6BA1032EADD3FA38F4AEE56283E31C5268961F_RuntimeMethod_var), NULL);
		NullCheck(L_66);
		FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1* L_69;
		L_69 = FlowNode_AddFlowInput_mA0BC2BD46D1E1C6FC93DF0EFC8D203DBA5AD7DAD(L_66, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_68, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureReflectedFieldNode__ctor_mC4AD2E6C0E3258B8566797DF9AB58125613A30D1 (PureReflectedFieldNode_t3E9D767C5183E7569D4E4BC5E55C1EB59620529D* __this, const RuntimeMethod* method) 
{
	{
		ReflectedFieldNode__ctor_m340160241F49EF20752BB511115ACDC3CDD6CF4E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m4F52F852D0A4C5C6D5AA572224B8CAE5E4B0A5AE (U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m71EE5C24F70B17C9FE482723292DE95CEBC24471 (U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_1::<RegisterPorts>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_1_U3CRegisterPortsU3Eb__0_mC2C9A555FA61F478B4E6136E1A447CE7705135A4 (U3CU3Ec__DisplayClass0_1_t1F85E74D36B2DBD109F6C06AFF0B3FB6EC1367AE* __this, const RuntimeMethod* method) 
{
	{
		// node.AddValueOutput("Value", field.FieldType, () => { return constantValue; });
		RuntimeObject* L_0 = __this->___constantValue_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_2__ctor_m21E67F443810F1F6010B4A40162615207D2C12DC (U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_2::<RegisterPorts>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_2_U3CRegisterPortsU3Eb__1_m645F4AB0EA1DEC63890AAAE209256D1DA94261B4 (U3CU3Ec__DisplayClass0_2_t546FDDC0E01126CE3662DED7607F1142C6D68106* __this, const RuntimeMethod* method) 
{
	{
		// node.AddValueOutput("Value", field.FieldType, () => { return field.GetValue(instanceInput.value); });
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		FieldInfo_t* L_1 = L_0->___field_0;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_2 = __this->___instanceInput_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ValueInput_get_value_m277A371FECFD72E26117E56D0F4A7D86EF18A342(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(32 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_1, L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_3__ctor_mAB45F491BEB30537D3D31A47AC6C20FC0B472922 (U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::<RegisterPorts>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__2_m3963B7F84D65679E041FDB27E1246503AF7166CD (U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* __this, const RuntimeMethod* method) 
{
	{
		// node.AddValueOutput(targetType.FriendlyName(), targetType, () => { return instance; });
		RuntimeObject* L_0 = __this->___instance_0;
		return L_0;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedFieldNode/<>c__DisplayClass0_3::<RegisterPorts>b__3(FlowCanvas.Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_3_U3CRegisterPortsU3Eb__3_m1C6BA1032EADD3FA38F4AEE56283E31C5268961F (U3CU3Ec__DisplayClass0_3_t0CC7ED35CCD38D318A1A8727213484484424B81F* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) 
{
	{
		// node.AddFlowInput(" ", (f) => { instance = instanceInput.value; field.SetValue(instance, valueInput.value); flowOut.Call(f); });
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_0 = __this->___instanceInput_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ValueInput_get_value_m277A371FECFD72E26117E56D0F4A7D86EF18A342(L_0, NULL);
		__this->___instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instance_0), (void*)L_1);
		// node.AddFlowInput(" ", (f) => { instance = instanceInput.value; field.SetValue(instance, valueInput.value); flowOut.Call(f); });
		U3CU3Ec__DisplayClass0_0_t35206558E5E9AB034617A0C3B6EC4E1DB66D6788* L_2 = __this->___CSU24U3CU3E8__locals2_4;
		NullCheck(L_2);
		FieldInfo_t* L_3 = L_2->___field_0;
		RuntimeObject* L_4 = __this->___instance_0;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_5 = __this->___valueInput_2;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ValueInput_get_value_m277A371FECFD72E26117E56D0F4A7D86EF18A342(L_5, NULL);
		NullCheck(L_3);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_3, L_4, L_6, NULL);
		// node.AddFlowInput(" ", (f) => { instance = instanceInput.value; field.SetValue(instance, valueInput.value); flowOut.Call(f); });
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_7 = __this->___flowOut_3;
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_8 = ___f0;
		NullCheck(L_7);
		FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479(L_7, L_8, NULL);
		// node.AddFlowInput(" ", (f) => { instance = instanceInput.value; field.SetValue(instance, valueInput.value); flowOut.Call(f); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.ReflectedMethodNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMethodNode__ctor_m296734EFDDCC1418B4A22CE1F1A42DC2A7A83DAD (ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* __this, const RuntimeMethod* method) 
{
	{
		// public ReflectedMethodNode() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ReflectedMethodNode() { }
		return;
	}
}
// FlowCanvas.Nodes.Legacy.ReflectedMethodNode FlowCanvas.Nodes.Legacy.ReflectedMethodNode::Create(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* ReflectedMethodNode_Create_m89F841A25BAF1C7B27A85116A6D2B41ADD7951A0 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m6FEDBE31D78DFD9FB0F9509C800DC72950673F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CCreateU3Eb__0_mC55B28F48FC6F8683B6F4DF5B4CF58865A544474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* V_0 = NULL;
	ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* L_0 = (U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m9B4EA56A3D5A283EBED0485A5D3C0675F47DCDF7(L_0, NULL);
		V_0 = L_0;
		// var parameters = method.GetParameters();
		U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* L_1 = V_0;
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		NullCheck(L_1);
		L_1->___parameters_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___parameters_0), (void*)L_3);
		// if ( method.DeclaringType.RTIsValueType() || parameters.Any(p => p.ParameterType.IsByRef || p.IsParams(parameters)) ) {
		MethodInfo_t* L_4 = ___method0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ReflectionTools_RTIsValueType_m68FB788265574A49B5D6C31640BCA106F060B1E8(L_5, NULL);
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* L_7 = V_0;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_8 = L_7->___parameters_0;
		U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* L_9 = V_0;
		Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* L_10 = (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*)il2cpp_codegen_object_new(Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m4EB50A8D85414DB2DF89BD0200D31D2A6DC97026(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CCreateU3Eb__0_mC55B28F48FC6F8683B6F4DF5B4CF58865A544474_RuntimeMethod_var), NULL);
		bool L_11;
		L_11 = Enumerable_Any_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m6FEDBE31D78DFD9FB0F9509C800DC72950673F00((RuntimeObject*)L_8, L_10, Enumerable_Any_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m6FEDBE31D78DFD9FB0F9509C800DC72950673F00_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_003e;
		}
	}

IL_0038:
	{
		// return new PureReflectedMethodNode();
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_12 = (PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31*)il2cpp_codegen_object_new(PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		PureReflectedMethodNode__ctor_mD9F60374E43E2A55C10EE8398BCA6533697E340D(L_12, NULL);
		return L_12;
	}

IL_003e:
	{
	}
	try
	{// begin try (depth: 1)
		// try { return TryCreateJit(method); }
		MethodInfo_t* L_13 = ___method0;
		ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* L_14;
		L_14 = ReflectedMethodNode_TryCreateJit_mF57B11C166CD8F95A313FEDA7336F8DCF7B8B92C(L_13, NULL);
		V_1 = L_14;
		goto IL_0051;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Object)
		// catch { return new PureReflectedMethodNode(); }
		// catch { return new PureReflectedMethodNode(); }
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_15 = (PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		PureReflectedMethodNode__ctor_mD9F60374E43E2A55C10EE8398BCA6533697E340D(L_15, NULL);
		V_1 = L_15;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* L_16 = V_1;
		return L_16;
	}
}
// FlowCanvas.Nodes.Legacy.ReflectedMethodNode FlowCanvas.Nodes.Legacy.ReflectedMethodNode::TryCreateJit(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* ReflectedMethodNode_TryCreateJit_mF57B11C166CD8F95A313FEDA7336F8DCF7B8B92C (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisType_t_m275E353BA1242C1B0AF4B73B7BEE3994E4DF6A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t083860B929985EC8DF79C99B5157C38632F84196_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_1_tE11418DE74F12DD27920DE8A5EFBD9E5857F0795_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_2_tDF9F91B2E853A6CB8C1A5C1A6F246E4857BA0F18_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_3_t500CEC2C807F3DC2CA1908DAB7DB495D32E076F5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_4_t204A9FD9AB9DFBD516CC59595ED043E1F7FED587_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_5_t9971B44259BF2680E4DC370A70DAA1F8885AAC83_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_6_t4B25ECE96F467E196F6304A383E3CD7D95B7B584_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_7_t696F6F967F65FE888DAEB42E03869236CA1E1FF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_8_t31CA65FDB4ECD1CFFA0EDB47BD3E796E5AA08455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_1_t994D1C0C64E5BF71E7010BAF85C99DD31ED8B0CF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_2_tBEFEF5AD13E68DEC9A95D606E947993A42EAE2AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_3_t967297F6121083FC4EDBA15716C5F34B69AE0937_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_4_t8A2B1CC223C3BD8441EC34F370C9BB08744E5969_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_5_t88B5EB4889915A7BE7B8DF25C8EF6FCD046E1FB1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_6_tCDC33040D0DC1EF51FB7F12D27FF72D2AF6597AE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_7_t34BC7524E73036BFCE46C6C9681ECED9E21F0F5B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_8_t11C39AA4A49B150FBF1C29283B0FCCCDB2CFCFD9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedFunctionNode_9_t10B93736B5C827CF50761A54C02C1ABBA32F396D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTryCreateJitU3Eb__2_0_mF15E74BA3D392076EAF4047CC763B4A9753FE7B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTryCreateJitU3Eb__2_1_m6092CBA44B414339FE50531181A104D9C4AE93C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7E36EDD811A9F27412277F0A8C07BFEB2951D0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE015B39BEC2658EEB29E225B89BDCEC1CE1C74);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_1 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_5 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_6 = NULL;
	int32_t V_7 = 0;
	Func_2_t083860B929985EC8DF79C99B5157C38632F84196* G_B25_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* G_B25_1 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B25_2 = NULL;
	Func_2_t083860B929985EC8DF79C99B5157C38632F84196* G_B24_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* G_B24_1 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B24_2 = NULL;
	Type_t* G_B28_0 = NULL;
	Func_2_t083860B929985EC8DF79C99B5157C38632F84196* G_B53_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* G_B53_1 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B53_2 = NULL;
	Func_2_t083860B929985EC8DF79C99B5157C38632F84196* G_B52_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* G_B52_1 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B52_2 = NULL;
	{
		// if ( method.ReturnType == typeof(void) ) {
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_012a;
		}
	}
	{
		// Type type = null;
		V_0 = (Type_t*)NULL;
		// var argTypes = new List<Type>();
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_5 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_5, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		V_1 = L_5;
		// var parameters = method.GetParameters();
		MethodInfo_t* L_6 = ___method0;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_2 = L_7;
		// var length = parameters.Length;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_8 = V_2;
		NullCheck(L_8);
		V_3 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		// if ( !method.IsStatic ) {
		MethodInfo_t* L_9 = ___method0;
		NullCheck(L_9);
		bool L_10;
		L_10 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_9, NULL);
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		// length++;
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// argTypes.Add(method.DeclaringType);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_12 = V_1;
		MethodInfo_t* L_13 = ___method0;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		NullCheck(L_12);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_12, L_14, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
	}

IL_0045:
	{
		// if ( length == 0 ) type = typeof(ReflectedActionNode);
		int32_t L_15 = V_3;
		if (L_15)
		{
			goto IL_0053;
		}
	}
	{
		// if ( length == 0 ) type = typeof(ReflectedActionNode);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
		V_0 = L_17;
	}

IL_0053:
	{
		// if ( length == 1 ) type = typeof(ReflectedActionNode<>);
		int32_t L_18 = V_3;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		// if ( length == 1 ) type = typeof(ReflectedActionNode<>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (ReflectedActionNode_1_tE11418DE74F12DD27920DE8A5EFBD9E5857F0795_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_0 = L_20;
	}

IL_0062:
	{
		// if ( length == 2 ) type = typeof(ReflectedActionNode<,>);
		int32_t L_21 = V_3;
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		// if ( length == 2 ) type = typeof(ReflectedActionNode<,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (ReflectedActionNode_2_tDF9F91B2E853A6CB8C1A5C1A6F246E4857BA0F18_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		V_0 = L_23;
	}

IL_0071:
	{
		// if ( length == 3 ) type = typeof(ReflectedActionNode<,,>);
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0080;
		}
	}
	{
		// if ( length == 3 ) type = typeof(ReflectedActionNode<,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (ReflectedActionNode_3_t500CEC2C807F3DC2CA1908DAB7DB495D32E076F5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_0 = L_26;
	}

IL_0080:
	{
		// if ( length == 4 ) type = typeof(ReflectedActionNode<,,,>);
		int32_t L_27 = V_3;
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_008f;
		}
	}
	{
		// if ( length == 4 ) type = typeof(ReflectedActionNode<,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (ReflectedActionNode_4_t204A9FD9AB9DFBD516CC59595ED043E1F7FED587_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_28, NULL);
		V_0 = L_29;
	}

IL_008f:
	{
		// if ( length == 5 ) type = typeof(ReflectedActionNode<,,,,>);
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)5))))
		{
			goto IL_009e;
		}
	}
	{
		// if ( length == 5 ) type = typeof(ReflectedActionNode<,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (ReflectedActionNode_5_t9971B44259BF2680E4DC370A70DAA1F8885AAC83_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_0 = L_32;
	}

IL_009e:
	{
		// if ( length == 6 ) type = typeof(ReflectedActionNode<,,,,,>);
		int32_t L_33 = V_3;
		if ((!(((uint32_t)L_33) == ((uint32_t)6))))
		{
			goto IL_00ad;
		}
	}
	{
		// if ( length == 6 ) type = typeof(ReflectedActionNode<,,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (ReflectedActionNode_6_t4B25ECE96F467E196F6304A383E3CD7D95B7B584_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		V_0 = L_35;
	}

IL_00ad:
	{
		// if ( length == 7 ) type = typeof(ReflectedActionNode<,,,,,,>);
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_36) == ((uint32_t)7))))
		{
			goto IL_00bc;
		}
	}
	{
		// if ( length == 7 ) type = typeof(ReflectedActionNode<,,,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (ReflectedActionNode_7_t696F6F967F65FE888DAEB42E03869236CA1E1FF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_0 = L_38;
	}

IL_00bc:
	{
		// if ( length == 8 ) type = typeof(ReflectedActionNode<,,,,,,,>);
		int32_t L_39 = V_3;
		if ((!(((uint32_t)L_39) == ((uint32_t)8))))
		{
			goto IL_00cb;
		}
	}
	{
		// if ( length == 8 ) type = typeof(ReflectedActionNode<,,,,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (ReflectedActionNode_8_t31CA65FDB4ECD1CFFA0EDB47BD3E796E5AA08455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		V_0 = L_41;
	}

IL_00cb:
	{
		// if ( length >= 9 ) {
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)9))))
		{
			goto IL_00dc;
		}
	}
	{
		// Debug.LogError("ReflectedActionNode currently supports up to 8 parameters");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralBEE015B39BEC2658EEB29E225B89BDCEC1CE1C74, NULL);
		// return null;
		return (ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F*)NULL;
	}

IL_00dc:
	{
		// argTypes.AddRange(parameters.Select(p => p.ParameterType));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_43 = V_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_44 = V_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var);
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_45 = ((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_46 = L_45;
		G_B24_0 = L_46;
		G_B24_1 = L_44;
		G_B24_2 = L_43;
		if (L_46)
		{
			G_B25_0 = L_46;
			G_B25_1 = L_44;
			G_B25_2 = L_43;
			goto IL_00fd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* L_47 = ((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_48 = (Func_2_t083860B929985EC8DF79C99B5157C38632F84196*)il2cpp_codegen_object_new(Func_2_t083860B929985EC8DF79C99B5157C38632F84196_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Func_2__ctor_mABAC2A1749B8A3F716CAD567A9ABCC9654A7E97E(L_48, L_47, (intptr_t)((void*)U3CU3Ec_U3CTryCreateJitU3Eb__2_0_mF15E74BA3D392076EAF4047CC763B4A9753FE7B9_RuntimeMethod_var), NULL);
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_49 = L_48;
		((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_49);
		G_B25_0 = L_49;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
	}

IL_00fd:
	{
		RuntimeObject* L_50;
		L_50 = Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisType_t_m275E353BA1242C1B0AF4B73B7BEE3994E4DF6A84((RuntimeObject*)G_B25_1, G_B25_0, Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisType_t_m275E353BA1242C1B0AF4B73B7BEE3994E4DF6A84_RuntimeMethod_var);
		NullCheck(G_B25_2);
		List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F(G_B25_2, L_50, List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var);
		// return (ReflectedMethodNode)Activator.CreateInstance(argTypes.Count > 0 ? type.RTMakeGenericType(argTypes.ToArray()) : type);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline(L_51, List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		Type_t* L_53 = V_0;
		G_B28_0 = L_53;
		goto IL_011f;
	}

IL_0113:
	{
		Type_t* L_54 = V_0;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_55 = V_1;
		NullCheck(L_55);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_56;
		L_56 = List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56(L_55, List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = ReflectionTools_RTMakeGenericType_m051F63096B34442163B811AED1E64C7D38E94ED5(L_54, L_56, NULL);
		G_B28_0 = L_57;
	}

IL_011f:
	{
		RuntimeObject* L_58;
		L_58 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(G_B28_0, NULL);
		return ((ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F*)CastclassClass((RuntimeObject*)L_58, ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F_il2cpp_TypeInfo_var));
	}

IL_012a:
	{
		// Type type = null;
		V_4 = (Type_t*)NULL;
		// var argTypes = new List<Type>();
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_59 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_59, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		V_5 = L_59;
		// var parameters = method.GetParameters();
		MethodInfo_t* L_60 = ___method0;
		NullCheck(L_60);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_61;
		L_61 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_60);
		V_6 = L_61;
		// var length = parameters.Length;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_62 = V_6;
		NullCheck(L_62);
		V_7 = ((int32_t)(((RuntimeArray*)L_62)->max_length));
		// if ( !method.IsStatic ) {
		MethodInfo_t* L_63 = ___method0;
		NullCheck(L_63);
		bool L_64;
		L_64 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_63, NULL);
		if (L_64)
		{
			goto IL_015d;
		}
	}
	{
		// length++;
		int32_t L_65 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		// argTypes.Add(method.DeclaringType);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_66 = V_5;
		MethodInfo_t* L_67 = ___method0;
		NullCheck(L_67);
		Type_t* L_68;
		L_68 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_67);
		NullCheck(L_66);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_66, L_68, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
	}

IL_015d:
	{
		// if ( length == 0 ) type = typeof(ReflectedFunctionNode<>);
		int32_t L_69 = V_7;
		if (L_69)
		{
			goto IL_016d;
		}
	}
	{
		// if ( length == 0 ) type = typeof(ReflectedFunctionNode<>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_1_t994D1C0C64E5BF71E7010BAF85C99DD31ED8B0CF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_70, NULL);
		V_4 = L_71;
	}

IL_016d:
	{
		// if ( length == 1 ) type = typeof(ReflectedFunctionNode<,>);
		int32_t L_72 = V_7;
		if ((!(((uint32_t)L_72) == ((uint32_t)1))))
		{
			goto IL_017e;
		}
	}
	{
		// if ( length == 1 ) type = typeof(ReflectedFunctionNode<,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_2_tBEFEF5AD13E68DEC9A95D606E947993A42EAE2AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_74;
		L_74 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_73, NULL);
		V_4 = L_74;
	}

IL_017e:
	{
		// if ( length == 2 ) type = typeof(ReflectedFunctionNode<,,>);
		int32_t L_75 = V_7;
		if ((!(((uint32_t)L_75) == ((uint32_t)2))))
		{
			goto IL_018f;
		}
	}
	{
		// if ( length == 2 ) type = typeof(ReflectedFunctionNode<,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_3_t967297F6121083FC4EDBA15716C5F34B69AE0937_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_76, NULL);
		V_4 = L_77;
	}

IL_018f:
	{
		// if ( length == 3 ) type = typeof(ReflectedFunctionNode<,,,>);
		int32_t L_78 = V_7;
		if ((!(((uint32_t)L_78) == ((uint32_t)3))))
		{
			goto IL_01a0;
		}
	}
	{
		// if ( length == 3 ) type = typeof(ReflectedFunctionNode<,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_4_t8A2B1CC223C3BD8441EC34F370C9BB08744E5969_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_79, NULL);
		V_4 = L_80;
	}

IL_01a0:
	{
		// if ( length == 4 ) type = typeof(ReflectedFunctionNode<,,,,>);
		int32_t L_81 = V_7;
		if ((!(((uint32_t)L_81) == ((uint32_t)4))))
		{
			goto IL_01b1;
		}
	}
	{
		// if ( length == 4 ) type = typeof(ReflectedFunctionNode<,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_5_t88B5EB4889915A7BE7B8DF25C8EF6FCD046E1FB1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_4 = L_83;
	}

IL_01b1:
	{
		// if ( length == 5 ) type = typeof(ReflectedFunctionNode<,,,,,>);
		int32_t L_84 = V_7;
		if ((!(((uint32_t)L_84) == ((uint32_t)5))))
		{
			goto IL_01c2;
		}
	}
	{
		// if ( length == 5 ) type = typeof(ReflectedFunctionNode<,,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_6_tCDC33040D0DC1EF51FB7F12D27FF72D2AF6597AE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_85, NULL);
		V_4 = L_86;
	}

IL_01c2:
	{
		// if ( length == 6 ) type = typeof(ReflectedFunctionNode<,,,,,,>);
		int32_t L_87 = V_7;
		if ((!(((uint32_t)L_87) == ((uint32_t)6))))
		{
			goto IL_01d3;
		}
	}
	{
		// if ( length == 6 ) type = typeof(ReflectedFunctionNode<,,,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_7_t34BC7524E73036BFCE46C6C9681ECED9E21F0F5B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_88, NULL);
		V_4 = L_89;
	}

IL_01d3:
	{
		// if ( length == 7 ) type = typeof(ReflectedFunctionNode<,,,,,,,>);
		int32_t L_90 = V_7;
		if ((!(((uint32_t)L_90) == ((uint32_t)7))))
		{
			goto IL_01e4;
		}
	}
	{
		// if ( length == 7 ) type = typeof(ReflectedFunctionNode<,,,,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_8_t11C39AA4A49B150FBF1C29283B0FCCCDB2CFCFD9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_91, NULL);
		V_4 = L_92;
	}

IL_01e4:
	{
		// if ( length == 8 ) type = typeof(ReflectedFunctionNode<,,,,,,,,>);
		int32_t L_93 = V_7;
		if ((!(((uint32_t)L_93) == ((uint32_t)8))))
		{
			goto IL_01f5;
		}
	}
	{
		// if ( length == 8 ) type = typeof(ReflectedFunctionNode<,,,,,,,,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (ReflectedFunctionNode_9_t10B93736B5C827CF50761A54C02C1ABBA32F396D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_94, NULL);
		V_4 = L_95;
	}

IL_01f5:
	{
		// if ( length >= 9 ) {
		int32_t L_96 = V_7;
		if ((((int32_t)L_96) < ((int32_t)((int32_t)9))))
		{
			goto IL_0207;
		}
	}
	{
		// Debug.LogError("ReflectedFunctionNode currently supports up to 8 parameters");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA7E36EDD811A9F27412277F0A8C07BFEB2951D0C, NULL);
		// return null;
		return (ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F*)NULL;
	}

IL_0207:
	{
		// argTypes.AddRange(parameters.Select(p => p.ParameterType));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_97 = V_5;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_98 = V_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var);
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_99 = ((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_2;
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_100 = L_99;
		G_B52_0 = L_100;
		G_B52_1 = L_98;
		G_B52_2 = L_97;
		if (L_100)
		{
			G_B53_0 = L_100;
			G_B53_1 = L_98;
			G_B53_2 = L_97;
			goto IL_022a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* L_101 = ((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_102 = (Func_2_t083860B929985EC8DF79C99B5157C38632F84196*)il2cpp_codegen_object_new(Func_2_t083860B929985EC8DF79C99B5157C38632F84196_il2cpp_TypeInfo_var);
		NullCheck(L_102);
		Func_2__ctor_mABAC2A1749B8A3F716CAD567A9ABCC9654A7E97E(L_102, L_101, (intptr_t)((void*)U3CU3Ec_U3CTryCreateJitU3Eb__2_1_m6092CBA44B414339FE50531181A104D9C4AE93C6_RuntimeMethod_var), NULL);
		Func_2_t083860B929985EC8DF79C99B5157C38632F84196* L_103 = L_102;
		((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_2 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_2), (void*)L_103);
		G_B53_0 = L_103;
		G_B53_1 = G_B52_1;
		G_B53_2 = G_B52_2;
	}

IL_022a:
	{
		RuntimeObject* L_104;
		L_104 = Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisType_t_m275E353BA1242C1B0AF4B73B7BEE3994E4DF6A84((RuntimeObject*)G_B53_1, G_B53_0, Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisType_t_m275E353BA1242C1B0AF4B73B7BEE3994E4DF6A84_RuntimeMethod_var);
		NullCheck(G_B53_2);
		List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F(G_B53_2, L_104, List_1_AddRange_m0D60CD105ED83AED827172D5B81047F1FC28C77F_RuntimeMethod_var);
		// argTypes.Add(method.ReturnType);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_105 = V_5;
		MethodInfo_t* L_106 = ___method0;
		NullCheck(L_106);
		Type_t* L_107;
		L_107 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_106);
		NullCheck(L_105);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_105, L_107, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		// return (ReflectedMethodNode)Activator.CreateInstance(type.RTMakeGenericType(argTypes.ToArray()));
		Type_t* L_108 = V_4;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_109 = V_5;
		NullCheck(L_109);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_110;
		L_110 = List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56(L_109, List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_111;
		L_111 = ReflectionTools_RTMakeGenericType_m051F63096B34442163B811AED1E64C7D38E94ED5(L_108, L_110, NULL);
		RuntimeObject* L_112;
		L_112 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_111, NULL);
		return ((ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F*)CastclassClass((RuntimeObject*)L_112, ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F_il2cpp_TypeInfo_var));
	}
}
// System.String FlowCanvas.Nodes.Legacy.ReflectedMethodNode::GetName(System.Reflection.MethodInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectedMethodNode_GetName_m1B757739AF952F65F9DF5D6FCC8C00F79528DEED (ReflectedMethodNode_t6D77ECB596D1F46780B1A37D9E1B3ABF07EF1F7F* __this, MethodInfo_t* ___method0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if ( method == null ) return null;
		MethodInfo_t* L_0 = ___method0;
		bool L_1;
		L_1 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if ( method == null ) return null;
		return (String_t*)NULL;
	}

IL_000b:
	{
		// var parameters = method.GetParameters();
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		// if ( method.IsStatic ) return parameters[i].Name;
		MethodInfo_t* L_4 = ___method0;
		NullCheck(L_4);
		bool L_5;
		L_5 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_4, NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// if ( method.IsStatic ) return parameters[i].Name;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_6 = V_0;
		int32_t L_7 = ___i1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_9);
		return L_10;
	}

IL_0023:
	{
		// var instanceName = method.DeclaringType.FriendlyName();
		MethodInfo_t* L_11 = ___method0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_11);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_12, (bool)0, NULL);
		V_1 = L_13;
		// if ( i == 0 ) return instanceName;
		int32_t L_14 = ___i1;
		if (L_14)
		{
			goto IL_0035;
		}
	}
	{
		// if ( i == 0 ) return instanceName;
		String_t* L_15 = V_1;
		return L_15;
	}

IL_0035:
	{
		// var paramName = parameters[i - 1].Name;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16 = V_0;
		int32_t L_17 = ___i1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_19);
		V_2 = L_20;
		// return paramName != instanceName ? paramName : paramName + " "; //for rare cases where it's the same like for example Animation class.
		String_t* L_21 = V_2;
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_21, L_22, NULL);
		if (L_23)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_24 = V_2;
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_24, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		return L_25;
	}

IL_0055:
	{
		String_t* L_26 = V_2;
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9B4EA56A3D5A283EBED0485A5D3C0675F47DCDF7 (U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c__DisplayClass1_0::<Create>b__0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CCreateU3Eb__0_mC55B28F48FC6F8683B6F4DF5B4CF58865A544474 (U3CU3Ec__DisplayClass1_0_t4BD5E2E3AC690A701336041A9E26442184E02B21* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( method.DeclaringType.RTIsValueType() || parameters.Any(p => p.ParameterType.IsByRef || p.IsParams(parameters)) ) {
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___p0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_3 = ___p0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4 = __this->___parameters_0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = ReflectionTools_IsParams_mC107A5DB63D56E74BE89B46ACE7EDDDF29BA2FF8(L_3, L_4, NULL);
		return L_5;
	}

IL_001a:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC2021FEB28E292612352EC9F820D67FC396EA20F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* L_0 = (U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B*)il2cpp_codegen_object_new(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF8E2916287F527205332BC259333AB02C70BBF4C(L_0, NULL);
		((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF8E2916287F527205332BC259333AB02C70BBF4C (U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Type FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::<TryCreateJit>b__2_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3CTryCreateJitU3Eb__2_0_mF15E74BA3D392076EAF4047CC763B4A9753FE7B9 (U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___p0, const RuntimeMethod* method) 
{
	{
		// argTypes.AddRange(parameters.Select(p => p.ParameterType));
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___p0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Type FlowCanvas.Nodes.Legacy.ReflectedMethodNode/<>c::<TryCreateJit>b__2_1(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3CTryCreateJitU3Eb__2_1_m6092CBA44B414339FE50531181A104D9C4AE93C6 (U3CU3Ec_tA48764EDFA7C487EF9D1CEF5D75B0B9FBF80A92B* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___p0, const RuntimeMethod* method) 
{
	{
		// argTypes.AddRange(parameters.Select(p => p.ParameterType));
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___p0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::RegisterPorts(FlowCanvas.FlowNode,System.Reflection.MethodInfo,FlowCanvas.Nodes.ReflectedMethodRegistrationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureReflectedMethodNode_RegisterPorts_m4DC704368641902C0E834CA3D84393E32F9882BF (PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* __this, FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* ___node0, MethodInfo_t* ___method1, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m92EF6B417E2100D09897A1008F8292FC63B38229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__0_m225CED944A8BFD13EB2FDC118A1BE9CF3EF7CD0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__1_m9FC059BB74FD1FA6407C2ED402DE9D5C4B933CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_U3CRegisterPortsU3Eb__2_m19688444C0499AC6DC886F02AD92798D676AAB84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_2_U3CRegisterPortsU3Eb__3_m718F8A28C1C1FA8D762D7499CB90454680E72C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueInput_1__ctor_m3F443E59624DD23868C01CF491B618666F93AB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBCF4E0EFA1E77D5BC994B68E1C35B6AD765FFDC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* V_2 = NULL;
	int32_t V_3 = 0;
	U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* V_4 = NULL;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* V_8 = NULL;
	ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* V_9 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_0 = (U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_mA0330BB0B533D46E42882B984CAFCBC96985CF43(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_2 = V_0;
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 L_3 = ___options2;
		NullCheck(L_2);
		L_2->___options_1 = L_3;
		// this.method = method;
		MethodInfo_t* L_4 = ___method1;
		__this->___method_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___method_0), (void*)L_4);
		// var parameters = method.GetParameters();
		MethodInfo_t* L_5 = ___method1;
		NullCheck(L_5);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_6;
		L_6 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_5);
		V_1 = L_6;
		// if ( options.callable ) {
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_7 = V_0;
		NullCheck(L_7);
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499* L_8 = (&L_7->___options_1);
		bool L_9 = L_8->___callable_0;
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* L_10 = (U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		U3CU3Ec__DisplayClass8_1__ctor_m65C80CB9C696E470C79E7F9943DAFC56CB469937(L_10, NULL);
		V_2 = L_10;
		U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* L_11 = V_2;
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_12 = V_0;
		NullCheck(L_11);
		L_11->___CSU24U3CU3E8__locals1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___CSU24U3CU3E8__locals1_1), (void*)L_12);
		// var o = node.AddFlowOutput(" ");
		U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* L_13 = V_2;
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_14 = ___node0;
		NullCheck(L_14);
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_15;
		L_15 = FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022(L_14, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_13);
		L_13->___o_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___o_0), (void*)L_15);
		// node.AddFlowInput(" ", (f) => { CallMethod(); o.Call(f); });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_16 = ___node0;
		U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* L_17 = V_2;
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_18 = (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*)il2cpp_codegen_object_new(FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass8_1_U3CRegisterPortsU3Eb__2_m19688444C0499AC6DC886F02AD92798D676AAB84_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1* L_19;
		L_19 = FlowNode_AddFlowInput_mA0BC2BD46D1E1C6FC93DF0EFC8D203DBA5AD7DAD(L_16, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_006f:
	{
		// if ( !method.IsStatic ) {
		MethodInfo_t* L_20 = ___method1;
		NullCheck(L_20);
		bool L_21;
		L_21 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_20, NULL);
		if (L_21)
		{
			goto IL_00d1;
		}
	}
	{
		// instanceInput = node.AddValueInput(method.DeclaringType.FriendlyName(), method.DeclaringType);
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_22 = ___node0;
		MethodInfo_t* L_23 = ___method1;
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_23);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_24, (bool)0, NULL);
		MethodInfo_t* L_26 = ___method1;
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_26);
		NullCheck(L_22);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_28;
		L_28 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(L_22, L_25, L_27, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___instanceInput_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceInput_1), (void*)L_28);
		// if ( options.callable ) {
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_29 = V_0;
		NullCheck(L_29);
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499* L_30 = (&L_29->___options_1);
		bool L_31 = L_30->___callable_0;
		if (!L_31)
		{
			goto IL_00d1;
		}
	}
	{
		// node.AddValueOutput(method.DeclaringType.FriendlyName(), method.DeclaringType, () => { return instance; });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_32 = ___node0;
		MethodInfo_t* L_33 = ___method1;
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_33);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = ReflectionTools_FriendlyName_m762097F00CB31169362B7C81EA7267C9631D54D0(L_34, (bool)0, NULL);
		MethodInfo_t* L_36 = ___method1;
		NullCheck(L_36);
		Type_t* L_37;
		L_37 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_36);
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_38 = V_0;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_39 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_39, L_38, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__0_m225CED944A8BFD13EB2FDC118A1BE9CF3EF7CD0B_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_40;
		L_40 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(L_32, L_35, L_37, L_39, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_00d1:
	{
		// if ( method.ReturnType != typeof(void) ) {
		MethodInfo_t* L_41 = ___method1;
		NullCheck(L_41);
		Type_t* L_42;
		L_42 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_41);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		bool L_45;
		L_45 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_42, L_44, NULL);
		if (!L_45)
		{
			goto IL_010b;
		}
	}
	{
		// node.AddValueOutput("Value", method.ReturnType, () => { return options.callable ? returnValue : CallMethod(); });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_46 = ___node0;
		MethodInfo_t* L_47 = ___method1;
		NullCheck(L_47);
		Type_t* L_48;
		L_48 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_47);
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_49 = V_0;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_50 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_50, L_49, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__1_m9FC059BB74FD1FA6407C2ED402DE9D5C4B933CAC_RuntimeMethod_var), NULL);
		NullCheck(L_46);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_51;
		L_51 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(L_46, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, L_48, L_50, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_010b:
	{
		// inputs = new List<ValueInput>();
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_52 = (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A*)il2cpp_codegen_object_new(List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		List_1__ctor_m92EF6B417E2100D09897A1008F8292FC63B38229(L_52, List_1__ctor_m92EF6B417E2100D09897A1008F8292FC63B38229_RuntimeMethod_var);
		__this->___inputs_2 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputs_2), (void*)L_52);
		// for ( var _i = 0; _i < parameters.Length; _i++ ) {
		V_3 = 0;
		goto IL_02a6;
	}

IL_011d:
	{
		U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* L_53 = (U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		U3CU3Ec__DisplayClass8_2__ctor_m8DCB40AAC95C0D3557543F1ED417883EC7DEEE53(L_53, NULL);
		V_4 = L_53;
		U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* L_54 = V_4;
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_55 = V_0;
		NullCheck(L_54);
		L_54->___CSU24U3CU3E8__locals2_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_54->___CSU24U3CU3E8__locals2_1), (void*)L_55);
		// var i = _i;
		U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* L_56 = V_4;
		int32_t L_57 = V_3;
		NullCheck(L_56);
		L_56->___i_0 = L_57;
		// var parameter = parameters[i];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_58 = V_1;
		U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = L_59->___i_0;
		NullCheck(L_58);
		int32_t L_61 = L_60;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_5 = L_62;
		// var paramName = parameter.Name;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_63 = V_5;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_63);
		V_6 = L_64;
		// if ( instanceInput != null && paramName == instanceInput.name ) { //for rare cases where it's same as instance name like for example in Animation class.
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_65 = __this->___instanceInput_1;
		if (!L_65)
		{
			goto IL_0172;
		}
	}
	{
		String_t* L_66 = V_6;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_67 = __this->___instanceInput_1;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = Port_get_name_mA065A94124E299D515E4C09BC6684A7A65803BCC_inline(L_67, NULL);
		bool L_69;
		L_69 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_66, L_68, NULL);
		if (!L_69)
		{
			goto IL_0172;
		}
	}
	{
		// paramName = paramName + " ";
		String_t* L_70 = V_6;
		String_t* L_71;
		L_71 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_70, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_6 = L_71;
	}

IL_0172:
	{
		// if ( parameter.IsOut || parameter.ParameterType.IsByRef ) {
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_72 = V_5;
		NullCheck(L_72);
		bool L_73;
		L_73 = ParameterInfo_get_IsOut_m7832D76F7B5FAE8B94A7D2BDC2CF466000FB235C(L_72, NULL);
		if (L_73)
		{
			goto IL_0189;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_74 = V_5;
		NullCheck(L_74);
		Type_t* L_75;
		L_75 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_74);
		NullCheck(L_75);
		bool L_76;
		L_76 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_75, NULL);
		if (!L_76)
		{
			goto IL_01c8;
		}
	}

IL_0189:
	{
		// node.AddValueOutput(paramName, parameter.ParameterType.GetElementType(), () => { if ( !options.callable ) { CallMethod(); } return args[i]; });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_77 = ___node0;
		String_t* L_78 = V_6;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_79 = V_5;
		NullCheck(L_79);
		Type_t* L_80;
		L_80 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_79);
		NullCheck(L_80);
		Type_t* L_81;
		L_81 = VirtualFuncInvoker0< Type_t* >::Invoke(63 /* System.Type System.Type::GetElementType() */, L_80);
		U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* L_82 = V_4;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_83 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_83, L_82, (intptr_t)((void*)U3CU3Ec__DisplayClass8_2_U3CRegisterPortsU3Eb__3_m718F8A28C1C1FA8D762D7499CB90454680E72C17_RuntimeMethod_var), NULL);
		NullCheck(L_77);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_84;
		L_84 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(L_77, L_78, L_81, L_83, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// inputs.Add(new ValueInput<object>(null, null, null)); //add dummy inputs for the shake of getting out args correctly by index
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_85 = __this->___inputs_2;
		ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36* L_86 = (ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36*)il2cpp_codegen_object_new(ValueInput_1_tC4A3FE69901D6D6E1E471BF05A6D218793E31E36_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		ValueInput_1__ctor_m3F443E59624DD23868C01CF491B618666F93AB87(L_86, (FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB*)NULL, (String_t*)NULL, (String_t*)NULL, ValueInput_1__ctor_m3F443E59624DD23868C01CF491B618666F93AB87_RuntimeMethod_var);
		NullCheck(L_85);
		List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_inline(L_85, L_86, List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_RuntimeMethod_var);
		goto IL_02a2;
	}

IL_01c8:
	{
		// if ( options.exposeParams && parameter.IsParams(parameters) ) {
		U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* L_87 = V_4;
		NullCheck(L_87);
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_88 = L_87->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_88);
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499* L_89 = (&L_88->___options_1);
		bool L_90 = L_89->___exposeParams_1;
		if (!L_90)
		{
			goto IL_0264;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_91 = V_5;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_92 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = ReflectionTools_IsParams_mC107A5DB63D56E74BE89B46ACE7EDDDF29BA2FF8(L_91, L_92, NULL);
		if (!L_93)
		{
			goto IL_0264;
		}
	}
	{
		// paramsInputs = new List<ValueInput>();
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_94 = (List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A*)il2cpp_codegen_object_new(List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A_il2cpp_TypeInfo_var);
		NullCheck(L_94);
		List_1__ctor_m92EF6B417E2100D09897A1008F8292FC63B38229(L_94, List_1__ctor_m92EF6B417E2100D09897A1008F8292FC63B38229_RuntimeMethod_var);
		__this->___paramsInputs_3 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paramsInputs_3), (void*)L_94);
		// paramsArrayType = parameter.ParameterType;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_95 = V_5;
		NullCheck(L_95);
		Type_t* L_96;
		L_96 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_95);
		__this->___paramsArrayType_4 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paramsArrayType_4), (void*)L_96);
		// for ( var j = 0; j < options.exposedParamsCount; j++ ) {
		V_7 = 0;
		goto IL_024d;
	}

IL_0205:
	{
		// var paramPort = node.AddValueInput(paramName + " #" + j, parameter.ParameterType.GetEnumerableElementType(), paramName + j);
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_97 = ___node0;
		String_t* L_98 = V_6;
		String_t* L_99;
		L_99 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		String_t* L_100;
		L_100 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_98, _stringLiteralEBCF4E0EFA1E77D5BC994B68E1C35B6AD765FFDC, L_99, NULL);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_101 = V_5;
		NullCheck(L_101);
		Type_t* L_102;
		L_102 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_101);
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = ReflectionTools_GetEnumerableElementType_mC0C19FD9C713651A4466D36F56668DC14156B90D(L_102, NULL);
		String_t* L_104 = V_6;
		String_t* L_105;
		L_105 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		String_t* L_106;
		L_106 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_104, L_105, NULL);
		NullCheck(L_97);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_107;
		L_107 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(L_97, L_100, L_103, L_106, NULL);
		V_8 = L_107;
		// paramsInputs.Add(paramPort);
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_108 = __this->___paramsInputs_3;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_109 = V_8;
		NullCheck(L_108);
		List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_inline(L_108, L_109, List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_RuntimeMethod_var);
		// for ( var j = 0; j < options.exposedParamsCount; j++ ) {
		int32_t L_110 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_024d:
	{
		// for ( var j = 0; j < options.exposedParamsCount; j++ ) {
		int32_t L_111 = V_7;
		U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* L_112 = V_4;
		NullCheck(L_112);
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_113 = L_112->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_113);
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499* L_114 = (&L_113->___options_1);
		int32_t L_115 = L_114->___exposedParamsCount_2;
		if ((((int32_t)L_111) < ((int32_t)L_115)))
		{
			goto IL_0205;
		}
	}
	{
		goto IL_02a2;
	}

IL_0264:
	{
		// var paramPort = node.AddValueInput(paramName, parameter.ParameterType);
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_116 = ___node0;
		String_t* L_117 = V_6;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_118 = V_5;
		NullCheck(L_118);
		Type_t* L_119;
		L_119 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_118);
		NullCheck(L_116);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_120;
		L_120 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(L_116, L_117, L_119, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_9 = L_120;
		// if ( parameter.IsOptional ) {
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_121 = V_5;
		NullCheck(L_121);
		bool L_122;
		L_122 = ParameterInfo_get_IsOptional_mB27F82EA5A21188AD6E5CC5A34A3913C6D887BD4(L_121, NULL);
		if (!L_122)
		{
			goto IL_0295;
		}
	}
	{
		// if ( paramPort != null ) {
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_123 = V_9;
		if (!L_123)
		{
			goto IL_0295;
		}
	}
	{
		// paramPort.serializedValue = parameter.DefaultValue;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_124 = V_9;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_125 = V_5;
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_125);
		NullCheck(L_124);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void FlowCanvas.ValueInput::set_serializedValue(System.Object) */, L_124, L_126);
	}

IL_0295:
	{
		// inputs.Add(paramPort);
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_127 = __this->___inputs_2;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_128 = V_9;
		NullCheck(L_127);
		List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_inline(L_127, L_128, List_1_Add_m245DC073E6C6C1BBF2E542315B6C2CA0B17033B3_RuntimeMethod_var);
	}

IL_02a2:
	{
		// for ( var _i = 0; _i < parameters.Length; _i++ ) {
		int32_t L_129 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_129, 1));
	}

IL_02a6:
	{
		// for ( var _i = 0; _i < parameters.Length; _i++ ) {
		int32_t L_130 = V_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_131 = V_1;
		NullCheck(L_131);
		if ((((int32_t)L_130) < ((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length)))))
		{
			goto IL_011d;
		}
	}
	{
		// }
		return;
	}
}
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::CallMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PureReflectedMethodNode_CallMethod_m8BF4719FD16AE8D679FC1573A4E1285BB16C6E17 (PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3875A9434C58C8BB5295E7ACA979966A0F32434C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeArray* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t G_B3_0 = 0;
	PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* G_B4_2 = NULL;
	{
		// if ( args == null ) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___args_5;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// args = new object[inputs.Count + ( paramsInputs != null ? 1 : 0 )];
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_1 = __this->___inputs_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_inline(L_1, List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_RuntimeMethod_var);
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_3 = __this->___paramsInputs_3;
		G_B2_0 = L_2;
		G_B2_1 = __this;
		if (L_3)
		{
			G_B3_0 = L_2;
			G_B3_1 = __this;
			goto IL_001f;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0020:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(G_B4_1, G_B4_0)));
		NullCheck(G_B4_2);
		G_B4_2->___args_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___args_5), (void*)L_4);
	}

IL_002b:
	{
		// for ( var i = 0; i < inputs.Count; i++ ) {
		V_0 = 0;
		goto IL_004c;
	}

IL_002f:
	{
		// args[i] = inputs[i].value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___args_5;
		int32_t L_6 = V_0;
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_7 = __this->___inputs_2;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_9;
		L_9 = List_1_get_Item_m3875A9434C58C8BB5295E7ACA979966A0F32434C(L_7, L_8, List_1_get_Item_m3875A9434C58C8BB5295E7ACA979966A0F32434C_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = ValueInput_get_value_m277A371FECFD72E26117E56D0F4A7D86EF18A342(L_9, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_10);
		// for ( var i = 0; i < inputs.Count; i++ ) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		// for ( var i = 0; i < inputs.Count; i++ ) {
		int32_t L_12 = V_0;
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_13 = __this->___inputs_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_inline(L_13, List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002f;
		}
	}
	{
		// if ( paramsInputs != null ) {
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_15 = __this->___paramsInputs_3;
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		// var paramsArray = Array.CreateInstance(paramsArrayType.GetElementType(), paramsInputs.Count);
		Type_t* L_16 = __this->___paramsArrayType_4;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(63 /* System.Type System.Type::GetElementType() */, L_16);
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_18 = __this->___paramsInputs_3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_inline(L_18, List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_RuntimeMethod_var);
		RuntimeArray* L_20;
		L_20 = Array_CreateInstance_m40F80F4A7A05B492BC5A19CEFB7F9AE8641FDE2C(L_17, L_19, NULL);
		V_1 = L_20;
		// for ( var i = 0; i < paramsInputs.Count; i++ ) {
		V_2 = 0;
		goto IL_009e;
	}

IL_0082:
	{
		// paramsArray.SetValue(paramsInputs[i].value, i);
		RuntimeArray* L_21 = V_1;
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_22 = __this->___paramsInputs_3;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_24;
		L_24 = List_1_get_Item_m3875A9434C58C8BB5295E7ACA979966A0F32434C(L_22, L_23, List_1_get_Item_m3875A9434C58C8BB5295E7ACA979966A0F32434C_RuntimeMethod_var);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = ValueInput_get_value_m277A371FECFD72E26117E56D0F4A7D86EF18A342(L_24, NULL);
		int32_t L_26 = V_2;
		NullCheck(L_21);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_21, L_25, L_26, NULL);
		// for ( var i = 0; i < paramsInputs.Count; i++ ) {
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009e:
	{
		// for ( var i = 0; i < paramsInputs.Count; i++ ) {
		int32_t L_28 = V_2;
		List_1_t4EA32F10D7BD2B5955E96E4007A6D3CB0F8BD58A* L_29 = __this->___paramsInputs_3;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_inline(L_29, List_1_get_Count_mC90433B30D05BF15C0E9F52D26BE3E44E5872BAA_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0082;
		}
	}
	{
		// args[args.Length - 1] = paramsArray;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = __this->___args_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = __this->___args_5;
		NullCheck(L_32);
		RuntimeArray* L_33 = V_1;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_32)->max_length)), 1))), (RuntimeObject*)L_33);
	}

IL_00be:
	{
		// if ( method.IsStatic ) {
		MethodInfo_t* L_34 = __this->___method_0;
		NullCheck(L_34);
		bool L_35;
		L_35 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_34, NULL);
		if (!L_35)
		{
			goto IL_00e7;
		}
	}
	{
		// return returnValue = method.Invoke(null, args);
		MethodInfo_t* L_36 = __this->___method_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = __this->___args_5;
		NullCheck(L_36);
		RuntimeObject* L_38;
		L_38 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_36, NULL, L_37, NULL);
		RuntimeObject* L_39 = L_38;
		V_3 = L_39;
		__this->___returnValue_7 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___returnValue_7), (void*)L_39);
		RuntimeObject* L_40 = V_3;
		return L_40;
	}

IL_00e7:
	{
		// instance = instanceInput.value;
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_41 = __this->___instanceInput_1;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = ValueInput_get_value_m277A371FECFD72E26117E56D0F4A7D86EF18A342(L_41, NULL);
		__this->___instance_6 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instance_6), (void*)L_42);
		// if ( instance == null || instance.Equals(null) ) {
		RuntimeObject* L_43 = __this->___instance_6;
		if (!L_43)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_44 = __this->___instance_6;
		NullCheck(L_44);
		bool L_45;
		L_45 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_44, NULL);
		if (!L_45)
		{
			goto IL_0119;
		}
	}

IL_010e:
	{
		// return returnValue = null;
		V_3 = NULL;
		__this->___returnValue_7 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___returnValue_7), (void*)NULL);
		RuntimeObject* L_46 = V_3;
		return L_46;
	}

IL_0119:
	{
		// return returnValue = method.Invoke(instance, args);
		MethodInfo_t* L_47 = __this->___method_0;
		RuntimeObject* L_48 = __this->___instance_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = __this->___args_5;
		NullCheck(L_47);
		RuntimeObject* L_50;
		L_50 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_47, L_48, L_49, NULL);
		RuntimeObject* L_51 = L_50;
		V_3 = L_51;
		__this->___returnValue_7 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___returnValue_7), (void*)L_51);
		RuntimeObject* L_52 = V_3;
		return L_52;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PureReflectedMethodNode__ctor_mD9F60374E43E2A55C10EE8398BCA6533697E340D (PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* __this, const RuntimeMethod* method) 
{
	{
		ReflectedMethodNode__ctor_m296734EFDDCC1418B4A22CE1F1A42DC2A7A83DAD(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mA0330BB0B533D46E42882B984CAFCBC96985CF43 (U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0::<RegisterPorts>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__0_m225CED944A8BFD13EB2FDC118A1BE9CF3EF7CD0B (U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* __this, const RuntimeMethod* method) 
{
	{
		// node.AddValueOutput(method.DeclaringType.FriendlyName(), method.DeclaringType, () => { return instance; });
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___instance_6;
		return L_1;
	}
}
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_0::<RegisterPorts>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass8_0_U3CRegisterPortsU3Eb__1_m9FC059BB74FD1FA6407C2ED402DE9D5C4B933CAC (U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* __this, const RuntimeMethod* method) 
{
	{
		// node.AddValueOutput("Value", method.ReturnType, () => { return options.callable ? returnValue : CallMethod(); });
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499* L_0 = (&__this->___options_1);
		bool L_1 = L_0->___callable_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = PureReflectedMethodNode_CallMethod_m8BF4719FD16AE8D679FC1573A4E1285BB16C6E17(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___returnValue_7;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1__ctor_m65C80CB9C696E470C79E7F9943DAFC56CB469937 (U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_1::<RegisterPorts>b__2(FlowCanvas.Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1_U3CRegisterPortsU3Eb__2_m19688444C0499AC6DC886F02AD92798D676AAB84 (U3CU3Ec__DisplayClass8_1_t1E089321B592173EAD7575ACE62F8A50A22F6B26* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) 
{
	{
		// node.AddFlowInput(" ", (f) => { CallMethod(); o.Call(f); });
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_1 = L_0->___U3CU3E4__this_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = PureReflectedMethodNode_CallMethod_m8BF4719FD16AE8D679FC1573A4E1285BB16C6E17(L_1, NULL);
		// node.AddFlowInput(" ", (f) => { CallMethod(); o.Call(f); });
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_3 = __this->___o_0;
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_4 = ___f0;
		NullCheck(L_3);
		FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479(L_3, L_4, NULL);
		// node.AddFlowInput(" ", (f) => { CallMethod(); o.Call(f); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_2__ctor_m8DCB40AAC95C0D3557543F1ED417883EC7DEEE53 (U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Nodes.Legacy.PureReflectedMethodNode/<>c__DisplayClass8_2::<RegisterPorts>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass8_2_U3CRegisterPortsU3Eb__3_m718F8A28C1C1FA8D762D7499CB90454680E72C17 (U3CU3Ec__DisplayClass8_2_tE1564D9F932AECACC2C208C5BDAE4EAD95BFE164* __this, const RuntimeMethod* method) 
{
	{
		// node.AddValueOutput(paramName, parameter.ParameterType.GetElementType(), () => { if ( !options.callable ) { CallMethod(); } return args[i]; });
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499* L_1 = (&L_0->___options_1);
		bool L_2 = L_1->___callable_0;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// node.AddValueOutput(paramName, parameter.ParameterType.GetElementType(), () => { if ( !options.callable ) { CallMethod(); } return args[i]; });
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_3 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_3);
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_4 = L_3->___U3CU3E4__this_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = PureReflectedMethodNode_CallMethod_m8BF4719FD16AE8D679FC1573A4E1285BB16C6E17(L_4, NULL);
	}

IL_0023:
	{
		// node.AddValueOutput(paramName, parameter.ParameterType.GetElementType(), () => { if ( !options.callable ) { CallMethod(); } return args[i]; });
		U3CU3Ec__DisplayClass8_0_tD92D85E307E18E8839CC4A24AC8A4B3CDA8749D1* L_6 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_6);
		PureReflectedMethodNode_t24E62ED5B0F8B7EC3C21625F5C45A6025BE7AE31* L_7 = L_6->___U3CU3E4__this_0;
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->___args_5;
		int32_t L_9 = __this->___i_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.ReflectedActionNode::Call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedActionNode_Call_mDD00D2CB42ECC35D7C627ABCE4BE90369767C0D2 (ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744* __this, const RuntimeMethod* method) 
{
	{
		// void Call() { call(); }
		ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF* L_0 = __this->___call_0;
		NullCheck(L_0);
		ActionCall_Invoke_m805BE8D23AFF86DD93A37EE202CAA6BD2945252B_inline(L_0, NULL);
		// void Call() { call(); }
		return;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.ReflectedActionNode::RegisterPorts(FlowCanvas.FlowNode,System.Reflection.MethodInfo,FlowCanvas.Nodes.ReflectedMethodRegistrationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedActionNode_RegisterPorts_m4625CD252E7FA60EAF3F1B5DB9EE8D3B440B9828 (ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744* __this, FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* ___node0, MethodInfo_t* ___method1, ReflectedMethodRegistrationOptions_t9B48B20EC6980320014D6AA6156CE2DA213E9499 ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_RTCreateDelegate_TisActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF_m2A046D14E381451F478690F0F2A1EFE16CE3D155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRegisterPortsU3Eb__0_m1415CF1F7A1B54940CBCF9E39567B647109E04E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* L_0 = (U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m2C66EB3B657A69F6CAB85C558FAC5060F196FC38(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// call = method.RTCreateDelegate<ActionCall>(null);
		MethodInfo_t* L_2 = ___method1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionTools_tE12B5251BB48C3A8B99BC5D4278C46DADBBF905A_il2cpp_TypeInfo_var);
		ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF* L_3;
		L_3 = ReflectionTools_RTCreateDelegate_TisActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF_m2A046D14E381451F478690F0F2A1EFE16CE3D155(L_2, NULL, ReflectionTools_RTCreateDelegate_TisActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF_m2A046D14E381451F478690F0F2A1EFE16CE3D155_RuntimeMethod_var);
		__this->___call_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___call_0), (void*)L_3);
		// var o = node.AddFlowOutput(" ");
		U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* L_4 = V_0;
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_5 = ___node0;
		NullCheck(L_5);
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_6;
		L_6 = FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_4);
		L_4->___o_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___o_1), (void*)L_6);
		// node.AddFlowInput(" ", (f) => { Call(); o.Call(f); });
		FlowNode_tB2A4149C7266AEFD52FBF24288189213BABFE3DB* L_7 = ___node0;
		U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* L_8 = V_0;
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_9 = (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*)il2cpp_codegen_object_new(FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CRegisterPortsU3Eb__0_m1415CF1F7A1B54940CBCF9E39567B647109E04E4_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1* L_10;
		L_10 = FlowNode_AddFlowInput_mA0BC2BD46D1E1C6FC93DF0EFC8D203DBA5AD7DAD(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.ReflectedActionNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedActionNode__ctor_m35633DCB12D5EC3DF38634190892889D5BCB680B (ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744* __this, const RuntimeMethod* method) 
{
	{
		ReflectedMethodNode__ctor_m296734EFDDCC1418B4A22CE1F1A42DC2A7A83DAD(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Nodes.Legacy.ReflectedActionNode/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m2C66EB3B657A69F6CAB85C558FAC5060F196FC38 (U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FlowCanvas.Nodes.Legacy.ReflectedActionNode/<>c__DisplayClass2_0::<RegisterPorts>b__0(FlowCanvas.Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CRegisterPortsU3Eb__0_m1415CF1F7A1B54940CBCF9E39567B647109E04E4 (U3CU3Ec__DisplayClass2_0_tCF5F2D5CCF8A9BECFD197CFCE1EF28D19D4ED001* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) 
{
	{
		// node.AddFlowInput(" ", (f) => { Call(); o.Call(f); });
		ReflectedActionNode_t204AC0E8967011DA686AA3A9A0E92A78153A6744* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		ReflectedActionNode_Call_mDD00D2CB42ECC35D7C627ABCE4BE90369767C0D2(L_0, NULL);
		// node.AddFlowInput(" ", (f) => { Call(); o.Call(f); });
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_1 = __this->___o_1;
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_2 = ___f0;
		NullCheck(L_1);
		FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479(L_1, L_2, NULL);
		// node.AddFlowInput(" ", (f) => { Call(); o.Call(f); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object FlowCanvas.Macros.Macro::OnDerivedDataSerialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Macro_OnDerivedDataSerialization_m389E3B371805ABBA46E2E8C1D174E01794340219 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var data = new DerivedSerializationData();
		DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412* L_0 = (DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412*)il2cpp_codegen_object_new(DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DerivedSerializationData__ctor_mA190FC517D96C1CB2B3C6B2B5D5D382BBE33D245(L_0, NULL);
		// data.inputDefinitions = this.inputDefinitions;
		DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412* L_1 = L_0;
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_2 = __this->___inputDefinitions_32;
		NullCheck(L_1);
		L_1->___inputDefinitions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___inputDefinitions_0), (void*)L_2);
		// data.outputDefinitions = this.outputDefinitions;
		DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412* L_3 = L_1;
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_4 = __this->___outputDefinitions_33;
		NullCheck(L_3);
		L_3->___outputDefinitions_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___outputDefinitions_1), (void*)L_4);
		// return data;
		return L_3;
	}
}
// System.Void FlowCanvas.Macros.Macro::OnDerivedDataDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Macro_OnDerivedDataDeserialization_m993896E4F4D3B8E3EAA71751F5A253DCD245F7F0 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, RuntimeObject* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( data is DerivedSerializationData ) {
		RuntimeObject* L_0 = ___data0;
		if (!((DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412*)IsInstClass((RuntimeObject*)L_0, DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		// this.inputDefinitions = ( (DerivedSerializationData)data ).inputDefinitions;
		RuntimeObject* L_1 = ___data0;
		NullCheck(((DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412*)CastclassClass((RuntimeObject*)L_1, DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var)));
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_2 = ((DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412*)CastclassClass((RuntimeObject*)L_1, DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var))->___inputDefinitions_0;
		__this->___inputDefinitions_32 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDefinitions_32), (void*)L_2);
		// this.outputDefinitions = ( (DerivedSerializationData)data ).outputDefinitions;
		RuntimeObject* L_3 = ___data0;
		NullCheck(((DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412*)CastclassClass((RuntimeObject*)L_3, DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var)));
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_4 = ((DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412*)CastclassClass((RuntimeObject*)L_3, DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412_il2cpp_TypeInfo_var))->___outputDefinitions_1;
		__this->___outputDefinitions_33 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputDefinitions_33), (void*)L_4);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean FlowCanvas.Macros.Macro::get_allowBlackboardOverrides()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Macro_get_allowBlackboardOverrides_m886CB74276A72B151EDC07DF0A36D0190A63FB14 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) 
{
	{
		// public override bool allowBlackboardOverrides => false;
		return (bool)0;
	}
}
// FlowCanvas.Macros.MacroInputNode FlowCanvas.Macros.Macro::get_entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* Macro_get_entry_m2406BA51EA1F96D42ABA3BAA5E31FD8C47105634 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m60AF9EDFD3D5D2CDA1CE91CD790FDDFF6B3DD0DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6D9929A29574CB9F49ACF6951E1389A6CA7C9798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_AddNode_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6DA3127C848855E2093BDB809D3BCBDA6106320D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( _entry == null ) {
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_0 = __this->____entry_38;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		// _entry = allNodes.OfType<MacroInputNode>().FirstOrDefault();
		List_1_t90487A8EA186417AA0A6F2B22B58D1BAE3334437* L_1;
		L_1 = Graph_get_allNodes_m16F2C73330C293E5724E04C1185FAA62C74BDAF6(__this, NULL);
		RuntimeObject* L_2;
		L_2 = Enumerable_OfType_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6D9929A29574CB9F49ACF6951E1389A6CA7C9798(L_1, Enumerable_OfType_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6D9929A29574CB9F49ACF6951E1389A6CA7C9798_RuntimeMethod_var);
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_3;
		L_3 = Enumerable_FirstOrDefault_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m60AF9EDFD3D5D2CDA1CE91CD790FDDFF6B3DD0DE(L_2, Enumerable_FirstOrDefault_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m60AF9EDFD3D5D2CDA1CE91CD790FDDFF6B3DD0DE_RuntimeMethod_var);
		__this->____entry_38 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entry_38), (void*)L_3);
		// if ( _entry == null ) {
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_4 = __this->____entry_38;
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		// _entry = AddNode<MacroInputNode>(new Vector2(-translation.x + 200, -translation.y + 200));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Graph_get_translation_m6954B16766565C99C2C119C82DEE98D58C05B0EC(__this, NULL);
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Graph_get_translation_m6954B16766565C99C2C119C82DEE98D58C05B0EC(__this, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)il2cpp_codegen_add(((-L_6)), (200.0f))), ((float)il2cpp_codegen_add(((-L_8)), (200.0f))), /*hidden argument*/NULL);
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_10;
		L_10 = Graph_AddNode_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6DA3127C848855E2093BDB809D3BCBDA6106320D(__this, L_9, Graph_AddNode_TisMacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553_m6DA3127C848855E2093BDB809D3BCBDA6106320D_RuntimeMethod_var);
		__this->____entry_38 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entry_38), (void*)L_10);
	}

IL_005b:
	{
		// return _entry;
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_11 = __this->____entry_38;
		return L_11;
	}
}
// FlowCanvas.Macros.MacroOutputNode FlowCanvas.Macros.Macro::get_exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* Macro_get_exit_m92E55C9E49117A52EA957273E9498E23B171F271 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m3B43C6ABEB26C48387D1B0BD85BF284EC2ED08FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m6CBB88ACC26C645D1A196FD3996503B0DDB8B3B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_AddNode_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_mC955FC30D724C926D9366C4AB1D1461FE61368DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( _exit == null ) {
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_0 = __this->____exit_39;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		// _exit = allNodes.OfType<MacroOutputNode>().FirstOrDefault();
		List_1_t90487A8EA186417AA0A6F2B22B58D1BAE3334437* L_1;
		L_1 = Graph_get_allNodes_m16F2C73330C293E5724E04C1185FAA62C74BDAF6(__this, NULL);
		RuntimeObject* L_2;
		L_2 = Enumerable_OfType_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m6CBB88ACC26C645D1A196FD3996503B0DDB8B3B3(L_1, Enumerable_OfType_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m6CBB88ACC26C645D1A196FD3996503B0DDB8B3B3_RuntimeMethod_var);
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_3;
		L_3 = Enumerable_FirstOrDefault_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m3B43C6ABEB26C48387D1B0BD85BF284EC2ED08FB(L_2, Enumerable_FirstOrDefault_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_m3B43C6ABEB26C48387D1B0BD85BF284EC2ED08FB_RuntimeMethod_var);
		__this->____exit_39 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____exit_39), (void*)L_3);
		// if ( _exit == null ) {
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_4 = __this->____exit_39;
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		// _exit = AddNode<MacroOutputNode>(new Vector2(-translation.x + 600, -translation.y + 200));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Graph_get_translation_m6954B16766565C99C2C119C82DEE98D58C05B0EC(__this, NULL);
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Graph_get_translation_m6954B16766565C99C2C119C82DEE98D58C05B0EC(__this, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)il2cpp_codegen_add(((-L_6)), (600.0f))), ((float)il2cpp_codegen_add(((-L_8)), (200.0f))), /*hidden argument*/NULL);
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_10;
		L_10 = Graph_AddNode_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_mC955FC30D724C926D9366C4AB1D1461FE61368DD(__this, L_9, Graph_AddNode_TisMacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F_mC955FC30D724C926D9366C4AB1D1461FE61368DD_RuntimeMethod_var);
		__this->____exit_39 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____exit_39), (void*)L_10);
	}

IL_005b:
	{
		// return _exit;
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_11 = __this->____exit_39;
		return L_11;
	}
}
// System.Void FlowCanvas.Macros.Macro::OnGraphValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Macro_OnGraphValidate_m26DDD3D7BA98A6C55E77A78EB75CB69BF6205C38 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) 
{
	{
		// base.OnGraphValidate();
		Graph_OnGraphValidate_m691EFA86C0ECD3DF8A5560D2BD4105DED8D28A17(__this, NULL);
		// _entry = null;
		__this->____entry_38 = (MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entry_38), (void*)(MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553*)NULL);
		// _exit = null;
		__this->____exit_39 = (MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____exit_39), (void*)(MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F*)NULL);
		// _entry = entry;
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_0;
		L_0 = Macro_get_entry_m2406BA51EA1F96D42ABA3BAA5E31FD8C47105634(__this, NULL);
		__this->____entry_38 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entry_38), (void*)L_0);
		// _exit = exit;
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_1;
		L_1 = Macro_get_exit_m92E55C9E49117A52EA957273E9498E23B171F271(__this, NULL);
		__this->____exit_39 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____exit_39), (void*)L_1);
		// }
		return;
	}
}
// FlowCanvas.Port FlowCanvas.Macros.Macro::AddInputDefinition(ParadoxNotion.DynamicParameterDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* Macro_AddInputDefinition_m97C927E6F88C3FFE4840D388D2651A2F7AF08B5B (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CAddInputDefinitionU3Eb__0_m60B5DE650C93B266163DA981BA6AAD7990D59040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* L_0 = (U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_mC1248AA0B04104263D2AC7FF9616F1B0C40E9D2E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* L_1 = V_0;
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_2 = ___def0;
		NullCheck(L_1);
		L_1->___def_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___def_0), (void*)L_2);
		// if ( inputDefinitions.Find(d => d.ID == def.ID) == null ) {
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_3 = __this->___inputDefinitions_32;
		U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* L_4 = V_0;
		Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61* L_5 = (Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61*)il2cpp_codegen_object_new(Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m14DA829CD126599386E4512CFA59FE271A9FC768(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CAddInputDefinitionU3Eb__0_m60B5DE650C93B266163DA981BA6AAD7990D59040_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_6;
		L_6 = List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7(L_3, L_5, List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		// inputDefinitions.Add(def);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_7 = __this->___inputDefinitions_32;
		U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* L_8 = V_0;
		NullCheck(L_8);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_9 = L_8->___def_0;
		NullCheck(L_7);
		List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_inline(L_7, L_9, List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_RuntimeMethod_var);
		// entry.GatherPorts();
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_10;
		L_10 = Macro_get_entry_m2406BA51EA1F96D42ABA3BAA5E31FD8C47105634(__this, NULL);
		NullCheck(L_10);
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(L_10, NULL);
		// return entry.GetOutputPort(def.ID);
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_11;
		L_11 = Macro_get_entry_m2406BA51EA1F96D42ABA3BAA5E31FD8C47105634(__this, NULL);
		U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* L_12 = V_0;
		NullCheck(L_12);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_13 = L_12->___def_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_13, NULL);
		NullCheck(L_11);
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_15;
		L_15 = FlowNode_GetOutputPort_m235AC2F5E22870B04BC7874074C3D221BE0C82F4(L_11, L_14, NULL);
		return L_15;
	}

IL_0059:
	{
		// return null;
		return (Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD*)NULL;
	}
}
// FlowCanvas.Port FlowCanvas.Macros.Macro::AddOutputDefinition(ParadoxNotion.DynamicParameterDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* Macro_AddOutputDefinition_mF543954ED5CDE5D47E1DE22CAC495E2DDD3CE8E2 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___def0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddOutputDefinitionU3Eb__0_mB460FFF87A7A8960341D4EA190DF2C32C4B1FE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* L_0 = (U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass19_0__ctor_m4245C781425D5C7298F4F0D61FA7D5B125F6C6DF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* L_1 = V_0;
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_2 = ___def0;
		NullCheck(L_1);
		L_1->___def_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___def_0), (void*)L_2);
		// if ( outputDefinitions.Find(d => d.ID == def.ID) == null ) {
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_3 = __this->___outputDefinitions_33;
		U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* L_4 = V_0;
		Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61* L_5 = (Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61*)il2cpp_codegen_object_new(Predicate_1_tC4EA323DB361C3D3F3890DBFA5E25F356E61EF61_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m14DA829CD126599386E4512CFA59FE271A9FC768(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CAddOutputDefinitionU3Eb__0_mB460FFF87A7A8960341D4EA190DF2C32C4B1FE0B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_6;
		L_6 = List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7(L_3, L_5, List_1_Find_mB1538B6FFDCEE81121AC08AB272A5C9A9FB28EE7_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		// outputDefinitions.Add(def);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_7 = __this->___outputDefinitions_33;
		U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* L_8 = V_0;
		NullCheck(L_8);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_9 = L_8->___def_0;
		NullCheck(L_7);
		List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_inline(L_7, L_9, List_1_Add_m3469775F16BCC697D49943D7A6745CFB7A080ED5_RuntimeMethod_var);
		// exit.GatherPorts();
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_10;
		L_10 = Macro_get_exit_m92E55C9E49117A52EA957273E9498E23B171F271(__this, NULL);
		NullCheck(L_10);
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(L_10, NULL);
		// return exit.GetInputPort(def.ID);
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_11;
		L_11 = Macro_get_exit_m92E55C9E49117A52EA957273E9498E23B171F271(__this, NULL);
		U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* L_12 = V_0;
		NullCheck(L_12);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_13 = L_12->___def_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_13, NULL);
		NullCheck(L_11);
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_15;
		L_15 = FlowNode_GetInputPort_m27A4555C9EA9DEEFFD851848A97BDCE0AA55B8EC(L_11, L_14, NULL);
		return L_15;
	}

IL_0059:
	{
		// return null;
		return (Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD*)NULL;
	}
}
// System.Void FlowCanvas.Macros.Macro::AddExamplePorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Macro_AddExamplePorts_mDC8A10DF789C207469E1698DC97ADB25BD33B50E (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		s_Il2CppMethodInitialized = true;
	}
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* V_0 = NULL;
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* V_1 = NULL;
	Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* V_2 = NULL;
	{
		// if ( inputDefinitions.Count == 0 && outputDefinitions.Count == 0 ) {
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_0 = __this->___inputDefinitions_32;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_inline(L_0, List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0060;
		}
	}
	{
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_2 = __this->___outputDefinitions_33;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_inline(L_2, List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0060;
		}
	}
	{
		// var defIn = new DynamicParameterDefinition("In", typeof(Flow));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_6 = (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874*)il2cpp_codegen_object_new(DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DynamicParameterDefinition__ctor_m771C37B6FFAE999691AC2C538C35097381C0CDDE(L_6, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, L_5, NULL);
		V_0 = L_6;
		// var defOut = new DynamicParameterDefinition("Out", typeof(Flow));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_9 = (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874*)il2cpp_codegen_object_new(DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		DynamicParameterDefinition__ctor_m771C37B6FFAE999691AC2C538C35097381C0CDDE(L_9, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, L_8, NULL);
		V_1 = L_9;
		// var source = AddInputDefinition(defIn);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_10 = V_0;
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_11;
		L_11 = Macro_AddInputDefinition_m97C927E6F88C3FFE4840D388D2651A2F7AF08B5B(__this, L_10, NULL);
		// var target = AddOutputDefinition(defOut);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_12 = V_1;
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_13;
		L_13 = Macro_AddOutputDefinition_mF543954ED5CDE5D47E1DE22CAC495E2DDD3CE8E2(__this, L_12, NULL);
		V_2 = L_13;
		// BinderConnection.Create(source, target);
		Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* L_14 = V_2;
		BinderConnection_t338E14B976C2FDEC793FEC61EF1B9A51972991E1* L_15;
		L_15 = BinderConnection_Create_m841C82E0A46F3B7ABBDDAC183483FF1059B1D01D(L_11, L_14, NULL);
		// Validate();
		Graph_Validate_m577260FA4A5EE3D674804D2520EA259B98B01884(__this, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Macros.Macro::CallFlowInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Macro_CallFlowInput_m3D47FA609A533937E7D8C8F9E1A5E06FD6201627 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisDynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_mEBBCEE999A57236EDA769814C68D9F6E47D4A600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t790E3300CD054164B42266D675076FECE295D2F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CCallFlowInputU3Eb__0_m47979CDE7F43B015ED238CDB63C940656F90AFD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509* V_0 = NULL;
	DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* V_1 = NULL;
	Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509* L_0 = (U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass22_0__ctor_m18009DA13FFF71A8DB0F22D36FCAE8FAA4EFE5F0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509* L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// var def = inputDefinitions.FirstOrDefault(d => d.name == name && d.type == typeof(Flow));
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_3 = __this->___inputDefinitions_32;
		U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509* L_4 = V_0;
		Func_2_t790E3300CD054164B42266D675076FECE295D2F7* L_5 = (Func_2_t790E3300CD054164B42266D675076FECE295D2F7*)il2cpp_codegen_object_new(Func_2_t790E3300CD054164B42266D675076FECE295D2F7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mCBBF654153026F3608B89BF09BF9922E7085DDD4(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3CCallFlowInputU3Eb__0_m47979CDE7F43B015ED238CDB63C940656F90AFD3_RuntimeMethod_var), NULL);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_6;
		L_6 = Enumerable_FirstOrDefault_TisDynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_mEBBCEE999A57236EDA769814C68D9F6E47D4A600(L_3, L_5, Enumerable_FirstOrDefault_TisDynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874_mEBBCEE999A57236EDA769814C68D9F6E47D4A600_RuntimeMethod_var);
		V_1 = L_6;
		// if ( def == null ) {
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_7 = V_1;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// entryActionMap[def.ID](new Flow());
		Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* L_8 = __this->___entryActionMap_34;
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_9, NULL);
		NullCheck(L_8);
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_11;
		L_11 = Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469(L_8, L_10, Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_2), sizeof(Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734));
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_12 = V_2;
		NullCheck(L_11);
		FlowHandler_Invoke_mF97D2BEF129CB78CED178ED67679502C9F40C2AA_inline(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void FlowCanvas.Macros.Macro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Macro__ctor_m191BEC67B1D09BBE2F1E0A9C1605E4913C341DE1 (Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m71334EBE38F3F7E925FF57332D93988AA91BD290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD379A7A7FC86B5A76B1F743AF803C62292EF5F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED4F73CA4066DDCEDD35781D6C1CDBA6FADD0370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public List<DynamicParameterDefinition> inputDefinitions = new List<DynamicParameterDefinition>();
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_0 = (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1*)il2cpp_codegen_object_new(List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED4F73CA4066DDCEDD35781D6C1CDBA6FADD0370(L_0, List_1__ctor_mED4F73CA4066DDCEDD35781D6C1CDBA6FADD0370_RuntimeMethod_var);
		__this->___inputDefinitions_32 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDefinitions_32), (void*)L_0);
		// [SerializeField] public List<DynamicParameterDefinition> outputDefinitions = new List<DynamicParameterDefinition>();
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_1 = (List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1*)il2cpp_codegen_object_new(List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mED4F73CA4066DDCEDD35781D6C1CDBA6FADD0370(L_1, List_1__ctor_mED4F73CA4066DDCEDD35781D6C1CDBA6FADD0370_RuntimeMethod_var);
		__this->___outputDefinitions_33 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputDefinitions_33), (void*)L_1);
		// [NonSerialized] public Dictionary<string, FlowHandler> entryActionMap = new Dictionary<string, FlowHandler>(StringComparer.Ordinal);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2;
		L_2 = StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline(NULL);
		Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* L_3 = (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA*)il2cpp_codegen_object_new(Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m71334EBE38F3F7E925FF57332D93988AA91BD290(L_3, L_2, Dictionary_2__ctor_m71334EBE38F3F7E925FF57332D93988AA91BD290_RuntimeMethod_var);
		__this->___entryActionMap_34 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entryActionMap_34), (void*)L_3);
		// [NonSerialized] public Dictionary<string, FlowHandler> exitActionMap = new Dictionary<string, FlowHandler>(StringComparer.Ordinal);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_4;
		L_4 = StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline(NULL);
		Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* L_5 = (Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA*)il2cpp_codegen_object_new(Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m71334EBE38F3F7E925FF57332D93988AA91BD290(L_5, L_4, Dictionary_2__ctor_m71334EBE38F3F7E925FF57332D93988AA91BD290_RuntimeMethod_var);
		__this->___exitActionMap_35 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitActionMap_35), (void*)L_5);
		// [NonSerialized] public Dictionary<string, ValueHandlerObject> entryFunctionMap = new Dictionary<string, ValueHandlerObject>(StringComparer.Ordinal);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_6;
		L_6 = StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline(NULL);
		Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* L_7 = (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE*)il2cpp_codegen_object_new(Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_mCD379A7A7FC86B5A76B1F743AF803C62292EF5F5(L_7, L_6, Dictionary_2__ctor_mCD379A7A7FC86B5A76B1F743AF803C62292EF5F5_RuntimeMethod_var);
		__this->___entryFunctionMap_36 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entryFunctionMap_36), (void*)L_7);
		// [NonSerialized] public Dictionary<string, ValueHandlerObject> exitFunctionMap = new Dictionary<string, ValueHandlerObject>(StringComparer.Ordinal);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_8;
		L_8 = StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline(NULL);
		Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* L_9 = (Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE*)il2cpp_codegen_object_new(Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_mCD379A7A7FC86B5A76B1F743AF803C62292EF5F5(L_9, L_8, Dictionary_2__ctor_mCD379A7A7FC86B5A76B1F743AF803C62292EF5F5_RuntimeMethod_var);
		__this->___exitFunctionMap_37 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitFunctionMap_37), (void*)L_9);
		FlowScriptBase__ctor_m9C69BB742510A9C748FCDAEC577E81FCE16A546D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.Macro/DerivedSerializationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DerivedSerializationData__ctor_mA190FC517D96C1CB2B3C6B2B5D5D382BBE33D245 (DerivedSerializationData_t0DB631730CA5D5AA0A442A074E82CF46DB37A412* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.Macro/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mC1248AA0B04104263D2AC7FF9616F1B0C40E9D2E (U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FlowCanvas.Macros.Macro/<>c__DisplayClass18_0::<AddInputDefinition>b__0(ParadoxNotion.DynamicParameterDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CAddInputDefinitionU3Eb__0_m60B5DE650C93B266163DA981BA6AAD7990D59040 (U3CU3Ec__DisplayClass18_0_t89327A5E9270553EC8B817433C94657D124ED12F* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___d0, const RuntimeMethod* method) 
{
	{
		// if ( inputDefinitions.Find(d => d.ID == def.ID) == null ) {
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_0, NULL);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_2 = __this->___def_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.Macro/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m4245C781425D5C7298F4F0D61FA7D5B125F6C6DF (U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FlowCanvas.Macros.Macro/<>c__DisplayClass19_0::<AddOutputDefinition>b__0(ParadoxNotion.DynamicParameterDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CAddOutputDefinitionU3Eb__0_mB460FFF87A7A8960341D4EA190DF2C32C4B1FE0B (U3CU3Ec__DisplayClass19_0_t7F3C8DA6B64DA5807211D9D696E4BC170D8FEB1C* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___d0, const RuntimeMethod* method) 
{
	{
		// if ( outputDefinitions.Find(d => d.ID == def.ID) == null ) {
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_0, NULL);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_2 = __this->___def_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.Macro/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m18009DA13FFF71A8DB0F22D36FCAE8FAA4EFE5F0 (U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FlowCanvas.Macros.Macro/<>c__DisplayClass22_0::<CallFlowInput>b__0(ParadoxNotion.DynamicParameterDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass22_0_U3CCallFlowInputU3Eb__0_m47979CDE7F43B015ED238CDB63C940656F90AFD3 (U3CU3Ec__DisplayClass22_0_t598ADF7C87B2255B76CB849BD0B80010B00E0509* __this, DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var def = inputDefinitions.FirstOrDefault(d => d.name == name && d.type == typeof(Flow));
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_0, NULL);
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_4 = ___d0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_5, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ParadoxNotion.Alignment2x2 FlowCanvas.Macros.MacroInputNode::get_iconAlignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacroInputNode_get_iconAlignment_m22FE6F0402DADA8E871EF116BD26526331B1EE39 (MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* __this, const RuntimeMethod* method) 
{
	{
		// get { return ParadoxNotion.Alignment2x2.Default; }
		return (int32_t)(0);
	}
}
// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroInputNode::get_macro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E (MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return graph as Macro; }
		Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* L_0;
		L_0 = Node_get_graph_mB21F59A8B53310BF25DE6085397701DB23CC3A08_inline(__this, NULL);
		return ((Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08*)IsInstClass((RuntimeObject*)L_0, Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var));
	}
}
// System.Void FlowCanvas.Macros.MacroInputNode::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroInputNode_RegisterPorts_m4D92ACFBA914220D504E28358D05BDF77DD06144 (MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m394D05632CE9405AE110AF85340B22A35A8F303E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* V_1 = NULL;
	{
		// if ( macro == null || macro.inputDefinitions == null ) { return; }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0;
		L_0 = MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2;
		L_2 = MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E(__this, NULL);
		NullCheck(L_2);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_3 = L_2->___inputDefinitions_32;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// if ( macro == null || macro.inputDefinitions == null ) { return; }
		return;
	}

IL_001c:
	{
		// for ( var i = 0; i < macro.inputDefinitions.Count; i++ ) {
		V_0 = 0;
		goto IL_00df;
	}

IL_0023:
	{
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_4 = (U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass4_0__ctor_m46FE2B6D8153BB05137FB7D310C966A2CC641616(L_4, NULL);
		V_1 = L_4;
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_5 = V_1;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_1), (void*)__this);
		// var def = macro.inputDefinitions[i];
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_6 = V_1;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_7;
		L_7 = MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E(__this, NULL);
		NullCheck(L_7);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_8 = L_7->___inputDefinitions_32;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_10;
		L_10 = List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD(L_8, L_9, List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___def_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___def_0), (void*)L_10);
		// if ( def.type == typeof(Flow) ) {
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_11 = V_1;
		NullCheck(L_11);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_12 = L_11->___def_0;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		// macro.entryActionMap[def.ID] = AddFlowOutput(def.name, def.ID).Call;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_17;
		L_17 = MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E(__this, NULL);
		NullCheck(L_17);
		Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* L_18 = L_17->___entryActionMap_34;
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_19 = V_1;
		NullCheck(L_19);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_20 = L_19->___def_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_20, NULL);
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_22 = V_1;
		NullCheck(L_22);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_23 = L_22->___def_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_23, NULL);
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_25 = V_1;
		NullCheck(L_25);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_26 = L_25->___def_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_26, NULL);
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_28;
		L_28 = FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022(__this, L_24, L_27, NULL);
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_29 = (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*)il2cpp_codegen_object_new(FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272(L_29, L_28, (intptr_t)((void*)FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805(L_18, L_21, L_29, Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805_RuntimeMethod_var);
		goto IL_00db;
	}

IL_00a7:
	{
		// AddValueOutput(def.name, def.type, () => { return macro.entryFunctionMap[def.ID](); }, def.ID);
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_30 = V_1;
		NullCheck(L_30);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_31 = L_30->___def_0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_31, NULL);
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_33 = V_1;
		NullCheck(L_33);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_34 = L_33->___def_0;
		NullCheck(L_34);
		Type_t* L_35;
		L_35 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_34, NULL);
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_36 = V_1;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_37 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m394D05632CE9405AE110AF85340B22A35A8F303E_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* L_38 = V_1;
		NullCheck(L_38);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_39 = L_38->___def_0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_39, NULL);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_41;
		L_41 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(__this, L_32, L_35, L_37, L_40, NULL);
	}

IL_00db:
	{
		// for ( var i = 0; i < macro.inputDefinitions.Count; i++ ) {
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00df:
	{
		// for ( var i = 0; i < macro.inputDefinitions.Count; i++ ) {
		int32_t L_43 = V_0;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_44;
		L_44 = MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E(__this, NULL);
		NullCheck(L_44);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_45 = L_44->___inputDefinitions_32;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_inline(L_45, List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		if ((((int32_t)L_43) < ((int32_t)L_46)))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Macros.MacroInputNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroInputNode__ctor_m0AC11391AC0605B1F7373999D5527B8279D2B4BA (MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.MacroInputNode/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m46FE2B6D8153BB05137FB7D310C966A2CC641616 (U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Macros.MacroInputNode/<>c__DisplayClass4_0::<RegisterPorts>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m394D05632CE9405AE110AF85340B22A35A8F303E (U3CU3Ec__DisplayClass4_0_t9AABFA166E9B3104749F7811679ADB58DFE6C71F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddValueOutput(def.name, def.type, () => { return macro.entryFunctionMap[def.ID](); }, def.ID);
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_1;
		L_1 = MacroInputNode_get_macro_mA63383D7D240E4556866EA08B52D3904474E087E(L_0, NULL);
		NullCheck(L_1);
		Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* L_2 = L_1->___entryFunctionMap_36;
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_3 = __this->___def_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_3, NULL);
		NullCheck(L_2);
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_5;
		L_5 = Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0(L_2, L_4, Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0_RuntimeMethod_var);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ValueHandlerObject_Invoke_m637D0C89810D53D959AE8F83E4C41465E37B4B04_inline(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String FlowCanvas.Macros.MacroNodeWrapper::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacroNodeWrapper_get_name_mA10584BADC9DE57CB4D0B28B3DD0B5E88370DC57 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06641D721A187EEF2162C9B440C604A760D59916);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string name { get { return macro != null ? macro.name : "No Macro"; } }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0;
		L_0 = MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return _stringLiteral06641D721A187EEF2162C9B440C604A760D59916;
	}

IL_0014:
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2;
		L_2 = MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		return L_3;
	}
}
// System.String FlowCanvas.Macros.MacroNodeWrapper::get_description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacroNodeWrapper_get_description_m62F8C4A9042EDF055483E41531B0432EB7EF5AFF (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string description { get { return _macro != null && !string.IsNullOrEmpty(_macro.comments) ? _macro.comments : base.description; } }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0 = __this->____macro_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2 = __this->____macro_20;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Graph_get_comments_m737C72338C645C09CD14759D92132E007639D46C(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}

IL_0020:
	{
		String_t* L_5;
		L_5 = Node_get_description_mCC69A5C6CE184956EFF11FC431E24BEB328C6401(__this, NULL);
		return L_5;
	}

IL_0027:
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_6 = __this->____macro_20;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Graph_get_comments_m737C72338C645C09CD14759D92132E007639D46C(L_6, NULL);
		return L_7;
	}
}
// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroNodeWrapper::get_macro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _macro; }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0 = __this->____macro_20;
		return L_0;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::set_macro(FlowCanvas.Macros.Macro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_set_macro_mF37243571E7271E484CA3573BB0C929DDF41EE83 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( _macro != value ) {
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0 = __this->____macro_20;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// _macro = value;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_3 = ___value0;
		__this->____macro_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____macro_20), (void*)L_3);
		// if ( value != null ) { GatherPorts(); }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_4 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// if ( value != null ) { GatherPorts(); }
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// NodeCanvas.Framework.Graph FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.get_subGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_get_subGraph_mC5F086ECAA1EDC03A6D9EBE7F852395AE32A05E4 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	{
		// Graph IGraphAssignable.subGraph { get { return macro; } set { macro = (Macro)value; } }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0;
		L_0 = MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline(__this, NULL);
		return L_0;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.set_subGraph(NodeCanvas.Framework.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_set_subGraph_mB584DABE92DABC6EA8E79F9D206ED81FA52A62EC (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graph IGraphAssignable.subGraph { get { return macro; } set { macro = (Macro)value; } }
		Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* L_0 = ___value0;
		MacroNodeWrapper_set_macro_mF37243571E7271E484CA3573BB0C929DDF41EE83(__this, ((Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08*)CastclassClass((RuntimeObject*)L_0, Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var)), NULL);
		// Graph IGraphAssignable.subGraph { get { return macro; } set { macro = (Macro)value; } }
		return;
	}
}
// NodeCanvas.Framework.Graph FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.get_currentInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_get_currentInstance_m42D4F6A959FD148C0FEB830552F1FAE0EF4540F6 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	{
		// Graph IGraphAssignable.currentInstance { get { return _currentInstance; } set { _currentInstance = (Macro)value; } }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0 = __this->____currentInstance_21;
		return L_0;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.set_currentInstance(NodeCanvas.Framework.Graph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_set_currentInstance_m6AB7133EA070465251BDBDD1CD23E1A759983C40 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graph IGraphAssignable.currentInstance { get { return _currentInstance; } set { _currentInstance = (Macro)value; } }
		Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* L_0 = ___value0;
		__this->____currentInstance_21 = ((Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08*)CastclassClass((RuntimeObject*)L_0, Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentInstance_21), (void*)((Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08*)CastclassClass((RuntimeObject*)L_0, Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var)));
		// Graph IGraphAssignable.currentInstance { get { return _currentInstance; } set { _currentInstance = (Macro)value; } }
		return;
	}
}
// System.Collections.Generic.List`1<NodeCanvas.Framework.Internal.BBMappingParameter> FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.get_variablesMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t624B7FC2AE145EBF7BB7EE422EF3049A2BBD744B* MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_get_variablesMap_m2A8ED9CA1A20AA7781B3A7DC5ACB93A1EABFFED4 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	{
		// List<NodeCanvas.Framework.Internal.BBMappingParameter> IGraphAssignable.variablesMap { get { return null; } set { /* ... */ } }
		return (List_1_t624B7FC2AE145EBF7BB7EE422EF3049A2BBD744B*)NULL;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.set_variablesMap(System.Collections.Generic.List`1<NodeCanvas.Framework.Internal.BBMappingParameter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_set_variablesMap_m165C92F3C4B0980E1147E1B978250C840E4EB064 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, List_1_t624B7FC2AE145EBF7BB7EE422EF3049A2BBD744B* ___value0, const RuntimeMethod* method) 
{
	{
		// List<NodeCanvas.Framework.Internal.BBMappingParameter> IGraphAssignable.variablesMap { get { return null; } set { /* ... */ } }
		return;
	}
}
// NodeCanvas.Framework.BBParameter FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.get_subGraphParameter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BBParameter_tD717AF8560E573DF3DA925034F257F669CDDBA60* MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_get_subGraphParameter_mB2F7584CE39DCC5A96269144D9A26CFE46C6A115 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	{
		// BBParameter IGraphAssignable.subGraphParameter => null;
		return (BBParameter_tD717AF8560E573DF3DA925034F257F669CDDBA60*)NULL;
	}
}
// System.Collections.Generic.Dictionary`2<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph> FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.get_instances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA* MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_get_instances_mDB2A4545B693DD45109B1805911547EC62B7D22A (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC309D921A9B6D5BD89BD95BC8A944368B441228B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEF1EA5784E50B8BFDDA6EF2A8067B3B1C28586BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var dict = new Dictionary<Graph, Graph>();
		Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA* L_0 = (Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA*)il2cpp_codegen_object_new(Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC309D921A9B6D5BD89BD95BC8A944368B441228B(L_0, Dictionary_2__ctor_mC309D921A9B6D5BD89BD95BC8A944368B441228B_RuntimeMethod_var);
		// dict[_currentInstance] = _currentInstance;
		Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA* L_1 = L_0;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2 = __this->____currentInstance_21;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_3 = __this->____currentInstance_21;
		NullCheck(L_1);
		Dictionary_2_set_Item_mEF1EA5784E50B8BFDDA6EF2A8067B3B1C28586BF(L_1, L_2, L_3, Dictionary_2_set_Item_mEF1EA5784E50B8BFDDA6EF2A8067B3B1C28586BF_RuntimeMethod_var);
		// return dict;
		return L_1;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IGraphAssignable.set_instances(System.Collections.Generic.Dictionary`2<NodeCanvas.Framework.Graph,NodeCanvas.Framework.Graph>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_set_instances_m5C8DFF2E149DFAF59CC0914959E0AC849CA5D9ED (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, Dictionary_2_t53340DA94CD089F96CBE1DAF7C4D853B6AF205FA* ___value0, const RuntimeMethod* method) 
{
	{
		// set { throw new System.Exception("Should have not been called"); }
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D578E7799F5D7E7290B821DAB5BEF207E9A220A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MacroNodeWrapper_NodeCanvas_Framework_IGraphAssignable_set_instances_m5C8DFF2E149DFAF59CC0914959E0AC849CA5D9ED_RuntimeMethod_var)));
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_MakeInstance_m524585D30DD77F08BD1B996139733E4D223A0201 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_Clone_TisMacro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_m37C28E2E62B9C80BBEB14D86AC102EEF05B1B226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( _currentInstance == null && macro != null ) {
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0 = __this->____currentInstance_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2;
		L_2 = MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// _currentInstance = Graph.Clone<Macro>(macro, this.graph);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_4;
		L_4 = MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline(__this, NULL);
		Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* L_5;
		L_5 = Node_get_graph_mB21F59A8B53310BF25DE6085397701DB23CC3A08_inline(__this, NULL);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_6;
		L_6 = Graph_Clone_TisMacro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_m37C28E2E62B9C80BBEB14D86AC102EEF05B1B226(L_4, L_5, Graph_Clone_TisMacro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_m37C28E2E62B9C80BBEB14D86AC102EEF05B1B226_RuntimeMethod_var);
		__this->____currentInstance_21 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentInstance_21), (void*)L_6);
		// _macro = _currentInstance;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_7 = __this->____currentInstance_21;
		__this->____macro_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____macro_20), (void*)L_7);
		// GatherPorts();
		FlowNode_GatherPorts_mB253783B0ED5A3D7CD6B29C51BE1DD5A1B3126FF(__this, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::NodeCanvas.Framework.IUpdatable.Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_NodeCanvas_Framework_IUpdatable_Update_m789D00F841C5DA7E464046F72820FB0AF3B4AD34 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( _currentInstance != null ) {
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0 = __this->____currentInstance_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// _currentInstance.UpdateGraph(this.graph.deltaTime);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2 = __this->____currentInstance_21;
		Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* L_3;
		L_3 = Node_get_graph_mB21F59A8B53310BF25DE6085397701DB23CC3A08_inline(__this, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = Graph_get_deltaTime_mE54EE3C1B054C11AF60C7F4785F96DFF6BC3B6FC_inline(L_3, NULL);
		NullCheck(L_2);
		Graph_UpdateGraph_m8CE1931B8D3276FE54102A8BA479FDECF366AAF7(L_2, L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper_RegisterPorts_mBB441708CEA06E9EA13D90A05428F432495287B1 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_1_U3CRegisterPortsU3Eb__0_m52CCBF3BF41DEE1CFB138D9B30B7C435CA755117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_2_U3CRegisterPortsU3Eb__1_m7AFA69750EAA3557EC67A1BB8FD2C5CD41CA0595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* V_2 = NULL;
	int32_t V_3 = 0;
	U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* V_4 = NULL;
	U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* G_B1_0 = NULL;
	Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_0 = (U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass25_0__ctor_m3BCDFCF526EAC3977CED158187A290D4084F78A2(L_0, NULL);
		V_0 = L_0;
		// var target = _currentInstance != null ? _currentInstance : macro;
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_1 = V_0;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2 = __this->____currentInstance_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = L_1;
		if (L_3)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_4;
		L_4 = MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline(__this, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001d:
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_5 = __this->____currentInstance_21;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		G_B3_1->___target_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___target_0), (void*)G_B3_0);
		// if ( target == null || target.entry == null || target.exit == null ) {
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_6 = V_0;
		NullCheck(L_6);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_7 = L_6->___target_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_9 = V_0;
		NullCheck(L_9);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_10 = L_9->___target_0;
		NullCheck(L_10);
		MacroInputNode_tBA93669758279C3BA138D66296F5A013F24AF553* L_11;
		L_11 = Macro_get_entry_m2406BA51EA1F96D42ABA3BAA5E31FD8C47105634(L_10, NULL);
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_12 = V_0;
		NullCheck(L_12);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_13 = L_12->___target_0;
		NullCheck(L_13);
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_14;
		L_14 = Macro_get_exit_m92E55C9E49117A52EA957273E9498E23B171F271(L_13, NULL);
		if (L_14)
		{
			goto IL_0051;
		}
	}

IL_0050:
	{
		// return;
		return;
	}

IL_0051:
	{
		// for ( var i = 0; i < target.inputDefinitions.Count; i++ ) {
		V_1 = 0;
		goto IL_011f;
	}

IL_0058:
	{
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_15 = (U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		U3CU3Ec__DisplayClass25_1__ctor_m6AC83F522AE50E81324FB1EBFD927F91E3AB423E(L_15, NULL);
		V_2 = L_15;
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_16 = V_2;
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_17 = V_0;
		NullCheck(L_16);
		L_16->___CSU24U3CU3E8__locals1_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___CSU24U3CU3E8__locals1_1), (void*)L_17);
		// var defIn = target.inputDefinitions[i];
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_18 = V_2;
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_19 = V_2;
		NullCheck(L_19);
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_20 = L_19->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_20);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_21 = L_20->___target_0;
		NullCheck(L_21);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_22 = L_21->___inputDefinitions_32;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_24;
		L_24 = List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD(L_22, L_23, List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var);
		NullCheck(L_18);
		L_18->___defIn_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___defIn_0), (void*)L_24);
		// if ( defIn.type == typeof(Flow) ) {
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_25 = V_2;
		NullCheck(L_25);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_26 = L_25->___defIn_0;
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00c8;
		}
	}
	{
		// AddFlowInput(defIn.name, (f) => { target.entryActionMap[defIn.ID](f); }, defIn.ID);
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_31 = V_2;
		NullCheck(L_31);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_32 = L_31->___defIn_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_32, NULL);
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_34 = V_2;
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_35 = (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*)il2cpp_codegen_object_new(FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass25_1_U3CRegisterPortsU3Eb__0_m52CCBF3BF41DEE1CFB138D9B30B7C435CA755117_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_36 = V_2;
		NullCheck(L_36);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_37 = L_36->___defIn_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_37, NULL);
		FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1* L_39;
		L_39 = FlowNode_AddFlowInput_mA0BC2BD46D1E1C6FC93DF0EFC8D203DBA5AD7DAD(__this, L_33, L_35, L_38, NULL);
		goto IL_011b;
	}

IL_00c8:
	{
		// target.entryFunctionMap[defIn.ID] = AddValueInput(defIn.name, defIn.type, defIn.ID).GetObjectValue;
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_40 = V_2;
		NullCheck(L_40);
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_41 = L_40->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_41);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_42 = L_41->___target_0;
		NullCheck(L_42);
		Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* L_43 = L_42->___entryFunctionMap_36;
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_44 = V_2;
		NullCheck(L_44);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_45 = L_44->___defIn_0;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_45, NULL);
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_47 = V_2;
		NullCheck(L_47);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_48 = L_47->___defIn_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_48, NULL);
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_50 = V_2;
		NullCheck(L_50);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_51 = L_50->___defIn_0;
		NullCheck(L_51);
		Type_t* L_52;
		L_52 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_51, NULL);
		U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* L_53 = V_2;
		NullCheck(L_53);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_54 = L_53->___defIn_0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_54, NULL);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_56;
		L_56 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(__this, L_49, L_52, L_55, NULL);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_57 = L_56;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_58 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_58, L_57, (intptr_t)((void*)GetVirtualMethodInfo(L_57, 12)), NULL);
		NullCheck(L_43);
		Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88(L_43, L_46, L_58, Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88_RuntimeMethod_var);
	}

IL_011b:
	{
		// for ( var i = 0; i < target.inputDefinitions.Count; i++ ) {
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_011f:
	{
		// for ( var i = 0; i < target.inputDefinitions.Count; i++ ) {
		int32_t L_60 = V_1;
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_61 = V_0;
		NullCheck(L_61);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_62 = L_61->___target_0;
		NullCheck(L_62);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_63 = L_62->___inputDefinitions_32;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_inline(L_63, List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_64)))
		{
			goto IL_0058;
		}
	}
	{
		// for ( var i = 0; i < target.outputDefinitions.Count; i++ ) {
		V_3 = 0;
		goto IL_020f;
	}

IL_013c:
	{
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_65 = (U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		U3CU3Ec__DisplayClass25_2__ctor_m71EC7806C0A743B4DE096834B9E2DD1635E75A01(L_65, NULL);
		V_4 = L_65;
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_66 = V_4;
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_67 = V_0;
		NullCheck(L_66);
		L_66->___CSU24U3CU3E8__locals2_1 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&L_66->___CSU24U3CU3E8__locals2_1), (void*)L_67);
		// var defOut = target.outputDefinitions[i];
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_68 = V_4;
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_69 = V_4;
		NullCheck(L_69);
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_70 = L_69->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_70);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_71 = L_70->___target_0;
		NullCheck(L_71);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_72 = L_71->___outputDefinitions_33;
		int32_t L_73 = V_3;
		NullCheck(L_72);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_74;
		L_74 = List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD(L_72, L_73, List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var);
		NullCheck(L_68);
		L_68->___defOut_0 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&L_68->___defOut_0), (void*)L_74);
		// if ( defOut.type == typeof(Flow) ) {
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_75 = V_4;
		NullCheck(L_75);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_76 = L_75->___defOut_0;
		NullCheck(L_76);
		Type_t* L_77;
		L_77 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01d3;
		}
	}
	{
		// target.exitActionMap[defOut.ID] = AddFlowOutput(defOut.name, defOut.ID).Call;
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_81 = V_4;
		NullCheck(L_81);
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_82 = L_81->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_82);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_83 = L_82->___target_0;
		NullCheck(L_83);
		Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* L_84 = L_83->___exitActionMap_35;
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_85 = V_4;
		NullCheck(L_85);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_86 = L_85->___defOut_0;
		NullCheck(L_86);
		String_t* L_87;
		L_87 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_86, NULL);
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_88 = V_4;
		NullCheck(L_88);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_89 = L_88->___defOut_0;
		NullCheck(L_89);
		String_t* L_90;
		L_90 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_89, NULL);
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_91 = V_4;
		NullCheck(L_91);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_92 = L_91->___defOut_0;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_92, NULL);
		FlowOutput_t8388BE4F6F41D8964DBAB545411A2F74724CCB7F* L_94;
		L_94 = FlowNode_AddFlowOutput_mC500C7A04D239B6E558C88BABC438CB476AF7022(__this, L_90, L_93, NULL);
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_95 = (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*)il2cpp_codegen_object_new(FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272(L_95, L_94, (intptr_t)((void*)FlowOutput_Call_m6F51031A8C4AA61692BFC08857D595BA38D78479_RuntimeMethod_var), NULL);
		NullCheck(L_84);
		Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805(L_84, L_87, L_95, Dictionary_2_set_Item_m1FBB7F325C68B6B43A18A5822A422BCE5EEB6805_RuntimeMethod_var);
		goto IL_020b;
	}

IL_01d3:
	{
		// AddValueOutput(defOut.name, defOut.type, () => { return target.exitFunctionMap[defOut.ID](); }, defOut.ID);
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_96 = V_4;
		NullCheck(L_96);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_97 = L_96->___defOut_0;
		NullCheck(L_97);
		String_t* L_98;
		L_98 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_97, NULL);
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_99 = V_4;
		NullCheck(L_99);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_100 = L_99->___defOut_0;
		NullCheck(L_100);
		Type_t* L_101;
		L_101 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_100, NULL);
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_102 = V_4;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_103 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_103);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_103, L_102, (intptr_t)((void*)U3CU3Ec__DisplayClass25_2_U3CRegisterPortsU3Eb__1_m7AFA69750EAA3557EC67A1BB8FD2C5CD41CA0595_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* L_104 = V_4;
		NullCheck(L_104);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_105 = L_104->___defOut_0;
		NullCheck(L_105);
		String_t* L_106;
		L_106 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_105, NULL);
		ValueOutput_t2486859532A1F701F8ADBE6394E261364D974FF0* L_107;
		L_107 = FlowNode_AddValueOutput_m510412A13F8B57A314B278333F729FF2500B366E(__this, L_98, L_101, L_103, L_106, NULL);
	}

IL_020b:
	{
		// for ( var i = 0; i < target.outputDefinitions.Count; i++ ) {
		int32_t L_108 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_020f:
	{
		// for ( var i = 0; i < target.outputDefinitions.Count; i++ ) {
		int32_t L_109 = V_3;
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_110 = V_0;
		NullCheck(L_110);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_111 = L_110->___target_0;
		NullCheck(L_111);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_112 = L_111->___outputDefinitions_33;
		NullCheck(L_112);
		int32_t L_113;
		L_113 = List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_inline(L_112, List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		if ((((int32_t)L_109) < ((int32_t)L_113)))
		{
			goto IL_013c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroNodeWrapper__ctor_mC1B97A46ED4EC7881EFE83EBCC9564C348DD0D93 (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m3BCDFCF526EAC3977CED158187A290D4084F78A2 (U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_1__ctor_m6AC83F522AE50E81324FB1EBFD927F91E3AB423E (U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_1::<RegisterPorts>b__0(FlowCanvas.Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_1_U3CRegisterPortsU3Eb__0_m52CCBF3BF41DEE1CFB138D9B30B7C435CA755117 (U3CU3Ec__DisplayClass25_1_t54C457F5697281A9776ADF7B3B639802BFE871DF* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddFlowInput(defIn.name, (f) => { target.entryActionMap[defIn.ID](f); }, defIn.ID);
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_1 = L_0->___target_0;
		NullCheck(L_1);
		Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* L_2 = L_1->___entryActionMap_34;
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_3 = __this->___defIn_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_3, NULL);
		NullCheck(L_2);
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_5;
		L_5 = Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469(L_2, L_4, Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469_RuntimeMethod_var);
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_6 = ___f0;
		NullCheck(L_5);
		FlowHandler_Invoke_mF97D2BEF129CB78CED178ED67679502C9F40C2AA_inline(L_5, L_6, NULL);
		// AddFlowInput(defIn.name, (f) => { target.entryActionMap[defIn.ID](f); }, defIn.ID);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_2__ctor_m71EC7806C0A743B4DE096834B9E2DD1635E75A01 (U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object FlowCanvas.Macros.MacroNodeWrapper/<>c__DisplayClass25_2::<RegisterPorts>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass25_2_U3CRegisterPortsU3Eb__1_m7AFA69750EAA3557EC67A1BB8FD2C5CD41CA0595 (U3CU3Ec__DisplayClass25_2_t81EF45D153F3688D610A9240F375F1181480F789* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddValueOutput(defOut.name, defOut.type, () => { return target.exitFunctionMap[defOut.ID](); }, defOut.ID);
		U3CU3Ec__DisplayClass25_0_t7BB0044929C9ED531253C4FA2B220BEE3003215F* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_1 = L_0->___target_0;
		NullCheck(L_1);
		Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* L_2 = L_1->___exitFunctionMap_37;
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_3 = __this->___defOut_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_3, NULL);
		NullCheck(L_2);
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_5;
		L_5 = Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0(L_2, L_4, Dictionary_2_get_Item_mC47A2BD491B7EA3A6B4133549DC3E480DC84CBA0_RuntimeMethod_var);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ValueHandlerObject_Invoke_m637D0C89810D53D959AE8F83E4C41465E37B4B04_inline(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ParadoxNotion.Alignment2x2 FlowCanvas.Macros.MacroOutputNode::get_iconAlignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacroOutputNode_get_iconAlignment_mDA2F31A47C15D099C536C57D4F893EE4C80B5890 (MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* __this, const RuntimeMethod* method) 
{
	{
		// get { return ParadoxNotion.Alignment2x2.Default; }
		return (int32_t)(0);
	}
}
// FlowCanvas.Macros.Macro FlowCanvas.Macros.MacroOutputNode::get_macro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175 (MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return graph as Macro; }
		Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* L_0;
		L_0 = Node_get_graph_mB21F59A8B53310BF25DE6085397701DB23CC3A08_inline(__this, NULL);
		return ((Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08*)IsInstClass((RuntimeObject*)L_0, Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08_il2cpp_TypeInfo_var));
	}
}
// System.Void FlowCanvas.Macros.MacroOutputNode::RegisterPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroOutputNode_RegisterPorts_m2C8F5888D5233623F65946871A709438FDF78F93 (MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m31E99DD1E14EE92F95B02EA0B25C3D8EB973BC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* V_1 = NULL;
	{
		// if ( macro == null || macro.outputDefinitions == null ) { return; }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0;
		L_0 = MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_2;
		L_2 = MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175(__this, NULL);
		NullCheck(L_2);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_3 = L_2->___outputDefinitions_33;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// if ( macro == null || macro.outputDefinitions == null ) { return; }
		return;
	}

IL_001c:
	{
		// for ( var i = 0; i < macro.outputDefinitions.Count; i++ ) {
		V_0 = 0;
		goto IL_00e0;
	}

IL_0023:
	{
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_4 = (U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass4_0__ctor_m131992A7B3F2F5EAF3090F25270DD1940F784CFD(L_4, NULL);
		V_1 = L_4;
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_5 = V_1;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_1), (void*)__this);
		// var def = macro.outputDefinitions[i];
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_6 = V_1;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_7;
		L_7 = MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175(__this, NULL);
		NullCheck(L_7);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_8 = L_7->___outputDefinitions_33;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_10;
		L_10 = List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD(L_8, L_9, List_1_get_Item_mFD70CBEA370788A6120F07D09826FA62D7EAEADD_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___def_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___def_0), (void*)L_10);
		// if ( def.type == typeof(Flow) ) {
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_11 = V_1;
		NullCheck(L_11);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_12 = L_11->___def_0;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_008e;
		}
	}
	{
		// AddFlowInput(def.name, (f) => { macro.exitActionMap[def.ID](f); }, def.ID);
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_17 = V_1;
		NullCheck(L_17);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_18 = L_17->___def_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_18, NULL);
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_20 = V_1;
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_21 = (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619*)il2cpp_codegen_object_new(FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		FlowHandler__ctor_m6B3D424399FC44BE40FEFA58204121C4C4222272(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m31E99DD1E14EE92F95B02EA0B25C3D8EB973BC6B_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_22 = V_1;
		NullCheck(L_22);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_23 = L_22->___def_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_23, NULL);
		FlowInput_t1845B06EA498F796169B632DF4AEBAC9FB2016C1* L_25;
		L_25 = FlowNode_AddFlowInput_mA0BC2BD46D1E1C6FC93DF0EFC8D203DBA5AD7DAD(__this, L_19, L_21, L_24, NULL);
		goto IL_00dc;
	}

IL_008e:
	{
		// macro.exitFunctionMap[def.ID] = AddValueInput(def.name, def.type, def.ID).GetObjectValue;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_26;
		L_26 = MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175(__this, NULL);
		NullCheck(L_26);
		Dictionary_2_t25CFF734871CA4C0AE14E895651F9F9C14DD30EE* L_27 = L_26->___exitFunctionMap_37;
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_28 = V_1;
		NullCheck(L_28);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_29 = L_28->___def_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_29, NULL);
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_31 = V_1;
		NullCheck(L_31);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_32 = L_31->___def_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline(L_32, NULL);
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_34 = V_1;
		NullCheck(L_34);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_35 = L_34->___def_0;
		NullCheck(L_35);
		Type_t* L_36;
		L_36 = DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline(L_35, NULL);
		U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* L_37 = V_1;
		NullCheck(L_37);
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_38 = L_37->___def_0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_38, NULL);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_40;
		L_40 = FlowNode_AddValueInput_m053C4EF25902DEB08F04E3BEA47EAA2FFBF15C55(__this, L_33, L_36, L_39, NULL);
		ValueInput_t02FEF211205D5ACA93621F2105CE367C0314005D* L_41 = L_40;
		ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* L_42 = (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8*)il2cpp_codegen_object_new(ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		ValueHandlerObject__ctor_mC6102E7C5CA94DBA32DC7B4D7CE7F838FF0BC6C1(L_42, L_41, (intptr_t)((void*)GetVirtualMethodInfo(L_41, 12)), NULL);
		NullCheck(L_27);
		Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88(L_27, L_30, L_42, Dictionary_2_set_Item_m34FF22FA83E7B9DF786C6EBE26D41D7B24CDCD88_RuntimeMethod_var);
	}

IL_00dc:
	{
		// for ( var i = 0; i < macro.outputDefinitions.Count; i++ ) {
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00e0:
	{
		// for ( var i = 0; i < macro.outputDefinitions.Count; i++ ) {
		int32_t L_44 = V_0;
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_45;
		L_45 = MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175(__this, NULL);
		NullCheck(L_45);
		List_1_tA21CFDD087613DE4CF05F410A95EED109BC339A1* L_46 = L_45->___outputDefinitions_33;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_inline(L_46, List_1_get_Count_m9317829688666C75763444BC5B1FC5399410E40B_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_47)))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlowCanvas.Macros.MacroOutputNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroOutputNode__ctor_m62E1D4BE393A81C4D7004AF8B9DCE3D9B674710B (MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* __this, const RuntimeMethod* method) 
{
	{
		FlowNode__ctor_m95A03D9BC01D736BE06BF19A3FA1F63D94A6A7F5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlowCanvas.Macros.MacroOutputNode/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m131992A7B3F2F5EAF3090F25270DD1940F784CFD (U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FlowCanvas.Macros.MacroOutputNode/<>c__DisplayClass4_0::<RegisterPorts>b__0(FlowCanvas.Flow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CRegisterPortsU3Eb__0_m31E99DD1E14EE92F95B02EA0B25C3D8EB973BC6B (U3CU3Ec__DisplayClass4_0_t77DF0FA4F199F33191CE483CBE8A38EB6FF89EFD* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddFlowInput(def.name, (f) => { macro.exitActionMap[def.ID](f); }, def.ID);
		MacroOutputNode_t274499B9EA279BCE5903D3E38295217A584A225F* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_1;
		L_1 = MacroOutputNode_get_macro_mA43D190C15659BDDAC0AD218C77C3A4FF06F6175(L_0, NULL);
		NullCheck(L_1);
		Dictionary_2_t979E6A5752AC4438FBD6F80AD69D0E80B0CDFAAA* L_2 = L_1->___exitActionMap_35;
		DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* L_3 = __this->___def_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DynamicParameterDefinition_get_ID_m1E5C75722AE846A820960280538E01ACE8D8378D(L_3, NULL);
		NullCheck(L_2);
		FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* L_5;
		L_5 = Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469(L_2, L_4, Dictionary_2_get_Item_mD1EC102F737885C3A125CFD3EF85EB3531175469_RuntimeMethod_var);
		Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 L_6 = ___f0;
		NullCheck(L_5);
		FlowHandler_Invoke_mF97D2BEF129CB78CED178ED67679502C9F40C2AA_inline(L_5, L_6, NULL);
		// AddFlowInput(def.name, (f) => { macro.exitActionMap[def.ID](f); }, def.ID);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectedMethodBaseNodeWrapper_get_callable_m99D9EEF7752797787582C298BFFAED609E917544_inline (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// get { return _callable; }
		bool L_0 = __this->____callable_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectedMethodBaseNodeWrapper_get_exposeParams_m7BFF18E2D92F24A3C6DAA9A2F1626E864F8A68B9_inline (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// get { return _exposeParams; }
		bool L_0 = __this->____exposeParams_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReflectedMethodBaseNodeWrapper_get_exposedParamsCount_m9921E35367F3F38D80D4F8D274DC61C119EF5701_inline (ReflectedMethodBaseNodeWrapper_tB1FDD45A93E795AEC2D651A19D374609365A7370* __this, const RuntimeMethod* method) 
{
	{
		// get { return _exposedParamsCount; }
		int32_t L_0 = __this->____exposedParamsCount_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReflectedMethodNodeWrapper_set_reflectedMethodNode_m252E18BA9088F9E37DB6DC8D9D47733CEAF8F3E5_inline (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* ___value0, const RuntimeMethod* method) 
{
	{
		// private BaseReflectedMethodNode reflectedMethodNode { get; set; }
		BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* L_0 = ___value0;
		__this->___U3CreflectedMethodNodeU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreflectedMethodNodeU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* ReflectedMethodNodeWrapper_get_reflectedMethodNode_m66241777B12D7427333833FC876AEE9654763819_inline (ReflectedMethodNodeWrapper_t3100F3F3EEA26515231E6B6FC02BF15F029FA031* __this, const RuntimeMethod* method) 
{
	{
		// private BaseReflectedMethodNode reflectedMethodNode { get; set; }
		BaseReflectedMethodNode_t65D65B1E13FEA1B18EADCA22C5AC8545B60860B5* L_0 = __this->___U3CreflectedMethodNodeU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Port_get_name_mA065A94124E299D515E4C09BC6684A7A65803BCC_inline (Port_t96D53E0528D79DD5BEDEED890D51FEA6230FBEFD* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActionCall_Invoke_m805BE8D23AFF86DD93A37EE202CAA6BD2945252B_inline (ActionCall_t2CEB66146EAB7FCD23B0306A8FE48AACEB0D95FF* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlowHandler_Invoke_mF97D2BEF129CB78CED178ED67679502C9F40C2AA_inline (FlowHandler_t9970F0B6AEB5B730C181D72005514CFF7F666619* __this, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734 ___f0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Flow_tE47E1E5A4B1A5820586AB303FB4D08A6B959B734, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___f0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DynamicParameterDefinition_get_name_m9257360B2E9815ED37A471010EA7988695ECCB74_inline (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* __this, const RuntimeMethod* method) 
{
	{
		// get { return _name; }
		String_t* L_0 = __this->____name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* DynamicParameterDefinition_get_type_m9653903CE6FD0EEA1B00CE4EBF98891A3FA28739_inline (DynamicParameterDefinition_t9B2EC9C6FF90EECDCC32CAB983D88026746D5874* __this, const RuntimeMethod* method) 
{
	{
		// public Type type { get; set; }
		Type_t* L_0 = __this->___U3CtypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* Node_get_graph_mB21F59A8B53310BF25DE6085397701DB23CC3A08_inline (Node_tFE79C2F3D9D517984CDDFAD382448FF70E5B4FB8* __this, const RuntimeMethod* method) 
{
	{
		// get { return _graph; }
		Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* L_0 = __this->____graph_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueHandlerObject_Invoke_m637D0C89810D53D959AE8F83E4C41465E37B4B04_inline (ValueHandlerObject_tC5BF7F33AA455F15C48094ABAB2DB9CA57E0CCE8* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* MacroNodeWrapper_get_macro_m3916AF3F43FB7E798AEDC8055AF1DCB637970FA0_inline (MacroNodeWrapper_t3847E9E46B3058D3CB42CCDBDA185A5FF41C6B3F* __this, const RuntimeMethod* method) 
{
	{
		// get { return _macro; }
		Macro_tE573E8CE3A90F5F20E7360EA8F749A863A41EC08* L_0 = __this->____macro_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Graph_get_deltaTime_mE54EE3C1B054C11AF60C7F4785F96DFF6BC3B6FC_inline (Graph_tB1CBC9173527C9E453E52B1C7DE2F39E44CF9032* __this, const RuntimeMethod* method) 
{
	{
		// public float deltaTime { get; private set; }
		float L_0 = __this->___U3CdeltaTimeU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
