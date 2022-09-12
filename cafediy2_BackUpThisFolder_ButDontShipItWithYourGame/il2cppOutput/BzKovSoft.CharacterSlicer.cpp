#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>
struct Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Transform>
struct IEqualityComparer_1_tD4E2164C5E70B4D606744749A66FC3CBE9EB8180;
// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.Joint>
struct List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.Queue`1<BzKovSoft.ObjectSlicer.SliceTry>
struct Queue_1_t08FF7DB2435CDC19AF4EC8A9ABF2A3496B417881;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Transform>[]
struct SlotU5BU5D_tFEF55D1F1BCB4F97FD11EAA15EB9CCC3E470213D;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// BzKovSoft.ObjectSlicer.BzMeshSliceResult[]
struct BzMeshSliceResultU5BU5D_tDD57A9F855CA423849E070AE19E5219CF498FFDD;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Joint[]
struct JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_tFC0CF817A6D2131D94AB6387E4EAE7D97B3FFC40;
// BzKovSoft.ObjectSlicer.StaticComponentManager/ColliderSliceResult[]
struct ColliderSliceResultU5BU5D_tCF8DD18E889ACB64D1FEEB1F9C825AB685F242F0;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// BzKovSoft.ObjectSlicer.BzMeshData
struct BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB;
// BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter
struct BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5;
// BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter
struct BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B;
// BzKovSoft.ObjectSlicer.BzSliceTryData
struct BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017;
// BzKovSoft.ObjectSlicer.BzSliceTryResult
struct BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2;
// BzKovSoft.ObjectSlicer.BzSliceableBase
struct BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A;
// BzKovSoft.CharacterSlicer.BzSliceableCharacterBase
struct BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// BzKovSoft.CharacterSlicer.CharacterComponentManagerFast
struct CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2;
// UnityEngine.CharacterJoint
struct CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134;
// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer
struct CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// BzKovSoft.ObjectSlicer.IBzSliceAdapter
struct IBzSliceAdapter_tE795AFBC985C534E2794D1C28D98B68EEDB4DC22;
// BzKovSoft.ObjectSlicer.IComponentManager
struct IComponentManager_tB4117161302E25F7F2C6DBFE59FACC98C53CFAA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// BzKovSoft.ObjectSlicer.SliceTry
struct SliceTry_t8EE1CB43F4399AF50E6B134A94D951EDADBDF48D;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// BzKovSoft.ObjectSlicer.StaticComponentManager
struct StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65;
// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670;
// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_tABB09091ECE50CA4C1B43A6E91D2CB04465B9388;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t55D593FB2AB45488862F2C620A08F84A422A7E93;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh
struct AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C;
// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c
struct U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E;
// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj
struct CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDDACB2A2E15FDDF14FA22D42346768E311B9E5;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral7725E7B12B31C3EFD2967489A6512077E2DFCDDC;
IL2CPP_EXTERN_C String_t* _stringLiteral84105173D49B35C842628E03AB273A634DDA06B0;
IL2CPP_EXTERN_C String_t* _stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56;
IL2CPP_EXTERN_C String_t* _stringLiteral88BDF3D0791A560245652E772545C49897854443;
IL2CPP_EXTERN_C String_t* _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4166C49C7439DBBFA713A83D8BA4CE3FFE0C5E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC;
IL2CPP_EXTERN_C String_t* _stringLiteralBBBBDA89EC0528F6EC13A6F6C534B63E3F363875;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC85B20D4B77CFC6ACE2EE3CD0DAF0EBB9AD4E6;
IL2CPP_EXTERN_C const RuntimeMethod* CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m6094707EC687D5CF2415C4F64B446A14CAE11BA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterComponentManagerFast_CreateJoint_m5744F4D104C37719912A119CB1D9163B266DE31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterComponentManagerFast_OnCompletePerSide_mBECC6E23DAA49AEA570C7ACA77833B2BCA60B1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFAC2FDF1E3BE3A5913D6354085830579754062D2 
{
};

// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tFEF55D1F1BCB4F97FD11EAA15EB9CCC3E470213D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Joint>
struct List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// BzKovSoft.ObjectSlicer.BzMeshData
struct BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BzKovSoft.ObjectSlicer.BzMeshData::Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Vertices_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BzKovSoft.ObjectSlicer.BzMeshData::Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Normals_1;
	// System.Collections.Generic.List`1<UnityEngine.Color> BzKovSoft.ObjectSlicer.BzMeshData::Colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___Colors_2;
	// System.Collections.Generic.List`1<UnityEngine.Color32> BzKovSoft.ObjectSlicer.BzMeshData::Colors32
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___Colors32_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV2
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV2_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV3
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV3_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BzKovSoft.ObjectSlicer.BzMeshData::UV4
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___UV4_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> BzKovSoft.ObjectSlicer.BzMeshData::Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___Tangents_8;
	// System.Collections.Generic.List`1<UnityEngine.BoneWeight> BzKovSoft.ObjectSlicer.BzMeshData::BoneWeights
	List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* ___BoneWeights_9;
	// UnityEngine.Matrix4x4[] BzKovSoft.ObjectSlicer.BzMeshData::Bindposes
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___Bindposes_10;
	// System.Int32[][] BzKovSoft.ObjectSlicer.BzMeshData::SubMeshes
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___SubMeshes_11;
	// UnityEngine.Material[] BzKovSoft.ObjectSlicer.BzMeshData::Materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___Materials_12;
};

// BzKovSoft.ObjectSlicer.BzSliceTryResult
struct BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2  : public RuntimeObject
{
	// BzKovSoft.ObjectSlicer.BzMeshSliceResult[] BzKovSoft.ObjectSlicer.BzSliceTryResult::meshItems
	BzMeshSliceResultU5BU5D_tDD57A9F855CA423849E070AE19E5219CF498FFDD* ___meshItems_0;
	// System.Boolean BzKovSoft.ObjectSlicer.BzSliceTryResult::sliced
	bool ___sliced_1;
	// System.Object BzKovSoft.ObjectSlicer.BzSliceTryResult::addData
	RuntimeObject* ___addData_2;
	// UnityEngine.GameObject BzKovSoft.ObjectSlicer.BzSliceTryResult::outObjectNeg
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___outObjectNeg_3;
	// UnityEngine.GameObject BzKovSoft.ObjectSlicer.BzSliceTryResult::outObjectPos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___outObjectPos_4;
};

// BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper
struct CenterOfMassColliderBasedHelper_tD9B5BA8D78EF6B1A36224ADD309C852AA4A343E1  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D  : public RuntimeObject
{
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNum
	int32_t ___lineNum_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePos
	int32_t ___linePos_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t55D593FB2AB45488862F2C620A08F84A422A7E93* ___namespaces_3;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___parent_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isProcessing
	bool ___isProcessing_5;
};

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B  : public RuntimeObject
{
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97* ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF* ___serializerData_6;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A* ___onUnreferencedObject_8;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65* ___onUnknownAttribute_9;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3* ___onUnknownElement_10;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670* ___onUnknownNode_11;
};

struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_StaticFields
{
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___serializerTypes_7;
};

// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F  : public RuntimeObject
{
};

// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh
struct AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C  : public RuntimeObject
{
	// BzKovSoft.ObjectSlicer.IBzSliceAdapter BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh::adapter
	RuntimeObject* ___adapter_0;
	// UnityEngine.Mesh BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_1;
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c
struct U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E  : public RuntimeObject
{
};

struct U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields
{
	// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::<>9
	U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* ___U3CU3E9_0;
	// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult> BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::<>9__2_0
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* ___U3CU3E9__2_0_1;
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
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

// UnityEngine.JointDrive
struct JointDrive_t02FEB3A7895F33D040010E2BE5377313FAFC3CB6 
{
	// System.Single UnityEngine.JointDrive::m_PositionSpring
	float ___m_PositionSpring_0;
	// System.Single UnityEngine.JointDrive::m_PositionDamper
	float ___m_PositionDamper_1;
	// System.Single UnityEngine.JointDrive::m_MaximumForce
	float ___m_MaximumForce_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.SoftJointLimit
struct SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 
{
	// System.Single UnityEngine.SoftJointLimit::m_Limit
	float ___m_Limit_0;
	// System.Single UnityEngine.SoftJointLimit::m_Bounciness
	float ___m_Bounciness_1;
	// System.Single UnityEngine.SoftJointLimit::m_ContactDistance
	float ___m_ContactDistance_2;
};

// UnityEngine.SoftJointLimitSpring
struct SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 
{
	// System.Single UnityEngine.SoftJointLimitSpring::m_Spring
	float ___m_Spring_0;
	// System.Single UnityEngine.SoftJointLimitSpring::m_Damper
	float ___m_Damper_1;
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

// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName_0;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable_1;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns_2;
};

// System.Xml.Schema.XmlSchema
struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D  : public XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D
{
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::attributeFormDefault
	int32_t ___attributeFormDefault_6;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::elementFormDefault
	int32_t ___elementFormDefault_7;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::blockDefault
	int32_t ___blockDefault_8;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::finalDefault
	int32_t ___finalDefault_9;
	// System.String System.Xml.Schema.XmlSchema::targetNs
	String_t* ___targetNs_10;
	// System.String System.Xml.Schema.XmlSchema::version
	String_t* ___version_11;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::includes
	XmlSchemaObjectCollection_tABB09091ECE50CA4C1B43A6E91D2CB04465B9388* ___includes_12;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::items
	XmlSchemaObjectCollection_tABB09091ECE50CA4C1B43A6E91D2CB04465B9388* ___items_13;
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_14;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchema::moreAttributes
	XmlAttributeU5BU5D_tFC0CF817A6D2131D94AB6387E4EAE7D97B3FFC40* ___moreAttributes_15;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiled
	bool ___isCompiled_16;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiledBySet
	bool ___isCompiledBySet_17;
	// System.Boolean System.Xml.Schema.XmlSchema::isPreprocessed
	bool ___isPreprocessed_18;
	// System.Boolean System.Xml.Schema.XmlSchema::isRedefined
	bool ___isRedefined_19;
	// System.Int32 System.Xml.Schema.XmlSchema::errorCount
	int32_t ___errorCount_20;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributes
	XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583* ___attributes_21;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributeGroups
	XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583* ___attributeGroups_22;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::elements
	XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583* ___elements_23;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::types
	XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583* ___types_24;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::groups
	XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583* ___groups_25;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::notations
	XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583* ___notations_26;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::identityConstraints
	XmlSchemaObjectTable_tD5C00DB526C716DB38585522F2011F99FC66A583* ___identityConstraints_27;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchema::importedSchemas
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___importedSchemas_29;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchema::importedNamespaces
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___importedNamespaces_30;
	// System.Int32 System.Xml.Schema.XmlSchema::schemaId
	int32_t ___schemaId_31;
	// System.Uri System.Xml.Schema.XmlSchema::baseUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri_32;
	// System.Boolean System.Xml.Schema.XmlSchema::isChameleon
	bool ___isChameleon_33;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchema::ids
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ids_34;
	// System.Xml.XmlDocument System.Xml.Schema.XmlSchema::document
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___document_35;
};

struct XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D_StaticFields
{
	// System.Int32 System.Xml.Schema.XmlSchema::globalIdCounter
	int32_t ___globalIdCounter_28;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter
struct BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5  : public RuntimeObject
{
	// UnityEngine.Matrix4x4 BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::_l2w
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____l2w_0;
	// UnityEngine.Matrix4x4 BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::_w2l
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____w2l_1;
	// UnityEngine.Vector3[] BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::_vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____vertices_2;
};

// BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter
struct BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B  : public RuntimeObject
{
	// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position_0;
	// UnityEngine.Matrix4x4 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_w2l
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____w2l_1;
	// UnityEngine.Matrix4x4 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_l2w
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____l2w_2;
	// UnityEngine.Vector3[] BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____vertices_3;
	// UnityEngine.Matrix4x4[] BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_charToW
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____charToW_4;
	// UnityEngine.BoneWeight[] BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::_boneWeights
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ____boneWeights_5;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// BzKovSoft.ObjectSlicer.BzSliceTryData
struct BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017  : public RuntimeObject
{
	// BzKovSoft.ObjectSlicer.IComponentManager BzKovSoft.ObjectSlicer.BzSliceTryData::componentManager
	RuntimeObject* ___componentManager_0;
	// UnityEngine.Plane BzKovSoft.ObjectSlicer.BzSliceTryData::plane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane_1;
	// System.Object BzKovSoft.ObjectSlicer.BzSliceTryData::addData
	RuntimeObject* ___addData_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// BzKovSoft.ObjectSlicer.StaticComponentManager
struct StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90  : public RuntimeObject
{
	// UnityEngine.GameObject BzKovSoft.ObjectSlicer.StaticComponentManager::_originalObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____originalObject_0;
	// UnityEngine.Plane BzKovSoft.ObjectSlicer.StaticComponentManager::_plane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ____plane_1;
	// BzKovSoft.ObjectSlicer.StaticComponentManager/ColliderSliceResult[] BzKovSoft.ObjectSlicer.StaticComponentManager::_colliderResults
	ColliderSliceResultU5BU5D_tCF8DD18E889ACB64D1FEEB1F9C825AB685F242F0* ____colliderResults_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>
struct Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// BzKovSoft.CharacterSlicer.CharacterComponentManagerFast
struct CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2  : public StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterJoint
struct CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
	// UnityEngine.Quaternion UnityEngine.CharacterJoint::targetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation_4;
	// UnityEngine.Vector3 UnityEngine.CharacterJoint::targetAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetAngularVelocity_5;
	// UnityEngine.JointDrive UnityEngine.CharacterJoint::rotationDrive
	JointDrive_t02FEB3A7895F33D040010E2BE5377313FAFC3CB6 ___rotationDrive_6;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// BzKovSoft.ObjectSlicer.BzSliceableBase
struct BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material BzKovSoft.ObjectSlicer.BzSliceableBase::defaultSliceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultSliceMaterial_4;
	// System.Boolean BzKovSoft.ObjectSlicer.BzSliceableBase::asynchronously
	bool ___asynchronously_5;
	// System.Boolean BzKovSoft.ObjectSlicer.BzSliceableBase::useLazyRunner
	bool ___useLazyRunner_6;
	// System.Collections.Generic.Queue`1<BzKovSoft.ObjectSlicer.SliceTry> BzKovSoft.ObjectSlicer.BzSliceableBase::_sliceTrys
	Queue_1_t08FF7DB2435CDC19AF4EC8A9ABF2A3496B417881* ____sliceTrys_7;
	// BzKovSoft.ObjectSlicer.SliceTry BzKovSoft.ObjectSlicer.BzSliceableBase::lastSuccessfulSlice
	SliceTry_t8EE1CB43F4399AF50E6B134A94D951EDADBDF48D* ___lastSuccessfulSlice_8;
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer
struct CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_StaticFields
{
	// System.Boolean BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::_initialized
	bool ____initialized_4;
};

// BzKovSoft.CharacterSlicer.BzSliceableCharacterBase
struct BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2  : public BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A
{
};

// BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj
struct CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D  : public BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649  : public RuntimeArray
{
	ALIGN_FIELD (8) Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* m_Items[1];

	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.BoneWeight>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_gshared (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetComponent<System.Object>(UnityEngine.Transform,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CenterOfMassColliderBasedHelper_GetComponent_TisRuntimeObject_m7561DDAEDBAAE93E26B40CA5202897A46FCAD8B2_gshared (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___child0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___possibleComponents1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdapterAndMesh__ctor_mD2E74C7B27349682989A56D89F135DC1644FE2FE (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::.ctor(UnityEngine.SkinnedMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter__ctor_m825529E621C02AF87A4C146BED56A800E5F95EBE (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___renderer0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceMeshFilterAdapter::.ctor(UnityEngine.Vector3[],UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceMeshFilterAdapter__ctor_m67F3D3E052C03BBB071C37032767DA1F3D06B4F4 (BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices0, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___renderer1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::.ctor(UnityEngine.GameObject,UnityEngine.Plane,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast__ctor_m4B51BE1E7BD78171D135A21CD9A85A7F831B7ABB (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane1, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___colliders2, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceTryData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceTryData__ctor_mF1226EB5DEE50D7C53CE75C4F001C52B3573BFE2 (BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceableBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableBase__ctor_m6F111C5837AB106F5983FA37B013DDE8A0E0BC78 (BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform[] UnityEngine.SkinnedMeshRenderer::get_bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* SkinnedMeshRenderer_get_bones_mEB62CD46E7CE5C0F682C29FD0E14188707F05F09 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4[] UnityEngine.Mesh::get_bindposes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Mesh_get_bindposes_mC3B3C3E380881881345B8737895C28C521F70F8D (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.BoneWeight[] UnityEngine.Mesh::get_boneWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.BoneWeight::get_weight3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetWorldPos(BzKovSoft.ObjectSlicer.BzMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetWorldPos_m77BC8403387F3DC82099515B86947BC8D30BCEC2 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___meshData0, int32_t ___index1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.BoneWeight>::get_Item(System.Int32)
inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2 (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F (*) (List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F*, int32_t, const RuntimeMethod*))List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlRootAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* __this, String_t* ___elementName0, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlRootAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, Type_t* ___type0, XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* ___root1, const RuntimeMethod* method) ;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___xmlReader0, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___xmlWriter0, RuntimeObject* ___o1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Collider> BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* CenterOfMassColliderBasedHelper_GetColliders_mEE85782B1A2C49D5AAFB5B6D481737F31C80CDB1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___possibleColliders1, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___possibleRigids2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliderCenter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CenterOfMassColliderBasedHelper_GetColliderCenter_m9F114B9E754BF9202293CBE61C747D99708E0292 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetCollidersRec(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CenterOfMassColliderBasedHelper_GetCollidersRec_mF86D791F1C0AFA2CB68291A66F85A24C8FC17117 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders1, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___possibleColliders2, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___possibleRigids3, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Collider>::Contains(T)
inline bool List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(T)
inline void List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetComponent<UnityEngine.Rigidbody>(UnityEngine.Transform,T[])
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m6094707EC687D5CF2415C4F64B446A14CAE11BA3 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___child0, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___possibleComponents1, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649*, const RuntimeMethod*))CenterOfMassColliderBasedHelper_GetComponent_TisRuntimeObject_m7561DDAEDBAAE93E26B40CA5202897A46FCAD8B2_gshared)(___child0, ___possibleComponents1, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.StaticComponentManager::.ctor(UnityEngine.GameObject,UnityEngine.Plane,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticComponentManager__ctor_m600C60D6213DACA5F7CD06D2D7397E7B995C3DF6 (StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane1, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___colliders2, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.StaticComponentManager::RepairColliders(UnityEngine.GameObject,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.Collider>,System.Collections.Generic.List`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticComponentManager_RepairColliders_m2135B594DD71F08938808945EC9D7E826F2976B1 (StaticComponentManager_t15B92E87752F9FA5165DEE22793FED621973AF90* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resultNeg0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resultPos1, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___collidersNeg2, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___collidersPos3, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::OnCompletePerSide(System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast_OnCompletePerSide_mBECC6E23DAA49AEA570C7ACA77833B2BCA60B1F7 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::.ctor()
inline void List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025 (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::RigidHaveColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_RigidHaveColliders_mDB343AD57F8E4C9610EC005E01E470E3ED44D9E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tr0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Add(T)
inline void List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Joint>::.ctor()
inline void List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656 (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Joint>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* ___results1, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___includeInactive0, ___results1, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Joint>::get_Item(System.Int32)
inline Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516 (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Contains(T)
inline bool List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Joint>::set_Item(System.Int32,T)
inline void List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, int32_t ___index0, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, int32_t, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Joint>::get_Count()
inline int32_t List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_inline (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody>::get_Item(System.Int32)
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody>::get_Count()
inline int32_t List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Transform>::.ctor()
inline void HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753 (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::IsAlreadyConnected(UnityEngine.Transform,UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Joint>,System.Collections.Generic.HashSet`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_IsAlreadyConnected_mFE1992B436C1BE97571FB4648CEBCEB7DE3CFE8D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___from0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___to1, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* ___joints2, HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ___ocupied3, const RuntimeMethod* method) ;
// UnityEngine.Joint BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::CreateJoint(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* CharacterComponentManagerFast_CreateJoint_m5744F4D104C37719912A119CB1D9163B266DE31C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemA0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemB1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Joint>::Add(T)
inline void List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_inline (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* __this, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Boolean BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::CalculateCenter(UnityEngine.Rigidbody,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CenterOfMassColliderBasedHelper_CalculateCenter_mA6445BF0AC1C2939C3058EB32C65D74BA409E5A5 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___possibleColliders1, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___possibleRigids2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Transform>::Add(T)
inline bool HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801 (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Transform>::Remove(T)
inline bool HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.CharacterJoint>()
inline CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_autoConfigureConnectedAnchor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_autoConfigureConnectedAnchor_mF61D716174DE67CD94FF042881E9052357679E02 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_connectedAnchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SoftJointLimit::set_limit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A (SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_lowTwistLimit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_lowTwistLimit_m8DC922DE93DAB94B329B3C672061AA9741A4C02E (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_highTwistLimit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_highTwistLimit_m11EFDBE8CBF92BD43F147C20F247B250CB432C32 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_swing1Limit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_swing1Limit_mBA202634AF5606DA1D59B94EF3E359C7B4FD012E (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_swing2Limit(UnityEngine.SoftJointLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_swing2Limit_mBA612E2C6E50BAAAA798FAA03490150D379BC744 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SoftJointLimitSpring::set_spring(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftJointLimitSpring_set_spring_m9A216142953ECC1CEE5080D603D18F9D1BD0A6EA (SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SoftJointLimitSpring::set_damper(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftJointLimitSpring_set_damper_mA86F8E250BA84A6DC3E84DC1A40319A39CD5CFD6 (SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_twistLimitSpring(UnityEngine.SoftJointLimitSpring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_twistLimitSpring_mF37BF3C4F77EBA9F1926FA8F07081D315A9C2031 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CharacterJoint::set_swingLimitSpring(UnityEngine.SoftJointLimitSpring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterJoint_set_swingLimitSpring_mBD4D7812652BE202BEB031F2E1997B70F0F87258 (CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* __this, SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 ___value0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer_Init_m1E535829207312A832A05C5FBB4C53729D3F1AE7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Mesh BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::GetMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* CharacterSlicerInitializer_GetMesh_m37965DAC39B76F56094ED3D0B93E6B5ECFBD41D3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj>()
inline CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8AB4590574801447E5178140DF68ADE98F8F7207 (Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// System.Void BzKovSoft.ObjectSlicer.BzSliceableBase::Slice(UnityEngine.Plane,System.Action`1<BzKovSoft.ObjectSlicer.BzSliceTryResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableBase_Slice_m3F109FFAD0697B9DB5823CD7060EF3375F175B1E (BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane0, Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* ___callBack1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableCharacterBase__ctor_m5A4946C42E3E557ED472C7B40785B0E1CCCB05BC (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, const RuntimeMethod* method) ;
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0270A043A9E72A23703328CFC2E90A6ED413238 (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableCharacterBase_Awake_m31B0C977D45F6E8D5A1258540531432EA3FC617B (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC85B20D4B77CFC6ACE2EE3CD0DAF0EBB9AD4E6);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	{
		// var animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		V_0 = L_0;
		// if (animator != null && animator.updateMode != AnimatorUpdateMode.AnimatePhysics)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB(L_3, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		// UnityEngine.Debug.LogWarning("Recomended to use Animator.UpdateMode = AnimatePhysics for your sliceable character");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralBEC85B20D4B77CFC6ACE2EE3CD0DAF0EBB9AD4E6, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// BzKovSoft.ObjectSlicer.BzSliceableBase/AdapterAndMesh BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::GetAdapterAndMesh(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* BzSliceableCharacterBase_GetAdapterAndMesh_m5AA2B9044FDB0EC069E89038CFB99C286A59C893 (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_1 = NULL;
	{
		// var skinnedRenderer = renderer as SkinnedMeshRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___renderer0;
		V_0 = ((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)IsInstClass((RuntimeObject*)L_0, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var));
		// if (skinnedRenderer != null)
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// var result = new AdapterAndMesh();
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_3 = (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C*)il2cpp_codegen_object_new(AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdapterAndMesh__ctor_mD2E74C7B27349682989A56D89F135DC1644FE2FE(L_3, NULL);
		// result.mesh = skinnedRenderer.sharedMesh;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_4 = L_3;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_5 = V_0;
		NullCheck(L_5);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6;
		L_6 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_5, NULL);
		NullCheck(L_4);
		L_4->___mesh_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___mesh_1), (void*)L_6);
		// result.adapter = new BzSliceSkinnedMeshAdapter(skinnedRenderer);
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_7 = L_4;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_8 = V_0;
		BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* L_9 = (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B*)il2cpp_codegen_object_new(BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BzSliceSkinnedMeshAdapter__ctor_m825529E621C02AF87A4C146BED56A800E5F95EBE(L_9, L_8, NULL);
		NullCheck(L_7);
		L_7->___adapter_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___adapter_0), (void*)L_9);
		// return result;
		return L_7;
	}

IL_002e:
	{
		// var meshRenderer = renderer as MeshRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = ___renderer0;
		V_1 = ((MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)IsInstClass((RuntimeObject*)L_10, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var));
		// if (meshRenderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		// var result = new AdapterAndMesh();
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_13 = (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C*)il2cpp_codegen_object_new(AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AdapterAndMesh__ctor_mD2E74C7B27349682989A56D89F135DC1644FE2FE(L_13, NULL);
		// result.mesh = meshRenderer.gameObject.GetComponent<MeshFilter>().sharedMesh;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_14 = L_13;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_17;
		L_17 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_16, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_17);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_18;
		L_18 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_17, NULL);
		NullCheck(L_14);
		L_14->___mesh_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___mesh_1), (void*)L_18);
		// result.adapter = new BzSliceMeshFilterAdapter(result.mesh.vertices, meshRenderer);
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_19 = L_14;
		AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C* L_20 = L_19;
		NullCheck(L_20);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = L_20->___mesh_1;
		NullCheck(L_21);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22;
		L_22 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_21, NULL);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_23 = V_1;
		BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5* L_24 = (BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5*)il2cpp_codegen_object_new(BzSliceMeshFilterAdapter_t48C8C6DA4B47B937F61C3A700392FC39ECEA44C5_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		BzSliceMeshFilterAdapter__ctor_m67F3D3E052C03BBB071C37032767DA1F3D06B4F4(L_24, L_22, L_23, NULL);
		NullCheck(L_20);
		L_20->___adapter_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___adapter_0), (void*)L_24);
		// return result;
		return L_19;
	}

IL_0071:
	{
		// return null;
		return (AdapterAndMesh_t64D43F82D60FC42A67D887A40057BE183232149C*)NULL;
	}
}
// BzKovSoft.ObjectSlicer.BzSliceTryData BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::PrepareData(UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* BzSliceableCharacterBase_PrepareData_m93DC413AF38B3AA7069CBDCCA4D58CBB4DD0025F (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* V_1 = NULL;
	{
		// var collidersArr = GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_0;
		L_0 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		V_0 = L_0;
		// var componentManager = new CharacterComponentManagerFast(this.gameObject, plane, collidersArr);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_2 = ___plane0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3 = V_0;
		CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* L_4 = (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2*)il2cpp_codegen_object_new(CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CharacterComponentManagerFast__ctor_m4B51BE1E7BD78171D135A21CD9A85A7F831B7ABB(L_4, L_1, L_2, L_3, NULL);
		V_1 = L_4;
		// return new BzSliceTryData()
		// {
		//     componentManager = componentManager,
		//     plane = plane,
		// };
		BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* L_5 = (BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017*)il2cpp_codegen_object_new(BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BzSliceTryData__ctor_mF1226EB5DEE50D7C53CE75C4F001C52B3573BFE2(L_5, NULL);
		BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* L_6 = L_5;
		CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* L_7 = V_1;
		NullCheck(L_6);
		L_6->___componentManager_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___componentManager_0), (void*)L_7);
		BzSliceTryData_t6430D1E079FFA3BB7F229F96D4B393A44A785017* L_8 = L_6;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_9 = ___plane0;
		NullCheck(L_8);
		L_8->___plane_1 = L_9;
		return L_8;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceableCharacterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceableCharacterBase__ctor_m5A4946C42E3E557ED472C7B40785B0E1CCCB05BC (BzSliceableCharacterBase_t3773674ACA4D7A2FC7E43289B3DF7149B06FEFF2* __this, const RuntimeMethod* method) 
{
	{
		BzSliceableBase__ctor_m6F111C5837AB106F5983FA37B013DDE8A0E0BC78(__this, NULL);
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
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::.ctor(UnityEngine.SkinnedMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter__ctor_m825529E621C02AF87A4C146BED56A800E5F95EBE (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___renderer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// public BzSliceSkinnedMeshAdapter(SkinnedMeshRenderer renderer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _position = renderer.gameObject.transform.position;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_0 = ___renderer0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->____position_0 = L_3;
		// var mesh = renderer.sharedMesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_4 = ___renderer0;
		NullCheck(L_4);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5;
		L_5 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_4, NULL);
		V_0 = L_5;
		// _vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = V_0;
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_6, NULL);
		__this->____vertices_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_3), (void*)L_7);
		// var bones = renderer.bones;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_8 = ___renderer0;
		NullCheck(L_8);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9;
		L_9 = SkinnedMeshRenderer_get_bones_mEB62CD46E7CE5C0F682C29FD0E14188707F05F09(L_8, NULL);
		V_1 = L_9;
		// var bindposes = mesh.bindposes;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = V_0;
		NullCheck(L_10);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11;
		L_11 = Mesh_get_bindposes_mC3B3C3E380881881345B8737895C28C521F70F8D(L_10, NULL);
		V_2 = L_11;
		// _charToW = new Matrix4x4[bones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_1;
		NullCheck(L_12);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_13 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		__this->____charToW_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charToW_4), (void*)L_13);
		// _w2l = renderer.gameObject.transform.worldToLocalMatrix;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_14 = ___renderer0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_16, NULL);
		__this->____w2l_1 = L_17;
		// _l2w = renderer.gameObject.transform.localToWorldMatrix;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_18 = ___renderer0;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_20, NULL);
		__this->____l2w_2 = L_21;
		// for (int i = 0; i < bones.Length; i++)
		V_3 = 0;
		goto IL_00b1;
	}

IL_007b:
	{
		// var tr = bones[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = V_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_4 = L_25;
		// if (tr == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_27)
		{
			goto IL_00ad;
		}
	}
	{
		// var toW = tr.localToWorldMatrix * bindposes[i];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_4;
		NullCheck(L_28);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29;
		L_29 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_28, NULL);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34;
		L_34 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_29, L_33, NULL);
		V_5 = L_34;
		// _charToW[i] = toW;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_35 = __this->____charToW_4;
		int32_t L_36 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_37);
	}

IL_00ad:
	{
		// for (int i = 0; i < bones.Length; i++)
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b1:
	{
		// for (int i = 0; i < bones.Length; i++)
		int32_t L_39 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_007b;
		}
	}
	{
		// _boneWeights = mesh.boneWeights;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_41 = V_0;
		NullCheck(L_41);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_42;
		L_42 = Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9(L_41, NULL);
		__this->____boneWeights_5 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boneWeights_5), (void*)L_42);
		// }
		return;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetWorldPos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetWorldPos_mEBE35047B6EFD9E8C592C56963AA2EA00532A530 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 position = _vertices[index];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____vertices_3;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// var boneWeight = _boneWeights[index];
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_4 = __this->____boneWeights_5;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// Vector3 newPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_8;
		// if (boneWeight.weight0 > 0f)
		float L_9;
		L_9 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex0].MultiplyPoint3x4(position) * boneWeight.weight0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11 = __this->____charToW_4;
		int32_t L_12;
		L_12 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612((&V_1), NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, NULL);
		float L_15;
		L_15 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_16, NULL);
		V_2 = L_17;
	}

IL_0059:
	{
		// if (boneWeight.weight1 > 0f)
		float L_18;
		L_18 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex1].MultiplyPoint3x4(position) * boneWeight.weight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_20 = __this->____charToW_4;
		int32_t L_21;
		L_21 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18((&V_1), NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), L_22, NULL);
		float L_24;
		L_24 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_25, NULL);
		V_2 = L_26;
	}

IL_0092:
	{
		// if (boneWeight.weight2 > 0f)
		float L_27;
		L_27 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_00cb;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex2].MultiplyPoint3x4(position) * boneWeight.weight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_29 = __this->____charToW_4;
		int32_t L_30;
		L_30 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310((&V_1), NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), L_31, NULL);
		float L_33;
		L_33 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_28, L_34, NULL);
		V_2 = L_35;
	}

IL_00cb:
	{
		// if (boneWeight.weight3 > 0f)
		float L_36;
		L_36 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		if ((!(((float)L_36) > ((float)(0.0f)))))
		{
			goto IL_0104;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex3].MultiplyPoint3x4(position) * boneWeight.weight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_38 = __this->____charToW_4;
		int32_t L_39;
		L_39 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F((&V_1), NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39))), L_40, NULL);
		float L_42;
		L_42 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_43, NULL);
		V_2 = L_44;
	}

IL_0104:
	{
		// return newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_2;
		return L_45;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetLocalPos(BzKovSoft.ObjectSlicer.BzMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetLocalPos_m6F4417F57D3F89755D0FAE60FADC5D0AAA748EDB (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___meshData0, int32_t ___index1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var v = GetWorldPos(meshData, index);
		BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* L_0 = ___meshData0;
		int32_t L_1 = ___index1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = BzSliceSkinnedMeshAdapter_GetWorldPos_m77BC8403387F3DC82099515B86947BC8D30BCEC2(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// return _w2l.MultiplyPoint3x4(v);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->____w2l_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_3, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetWorldPos(BzKovSoft.ObjectSlicer.BzMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetWorldPos_m77BC8403387F3DC82099515B86947BC8D30BCEC2 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___meshData0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 position = meshData.Vertices[index];
		BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* L_0 = ___meshData0;
		NullCheck(L_0);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = L_0->___Vertices_0;
		int32_t L_2 = ___index1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_1, L_2, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_0 = L_3;
		// var boneWeight = meshData.BoneWeights[index];
		BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* L_4 = ___meshData0;
		NullCheck(L_4);
		List_1_t8D702771A33594767DE0D8E2B80C67FADA3C5D2F* L_5 = L_4->___BoneWeights_9;
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_7;
		L_7 = List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2(L_5, L_6, List_1_get_Item_m3C79FF49EB36D1E9B2B9BB6B7F49D6A0364B30C2_RuntimeMethod_var);
		V_1 = L_7;
		// Vector3 newPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_8;
		// if (boneWeight.weight0 > 0f)
		float L_9;
		L_9 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex0].MultiplyPoint3x4(position) * boneWeight.weight0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11 = __this->____charToW_4;
		int32_t L_12;
		L_12 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612((&V_1), NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, NULL);
		float L_15;
		L_15 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_16, NULL);
		V_2 = L_17;
	}

IL_0059:
	{
		// if (boneWeight.weight1 > 0f)
		float L_18;
		L_18 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex1].MultiplyPoint3x4(position) * boneWeight.weight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_20 = __this->____charToW_4;
		int32_t L_21;
		L_21 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18((&V_1), NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), L_22, NULL);
		float L_24;
		L_24 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_25, NULL);
		V_2 = L_26;
	}

IL_0092:
	{
		// if (boneWeight.weight2 > 0f)
		float L_27;
		L_27 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_00cb;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex2].MultiplyPoint3x4(position) * boneWeight.weight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_29 = __this->____charToW_4;
		int32_t L_30;
		L_30 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310((&V_1), NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), L_31, NULL);
		float L_33;
		L_33 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_28, L_34, NULL);
		V_2 = L_35;
	}

IL_00cb:
	{
		// if (boneWeight.weight3 > 0f)
		float L_36;
		L_36 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		if ((!(((float)L_36) > ((float)(0.0f)))))
		{
			goto IL_0104;
		}
	}
	{
		// newPosition += _charToW[boneWeight.boneIndex3].MultiplyPoint3x4(position) * boneWeight.weight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_38 = __this->____charToW_4;
		int32_t L_39;
		L_39 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F((&V_1), NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39))), L_40, NULL);
		float L_42;
		L_42 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_43, NULL);
		V_2 = L_44;
	}

IL_0104:
	{
		// return newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_2;
		return L_45;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_InverseTransformDirection_m16CE7F52A904C91067DDEE73BD5491C97AAD6ED1 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, const RuntimeMethod* method) 
{
	{
		// return _w2l.MultiplyPoint3x4(p + _l2w.MultiplyPoint3x4(Vector3.zero));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->____w2l_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___p0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = (&__this->____l2w_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_0, L_5, NULL);
		return L_6;
	}
}
// System.Boolean BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::Check(BzKovSoft.ObjectSlicer.BzMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BzSliceSkinnedMeshAdapter_Check_mB9A1C369927E4B43991470D3CFA3CF8331D9C233 (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, BzMeshData_t29BED9B903E90E8DF32D23B87920C379A69A01FB* ___meshData0, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::RebuildMesh(UnityEngine.Mesh,UnityEngine.Material[],UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter_RebuildMesh_m4FC8E6B0204BB254C9E7E15AEF3A83F511E9F4AC (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials1, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___meshRenderer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((SkinnedMeshRenderer)meshRenderer).sharedMesh = mesh;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___meshRenderer2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___mesh0;
		NullCheck(((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_0, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var)));
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_0, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var)), L_1, NULL);
		// meshRenderer.sharedMaterials = materials;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = ___meshRenderer2;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = ___materials1;
		NullCheck(L_2);
		Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetObjectCenterInWorldSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BzSliceSkinnedMeshAdapter_GetObjectCenterInWorldSpace_mE270AF5103CEB39A9AC2A05E6BA185EC444D794F (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, const RuntimeMethod* method) 
{
	{
		// return _position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____position_0;
		return L_0;
	}
}
// System.Xml.Schema.XmlSchema BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::GetSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D* BzSliceSkinnedMeshAdapter_GetSchema_m51DD2FC9A3B9207640DE0A96B306D6C530FECD2B (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (XmlSchema_t5C9506D00418BF5FD524254D0C6C405C620C941D*)NULL;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::ReadXml(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter_ReadXml_mDF6ADB806A8772DDE9A3FA835E9AE05CF1CF9F9D (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC);
		s_Il2CppMethodInitialized = true;
	}
	XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* V_0 = NULL;
	{
		// reader.ReadToDescendant("position");
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_0 = ___reader0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, String_t* >::Invoke(41 /* System.Boolean System.Xml.XmlReader::ReadToDescendant(System.String) */, L_0, _stringLiteral88BDF3D0791A560245652E772545C49897854443);
		// var serializer = new XmlSerializer(typeof(Vector3), new XmlRootAttribute("position"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_4 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_4, _stringLiteral88BDF3D0791A560245652E772545C49897854443, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_5 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_5, L_3, L_4, NULL);
		V_0 = L_5;
		// _position = (Vector3)serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_6 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_7 = ___reader0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_6, L_7, NULL);
		__this->____position_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_8, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// serializer = new XmlSerializer(typeof(Vector3[]), new XmlRootAttribute("vertices"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_11 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_11, _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_12 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_12, L_10, L_11, NULL);
		V_0 = L_12;
		// _vertices = (Vector3[])serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_13 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_14 = ___reader0;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_13, L_14, NULL);
		__this->____vertices_3 = ((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)Castclass((RuntimeObject*)L_15, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_3), (void*)((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)Castclass((RuntimeObject*)L_15, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var)));
		// serializer = new XmlSerializer(typeof(Matrix4x4[]), new XmlRootAttribute("charToW"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_18 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_18, _stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_19 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_19, L_17, L_18, NULL);
		V_0 = L_19;
		// _charToW = (Matrix4x4[])serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_20 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_21 = ___reader0;
		NullCheck(L_20);
		RuntimeObject* L_22;
		L_22 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_20, L_21, NULL);
		__this->____charToW_4 = ((Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)Castclass((RuntimeObject*)L_22, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charToW_4), (void*)((Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)Castclass((RuntimeObject*)L_22, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var)));
		// serializer = new XmlSerializer(typeof(BoneWeight[]), new XmlRootAttribute("boneWeights"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_25 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_25, _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_26 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_26, L_24, L_25, NULL);
		V_0 = L_26;
		// _boneWeights = (BoneWeight[])serializer.Deserialize(reader);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_27 = V_0;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_28 = ___reader0;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_27, L_28, NULL);
		__this->____boneWeights_5 = ((BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)Castclass((RuntimeObject*)L_29, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boneWeights_5), (void*)((BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)Castclass((RuntimeObject*)L_29, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.BzSliceSkinnedMeshAdapter::WriteXml(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BzSliceSkinnedMeshAdapter_WriteXml_m441C415938F142B6D46C9BBE5EDB724BBAB3A3AD (BzSliceSkinnedMeshAdapter_tB17D8C53C907FFE0F8F3FB4A0C75162B3488EA3B* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var serializer = new XmlSerializer(typeof(Vector3), new XmlRootAttribute("position"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_2 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_2, _stringLiteral88BDF3D0791A560245652E772545C49897854443, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_3 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_3, L_1, L_2, NULL);
		// serializer.Serialize(writer, _position);
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_4 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_3, L_4, L_7, NULL);
		// serializer = new XmlSerializer(typeof(Vector3[]), new XmlRootAttribute("vertices"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_10 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_10, _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_11 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_11, L_9, L_10, NULL);
		// serializer.Serialize(writer, _vertices);
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_12 = ___writer0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->____vertices_3;
		NullCheck(L_11);
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_11, L_12, (RuntimeObject*)L_13, NULL);
		// serializer = new XmlSerializer(typeof(Matrix4x4[]), new XmlRootAttribute("charToW"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_16 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_16, _stringLiteral84BD23E372D8E0A508A06428E0D7C43E31950F56, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_17 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_17, L_15, L_16, NULL);
		// serializer.Serialize(writer, _charToW);
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_18 = ___writer0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_19 = __this->____charToW_4;
		NullCheck(L_17);
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_17, L_18, (RuntimeObject*)L_19, NULL);
		// serializer = new XmlSerializer(typeof(BoneWeight[]), new XmlRootAttribute("boneWeights"));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_22 = (XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF*)il2cpp_codegen_object_new(XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		XmlRootAttribute__ctor_m67B2E5D1DC3607ADFE62AD1DDA134C671BD23A9E(L_22, _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC, NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_23 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		XmlSerializer__ctor_mC60514511FE07D5E7CF9AAD9290B6230B7989FB0(L_23, L_21, L_22, NULL);
		// serializer.Serialize(writer, _boneWeights);
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_24 = ___writer0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_25 = __this->____boneWeights_5;
		NullCheck(L_23);
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_23, L_24, (RuntimeObject*)L_25, NULL);
		// }
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
// System.Boolean BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::CalculateCenter(UnityEngine.Rigidbody,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CenterOfMassColliderBasedHelper_CalculateCenter_mA6445BF0AC1C2939C3058EB32C65D74BA409E5A5 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___possibleColliders1, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___possibleRigids2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var colliders = GetColliders(rigidbody.transform, possibleColliders, possibleRigids);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = ___rigidbody0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_2 = ___possibleColliders1;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_3 = ___possibleRigids2;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_4;
		L_4 = CenterOfMassColliderBasedHelper_GetColliders_mEE85782B1A2C49D5AAFB5B6D481737F31C80CDB1(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// if (colliders.Count == 0)
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_5, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		// rigidbody.mass = 0.001f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = ___rigidbody0;
		NullCheck(L_7);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_7, (0.00100000005f), NULL);
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// Vector3 origin = rigidbody.transform.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = ___rigidbody0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		V_1 = L_10;
		// Vector3 v = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_11;
		// for (int i = 0; i < colliders.Count; i++)
		V_3 = 0;
		goto IL_0069;
	}

IL_0039:
	{
		// var collider = colliders[i];
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14;
		L_14 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_12, L_13, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		// Vector3 center = GetColliderCenter(collider);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = CenterOfMassColliderBasedHelper_GetColliderCenter_m9F114B9E754BF9202293CBE61C747D99708E0292(L_15, NULL);
		V_4 = L_16;
		// center = collider.transform.TransformPoint(center) - origin;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_19, L_20, NULL);
		V_4 = L_21;
		// v += center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_22, L_23, NULL);
		V_2 = L_24;
		// for (int i = 0; i < colliders.Count; i++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < colliders.Count; i++)
		int32_t L_26 = V_3;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_27, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0039;
		}
	}
	{
		// v /= colliders.Count;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_30, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_29, ((float)L_31), NULL);
		V_2 = L_32;
		// rigidbody.centerOfMass = rigidbody.transform.InverseTransformDirection(v);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33 = ___rigidbody0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34 = ___rigidbody0;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_2;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_35, L_36, NULL);
		NullCheck(L_33);
		Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188(L_33, L_37, NULL);
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Vector3 BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliderCenter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CenterOfMassColliderBasedHelper_GetColliderCenter_m9F114B9E754BF9202293CBE61C747D99708E0292 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84105173D49B35C842628E03AB273A634DDA06B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBBBDA89EC0528F6EC13A6F6C534B63E3F363875);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_0 = NULL;
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* V_1 = NULL;
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* V_2 = NULL;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_3 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// BoxCollider bCldr = collider as BoxCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		V_0 = ((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_0, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var));
		// SphereCollider sCldr = collider as SphereCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___collider0;
		V_1 = ((SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)IsInstClass((RuntimeObject*)L_1, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var));
		// CapsuleCollider cCldr = collider as CapsuleCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___collider0;
		V_2 = ((CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)IsInstClass((RuntimeObject*)L_2, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var));
		// MeshCollider mCldr = collider as MeshCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___collider0;
		V_3 = ((MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)IsInstClass((RuntimeObject*)L_3, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var));
		// if (!object.ReferenceEquals(bCldr, null))
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return bCldr.center;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7(L_5, NULL);
		return L_6;
	}

IL_0026:
	{
		// if (!object.ReferenceEquals(sCldr, null))
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// return sCldr.center;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_8 = V_1;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E(L_8, NULL);
		return L_9;
	}

IL_0030:
	{
		// if (!object.ReferenceEquals(cCldr, null))
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_10 = V_2;
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		// return cCldr.center;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_11 = V_2;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_11, NULL);
		return L_12;
	}

IL_003a:
	{
		// if (!object.ReferenceEquals(mCldr, null))
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_13 = V_3;
		if (!L_13)
		{
			goto IL_0052;
		}
	}
	{
		// return mCldr.sharedMesh.bounds.center;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_14 = V_3;
		NullCheck(L_14);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15;
		L_15 = MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E(L_14, NULL);
		NullCheck(L_15);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16;
		L_16 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_15, NULL);
		V_4 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_4), NULL);
		return L_17;
	}

IL_0052:
	{
		// UnityEngine.Debug.LogError("Collider type '" + collider.GetType().Name + "' not supported");
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18 = ___collider0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		String_t* L_21;
		L_21 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral84105173D49B35C842628E03AB273A634DDA06B0, L_20, _stringLiteralBBBBDA89EC0528F6EC13A6F6C534B63E3F363875, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_21, NULL);
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_22;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Collider> BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* CenterOfMassColliderBasedHelper_GetColliders_mEE85782B1A2C49D5AAFB5B6D481737F31C80CDB1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___possibleColliders1, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___possibleRigids2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_0 = NULL;
	{
		// List<Collider> colliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_0, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		V_0 = L_0;
		// GetCollidersRec(transform, colliders, possibleColliders, possibleRigids);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___transform0;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_2 = V_0;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_3 = ___possibleColliders1;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_4 = ___possibleRigids2;
		CenterOfMassColliderBasedHelper_GetCollidersRec_mF86D791F1C0AFA2CB68291A66F85A24C8FC17117(L_1, L_2, L_3, L_4, NULL);
		// return colliders;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_5 = V_0;
		return L_5;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CenterOfMassColliderBasedHelper::GetCollidersRec(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>,System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.Rigidbody[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CenterOfMassColliderBasedHelper_GetCollidersRec_mF86D791F1C0AFA2CB68291A66F85A24C8FC17117 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders1, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___possibleColliders2, RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___possibleRigids3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m6094707EC687D5CF2415C4F64B446A14CAE11BA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	{
		// var currentColliders = transform.GetComponents<Collider>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		NullCheck(L_0);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1;
		L_1 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C(L_0, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < currentColliders.Length; i++)
		V_1 = 0;
		goto IL_0023;
	}

IL_000b:
	{
		// var cldr = currentColliders[i];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (possibleColliders.Contains(cldr))
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = ___possibleColliders2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = V_2;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40(L_6, L_7, List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		// colliders.Add(cldr);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_9 = ___colliders1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = V_2;
		NullCheck(L_9);
		List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline(L_9, L_10, List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
	}

IL_001f:
	{
		// for (int i = 0; i < currentColliders.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < currentColliders.Length; i++)
		int32_t L_12 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0; i < transform.childCount; i++)
		V_3 = 0;
		goto IL_0054;
	}

IL_002d:
	{
		// var child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___transform0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_14, L_15, NULL);
		V_4 = L_16;
		// if (GetComponent<Rigidbody>(child, possibleRigids) != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_4;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_18 = ___possibleRigids3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19;
		L_19 = CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m6094707EC687D5CF2415C4F64B446A14CAE11BA3(L_17, L_18, CenterOfMassColliderBasedHelper_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m6094707EC687D5CF2415C4F64B446A14CAE11BA3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_20)
		{
			goto IL_0050;
		}
	}
	{
		// GetCollidersRec(child, colliders, possibleColliders, possibleRigids);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_4;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_22 = ___colliders1;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_23 = ___possibleColliders2;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_24 = ___possibleRigids3;
		CenterOfMassColliderBasedHelper_GetCollidersRec_mF86D791F1C0AFA2CB68291A66F85A24C8FC17117(L_21, L_22, L_23, L_24, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_26 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ___transform0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_27, NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_002d;
		}
	}
	{
		// }
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
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::.ctor(UnityEngine.GameObject,UnityEngine.Plane,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast__ctor_m4B51BE1E7BD78171D135A21CD9A85A7F831B7ABB (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___plane1, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___colliders2, const RuntimeMethod* method) 
{
	{
		// : base(go, plane, colliders)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_1 = ___plane1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = ___colliders2;
		StaticComponentManager__ctor_m600C60D6213DACA5F7CD06D2D7397E7B995C3DF6(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::OnSlicedMainThread(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Renderer[],UnityEngine.Renderer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast_OnSlicedMainThread_m19352783F8D81218F048CEF22A09DF196EA051C7 (CharacterComponentManagerFast_t785DF316F535ABCE4D26795F12FC754C4BCBDFC2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resultObjNeg0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resultObjPos1, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderersNeg2, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderersPos3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_0 = NULL;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* V_1 = NULL;
	{
		// var cldrsL = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_0, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		V_0 = L_0;
		// var cldrsR = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_1 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_1, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		V_1 = L_1;
		// RepairColliders(resultObjNeg, resultObjPos, cldrsL, cldrsR);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___resultObjNeg0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___resultObjPos1;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_4 = V_0;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_5 = V_1;
		StaticComponentManager_RepairColliders_m2135B594DD71F08938808945EC9D7E826F2976B1(__this, L_2, L_3, L_4, L_5, NULL);
		// OnCompletePerSide(cldrsL, resultObjNeg);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___resultObjNeg0;
		CharacterComponentManagerFast_OnCompletePerSide_mBECC6E23DAA49AEA570C7ACA77833B2BCA60B1F7(L_6, L_7, NULL);
		// OnCompletePerSide(cldrsR, resultObjPos);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___resultObjPos1;
		CharacterComponentManagerFast_OnCompletePerSide_mBECC6E23DAA49AEA570C7ACA77833B2BCA60B1F7(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::OnCompletePerSide(System.Collections.Generic.List`1<UnityEngine.Collider>,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterComponentManagerFast_OnCompletePerSide_mBECC6E23DAA49AEA570C7ACA77833B2BCA60B1F7 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8);
		s_Il2CppMethodInitialized = true;
	}
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* V_0 = NULL;
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* V_1 = NULL;
	List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* V_2 = NULL;
	List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_7 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_8 = NULL;
	int32_t V_9 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_10 = NULL;
	int32_t V_11 = 0;
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* V_12 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_13 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_20 = NULL;
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* V_21 = NULL;
	int32_t V_22 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_23 = NULL;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_26 = NULL;
	int32_t V_27 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_28 = NULL;
	{
		// Rigidbody[] rigids = go.GetComponentsInChildren<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go1;
		NullCheck(L_0);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F(L_0, GameObject_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m299DB510A8089DBC00E9D795DE8B0CA9620E982F_RuntimeMethod_var);
		V_0 = L_1;
		// List<Rigidbody> rigidsInside = new List<Rigidbody>();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_2 = (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*)il2cpp_codegen_object_new(List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025(L_2, List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		V_1 = L_2;
		// for (int i = 0; i < rigids.Length; i++)
		V_9 = 0;
		goto IL_0035;
	}

IL_0012:
	{
		// var rigid = rigids[i];
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_3 = V_0;
		int32_t L_4 = V_9;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_10 = L_6;
		// bool haveColliders = RigidHaveColliders(rigid.transform, colliders);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_10;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_9 = ___colliders0;
		bool L_10;
		L_10 = CharacterComponentManagerFast_RigidHaveColliders_mDB343AD57F8E4C9610EC005E01E470E3ED44D9E2(L_8, L_9, NULL);
		// if (haveColliders)
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		// rigidsInside.Add(rigid);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_11 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = V_10;
		NullCheck(L_11);
		List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline(L_11, L_12, List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
	}

IL_002f:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_13 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_14 = V_9;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// var freeEnds = new List<Rigidbody>();
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_16 = (List_1_t70C71660C368B9474B9889CBADDC30685A5D2363*)il2cpp_codegen_object_new(List_1_t70C71660C368B9474B9889CBADDC30685A5D2363_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025(L_16, List_1__ctor_mAEFDDA2AADB3407D6DDE862E67A61FBEC34B4025_RuntimeMethod_var);
		V_2 = L_16;
		// List<Joint> joints = new List<Joint>();
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_17 = (List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E*)il2cpp_codegen_object_new(List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656(L_17, List_1__ctor_mC711EDA8B44CBAA0B059640649244F9C87765656_RuntimeMethod_var);
		V_3 = L_17;
		// go.GetComponentsInChildren<Joint>(false, joints);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = ___go1;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_19 = V_3;
		NullCheck(L_18);
		GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573(L_18, (bool)0, L_19, GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mDE28043038A272D03D8327363B4572446EE56573_RuntimeMethod_var);
		// for (int i = 0; i < joints.Count; i++)
		V_11 = 0;
		goto IL_00eb;
	}

IL_0058:
	{
		// var joint = joints[i];
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_20 = V_3;
		int32_t L_21 = V_11;
		NullCheck(L_20);
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_22;
		L_22 = List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516(L_20, L_21, List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		V_12 = L_22;
		// if (joint.connectedBody == null)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_23 = V_12;
		NullCheck(L_23);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24;
		L_24 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_25)
		{
			goto IL_00e5;
		}
	}
	{
		// var rigidFrom = joint.GetComponent<Rigidbody>();
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_26 = V_12;
		NullCheck(L_26);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27;
		L_27 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_26, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_13 = L_27;
		// var rigidTo = joint.connectedBody.GetComponent<Rigidbody>();
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_28 = V_12;
		NullCheck(L_28);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29;
		L_29 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_28, NULL);
		NullCheck(L_29);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30;
		L_30 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_29, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_14 = L_30;
		// var insideFrom = rigidsInside.Contains(rigidFrom);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_31 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32 = V_13;
		NullCheck(L_31);
		bool L_33;
		L_33 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_31, L_32, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		V_15 = L_33;
		// var insideTo = rigidsInside.Contains(rigidTo);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_34 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_35 = V_14;
		NullCheck(L_34);
		bool L_36;
		L_36 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_34, L_35, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		V_16 = L_36;
		// if (!insideFrom | !insideTo)
		bool L_37 = V_15;
		bool L_38 = V_16;
		if (!((int32_t)(((((int32_t)L_37) == ((int32_t)0))? 1 : 0)|((((int32_t)L_38) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_00e5;
		}
	}
	{
		// if (insideFrom && !freeEnds.Contains(rigidFrom))
		bool L_39 = V_15;
		if (!L_39)
		{
			goto IL_00bf;
		}
	}
	{
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_40 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_41 = V_13;
		NullCheck(L_40);
		bool L_42;
		L_42 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_40, L_41, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		if (L_42)
		{
			goto IL_00bf;
		}
	}
	{
		// freeEnds.Add(rigidFrom);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_43 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_44 = V_13;
		NullCheck(L_43);
		List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline(L_43, L_44, List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
	}

IL_00bf:
	{
		// if (insideTo && !freeEnds.Contains(rigidTo))
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00d5;
		}
	}
	{
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_46 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_47 = V_14;
		NullCheck(L_46);
		bool L_48;
		L_48 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_46, L_47, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		if (L_48)
		{
			goto IL_00d5;
		}
	}
	{
		// freeEnds.Add(rigidTo);
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_49 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = V_14;
		NullCheck(L_49);
		List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_inline(L_49, L_50, List_1_Add_m7E180794A20B911D4907125A9C8D6580E7CC7D51_RuntimeMethod_var);
	}

IL_00d5:
	{
		// UnityEngine.Object.Destroy(joint);
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_51 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_51, NULL);
		// joints[i] = null; // mark as deleted
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_52 = V_3;
		int32_t L_53 = V_11;
		NullCheck(L_52);
		List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA(L_52, L_53, (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682*)NULL, List_1_set_Item_m27BD14AFBF0E098BF4D8A085304DDEEBE8721CFA_RuntimeMethod_var);
	}

IL_00e5:
	{
		// for (int i = 0; i < joints.Count; i++)
		int32_t L_54 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00eb:
	{
		// for (int i = 0; i < joints.Count; i++)
		int32_t L_55 = V_11;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_56 = V_3;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_inline(L_56, List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_0058;
		}
	}
	{
		// int rigidIndex = 0;
		V_4 = 0;
		// int subRigidCount = 0;
		V_5 = 0;
		// for (int i = 0; i < freeEnds.Count; i++)
		V_17 = 0;
		goto IL_0128;
	}

IL_0103:
	{
		// var part = freeEnds[i];
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_58 = V_2;
		int32_t L_59 = V_17;
		NullCheck(L_58);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_60;
		L_60 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_58, L_59, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		// int count = part.GetComponentsInChildren<Rigidbody>().Length;
		NullCheck(L_60);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_61;
		L_61 = Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391(L_60, Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		NullCheck(L_61);
		V_18 = ((int32_t)(((RuntimeArray*)L_61)->max_length));
		// if (count > subRigidCount)
		int32_t L_62 = V_18;
		int32_t L_63 = V_5;
		if ((((int32_t)L_62) <= ((int32_t)L_63)))
		{
			goto IL_0122;
		}
	}
	{
		// subRigidCount = count;
		int32_t L_64 = V_18;
		V_5 = L_64;
		// rigidIndex = i;
		int32_t L_65 = V_17;
		V_4 = L_65;
	}

IL_0122:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_66 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0128:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_67 = V_17;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_68, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		if ((((int32_t)L_67) < ((int32_t)L_69)))
		{
			goto IL_0103;
		}
	}
	{
		// Transform main = null;
		V_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// if (freeEnds.Count > 0)
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_70 = V_2;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_70, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_019b;
		}
	}
	{
		// main = freeEnds[rigidIndex].transform;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_72 = V_2;
		int32_t L_73 = V_4;
		NullCheck(L_72);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_74;
		L_74 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_72, L_73, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_74, NULL);
		V_6 = L_75;
		// for (int i = 0; i < freeEnds.Count; i++)
		V_19 = 0;
		goto IL_0191;
	}

IL_0152:
	{
		// if (i == rigidIndex)
		int32_t L_76 = V_19;
		int32_t L_77 = V_4;
		if ((((int32_t)L_76) == ((int32_t)L_77)))
		{
			goto IL_018b;
		}
	}
	{
		// var part = freeEnds[i].transform;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_78 = V_2;
		int32_t L_79 = V_19;
		NullCheck(L_78);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_80;
		L_80 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_78, L_79, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_80, NULL);
		V_20 = L_81;
		// if (IsAlreadyConnected(part, main, joints, new HashSet<Transform>()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82 = V_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = V_6;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_84 = V_3;
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_85 = (HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D*)il2cpp_codegen_object_new(HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753(L_85, HashSet_1__ctor_mE6695FC33E9E3713110A985DE15DF01BD0332753_RuntimeMethod_var);
		bool L_86;
		L_86 = CharacterComponentManagerFast_IsAlreadyConnected_mFE1992B436C1BE97571FB4648CEBCEB7DE3CFE8D(L_82, L_83, L_84, L_85, NULL);
		if (L_86)
		{
			goto IL_018b;
		}
	}
	{
		// Joint newJoint = CreateJoint(part, main);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = V_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = V_6;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_89;
		L_89 = CharacterComponentManagerFast_CreateJoint_m5744F4D104C37719912A119CB1D9163B266DE31C(L_87, L_88, NULL);
		V_21 = L_89;
		// joints.Add(newJoint);
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_90 = V_3;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_91 = V_21;
		NullCheck(L_90);
		List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_inline(L_90, L_91, List_1_Add_m4740ED80C3CC08FE5439F065BF6CA74E2C342123_RuntimeMethod_var);
	}

IL_018b:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_92 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0191:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_93 = V_19;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_94 = V_2;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_94, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		if ((((int32_t)L_93) < ((int32_t)L_95)))
		{
			goto IL_0152;
		}
	}

IL_019b:
	{
		// oldRoot = go.transform.Find("rootChrSlr");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = ___go1;
		NullCheck(L_96);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_96, NULL);
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_97, _stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8, NULL);
		V_7 = L_98;
		// if (oldRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_99, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_100)
		{
			goto IL_023d;
		}
	}
	{
		// var animator = go.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = ___go1;
		NullCheck(L_101);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_102;
		L_102 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_101, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		// oldRoot = animator.GetBoneTransform(HumanBodyBones.Hips);
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_102, 0, NULL);
		V_7 = L_103;
		// if (oldRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_105;
		L_105 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_104, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_105)
		{
			goto IL_0228;
		}
	}
	{
		// for (int i = 0; i < go.transform.childCount; i++)
		V_22 = 0;
		goto IL_0219;
	}

IL_01d7:
	{
		// var rigid = go.transform.GetChild(i).GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = ___go1;
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_106, NULL);
		int32_t L_108 = V_22;
		NullCheck(L_107);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_107, L_108, NULL);
		NullCheck(L_109);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_110;
		L_110 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_109, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_23 = L_110;
		// if (rigid == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_111 = V_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_112;
		L_112 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_111, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_112)
		{
			goto IL_0213;
		}
	}
	{
		// if (oldRoot != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_114;
		L_114 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_113, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_114)
		{
			goto IL_020a;
		}
	}
	{
		// throw new InvalidOperationException("Cannot find root object. Several objects with rigidbody was found");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_115 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_115);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_115, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EDDACB2A2E15FDDF14FA22D42346768E311B9E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CharacterComponentManagerFast_OnCompletePerSide_mBECC6E23DAA49AEA570C7ACA77833B2BCA60B1F7_RuntimeMethod_var)));
	}

IL_020a:
	{
		// oldRoot = rigid.transform;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_116 = V_23;
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_116, NULL);
		V_7 = L_117;
	}

IL_0213:
	{
		// for (int i = 0; i < go.transform.childCount; i++)
		int32_t L_118 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_118, 1));
	}

IL_0219:
	{
		// for (int i = 0; i < go.transform.childCount; i++)
		int32_t L_119 = V_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = ___go1;
		NullCheck(L_120);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121;
		L_121 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_120, NULL);
		NullCheck(L_121);
		int32_t L_122;
		L_122 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_121, NULL);
		if ((((int32_t)L_119) < ((int32_t)L_122)))
		{
			goto IL_01d7;
		}
	}

IL_0228:
	{
		// if (oldRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_124;
		L_124 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_123, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_124)
		{
			goto IL_023d;
		}
	}
	{
		// throw new InvalidOperationException("No root with rigidbody found");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_125 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_125);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_125, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7725E7B12B31C3EFD2967489A6512077E2DFCDDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_125, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CharacterComponentManagerFast_OnCompletePerSide_mBECC6E23DAA49AEA570C7ACA77833B2BCA60B1F7_RuntimeMethod_var)));
	}

IL_023d:
	{
		// var newRoot = new GameObject("rootChrSlr").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_126);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_126, _stringLiteral0B5F387D1F39E349452AFB5580235EB5C5B4F7B8, NULL);
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_126, NULL);
		V_8 = L_127;
		// newRoot.SetParent(go.transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128 = V_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = ___go1;
		NullCheck(L_129);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_129, NULL);
		NullCheck(L_128);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_128, L_130, (bool)0, NULL);
		// for (int i = 0; i < freeEnds.Count; i++)
		V_24 = 0;
		goto IL_027c;
	}

IL_0261:
	{
		// var freeEnd = freeEnds[i];
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_131 = V_2;
		int32_t L_132 = V_24;
		NullCheck(L_131);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_133;
		L_133 = List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E(L_131, L_132, List_1_get_Item_m7C4B020BB977A48A2046794E9027FDEF76C1D88E_RuntimeMethod_var);
		// freeEnd.transform.SetParent(newRoot, true);
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_133, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135 = V_8;
		NullCheck(L_134);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_134, L_135, (bool)1, NULL);
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_136 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_027c:
	{
		// for (int i = 0; i < freeEnds.Count; i++)
		int32_t L_137 = V_24;
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_138 = V_2;
		NullCheck(L_138);
		int32_t L_139;
		L_139 = List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_inline(L_138, List_1_get_Count_m40D1B68A9856688F8AE26F27704E7DD3D0E3C20F_RuntimeMethod_var);
		if ((((int32_t)L_137) < ((int32_t)L_139)))
		{
			goto IL_0261;
		}
	}
	{
		// if (main != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_140 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_141;
		L_141 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_140, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_141)
		{
			goto IL_029c;
		}
	}
	{
		// oldRoot.SetParent(main, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143 = V_6;
		NullCheck(L_142);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_142, L_143, (bool)1, NULL);
		goto IL_02a6;
	}

IL_029c:
	{
		// oldRoot.SetParent(newRoot, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145 = V_8;
		NullCheck(L_144);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_144, L_145, (bool)1, NULL);
	}

IL_02a6:
	{
		// for (int i = 0; i < rigids.Length; i++)
		V_25 = 0;
		goto IL_02cd;
	}

IL_02ab:
	{
		// var rigid = rigids[i];
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_146 = V_0;
		int32_t L_147 = V_25;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		V_26 = L_149;
		// if (!rigidsInside.Contains(rigid))
		List_1_t70C71660C368B9474B9889CBADDC30685A5D2363* L_150 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_151 = V_26;
		NullCheck(L_150);
		bool L_152;
		L_152 = List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC(L_150, L_151, List_1_Contains_mB763294B7D9C4C7F1D89446AE276E991E94587BC_RuntimeMethod_var);
		if (L_152)
		{
			goto IL_02c7;
		}
	}
	{
		// UnityEngine.Object.Destroy(rigid);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_153 = V_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_153, NULL);
		// rigids[i] = null; // mark as deleted
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_154 = V_0;
		int32_t L_155 = V_25;
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, NULL);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL);
	}

IL_02c7:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_156 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_02cd:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_157 = V_25;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_158 = V_0;
		NullCheck(L_158);
		if ((((int32_t)L_157) < ((int32_t)((int32_t)(((RuntimeArray*)L_158)->max_length)))))
		{
			goto IL_02ab;
		}
	}
	{
		// for (int i = 0; i < rigids.Length; i++)
		V_27 = 0;
		goto IL_02f9;
	}

IL_02d9:
	{
		// var rigid = rigids[i];
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_159 = V_0;
		int32_t L_160 = V_27;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_28 = L_162;
		// if (rigid == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_163 = V_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_164;
		L_164 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_163, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_164)
		{
			goto IL_02f3;
		}
	}
	{
		// CenterOfMassColliderBasedHelper.CalculateCenter(rigid, colliders, rigids);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_165 = V_28;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_166 = ___colliders0;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_167 = V_0;
		bool L_168;
		L_168 = CenterOfMassColliderBasedHelper_CalculateCenter_mA6445BF0AC1C2939C3058EB32C65D74BA409E5A5(L_165, L_166, L_167, NULL);
	}

IL_02f3:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_169 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_02f9:
	{
		// for (int i = 0; i < rigids.Length; i++)
		int32_t L_170 = V_27;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_171 = V_0;
		NullCheck(L_171);
		if ((((int32_t)L_170) < ((int32_t)((int32_t)(((RuntimeArray*)L_171)->max_length)))))
		{
			goto IL_02d9;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::IsAlreadyConnected(UnityEngine.Transform,UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Joint>,System.Collections.Generic.HashSet`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_IsAlreadyConnected_mFE1992B436C1BE97571FB4648CEBCEB7DE3CFE8D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___from0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___to1, List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* ___joints2, HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ___ocupied3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_0 = NULL;
	int32_t V_1 = 0;
	Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	{
		// List<Transform> connectedItems = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < joints.Count; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000a:
	{
		// var joint = joints[i];
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_1 = ___joints2;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_3;
		L_3 = List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516(L_1, L_2, List_1_get_Item_mFAC6DF8F1723130063025A6EE0FC18ADC9507516_RuntimeMethod_var);
		V_2 = L_3;
		// if (joint == null)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_4 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0054;
		}
	}
	{
		// if (joint.transform == from)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_6 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___from0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// connectedItems.Add(joint.connectedBody.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = V_0;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_11 = V_2;
		NullCheck(L_11);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
		L_12 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_10);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_10, L_13, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_003a:
	{
		// if (joint.connectedBody == from)
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_14 = V_2;
		NullCheck(L_14);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15;
		L_15 = Joint_get_connectedBody_mE39E0AC9869325CD018B9ADB383B6BE01D497B59(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___from0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0054;
		}
	}
	{
		// connectedItems.Add(joint.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_18 = V_0;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_19 = V_2;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_18);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_18, L_20, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_0054:
	{
		// for (int i = 0; i < joints.Count; ++i)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < joints.Count; ++i)
		int32_t L_22 = V_1;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_23 = ___joints2;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_inline(L_23, List_1_get_Count_m9FDC0A71AD6DE2F2AD481E553F8826F365C35CCB_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < connectedItems.Count; i++)
		V_3 = 0;
		goto IL_009f;
	}

IL_0065:
	{
		// var connectedItem = connectedItems[i];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_25 = V_0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_25, L_26, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		V_4 = L_27;
		// if (!ocupied.Add(connectedItem))
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_28 = ___ocupied3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_4;
		NullCheck(L_28);
		bool L_30;
		L_30 = HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801(L_28, L_29, HashSet_1_Add_m5443F87288D11427085E45448A20D01B803C7801_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_009b;
		}
	}
	{
		// if (connectedItem == to)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_0084;
		}
	}
	{
		// return true; // connected !!!
		return (bool)1;
	}

IL_0084:
	{
		// var connected = IsAlreadyConnected(connectedItem, to, joints, ocupied);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = ___to1;
		List_1_tB0BBB855A297E0A4FF8186215AD4813CC2732F6E* L_36 = ___joints2;
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_37 = ___ocupied3;
		bool L_38;
		L_38 = CharacterComponentManagerFast_IsAlreadyConnected_mFE1992B436C1BE97571FB4648CEBCEB7DE3CFE8D(L_34, L_35, L_36, L_37, NULL);
		// ocupied.Remove(connectedItem);
		HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* L_39 = ___ocupied3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = V_4;
		NullCheck(L_39);
		bool L_41;
		L_41 = HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E(L_39, L_40, HashSet_1_Remove_m6E3609DC93B37FF78D3FFC72387FCA6E72AFEB2E_RuntimeMethod_var);
		// if (connected)
		if (!L_38)
		{
			goto IL_009b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_009b:
	{
		// for (int i = 0; i < connectedItems.Count; i++)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_009f:
	{
		// for (int i = 0; i < connectedItems.Count; i++)
		int32_t L_43 = V_3;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_44, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0065;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::RigidHaveColliders(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterComponentManagerFast_RigidHaveColliders_mDB343AD57F8E4C9610EC005E01E470E3ED44D9E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tr0, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	{
		// var cldrs = tr.GetComponents<Collider>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___tr0;
		NullCheck(L_0);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1;
		L_1 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C(L_0, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		V_0 = L_1;
		// for (int j = 0; j < cldrs.Length; j++)
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		// Collider cldr = cldrs[j];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (colliders.Contains(cldr))
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = ___colliders1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = V_2;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40(L_6, L_7, List_1_Contains_m1F3CEA5349E6590255D80D8F1483E5B155E36D40_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_001a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// for (int j = 0; j < cldrs.Length; j++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001e:
	{
		// for (int j = 0; j < cldrs.Length; j++)
		int32_t L_10 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0; i < tr.childCount; i++)
		V_3 = 0;
		goto IL_0050;
	}

IL_0028:
	{
		// var ch = tr.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___tr0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, L_13, NULL);
		V_4 = L_14;
		// if (ch.GetComponent<Rigidbody>() != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_4;
		NullCheck(L_15);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16;
		L_16 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_15, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		// if (RigidHaveColliders(ch, colliders))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_4;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_19 = ___colliders1;
		bool L_20;
		L_20 = CharacterComponentManagerFast_RigidHaveColliders_mDB343AD57F8E4C9610EC005E01E470E3ED44D9E2(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_004c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004c:
	{
		// for (int i = 0; i < tr.childCount; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < tr.childCount; i++)
		int32_t L_22 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___tr0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0028;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Joint BzKovSoft.CharacterSlicer.CharacterComponentManagerFast::CreateJoint(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* CharacterComponentManagerFast_CreateJoint_m5744F4D104C37719912A119CB1D9163B266DE31C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemA0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* G_B2_0 = NULL;
	CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* G_B1_0 = NULL;
	{
		// var joint = itemA.gameObject.AddComponent<CharacterJoint>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___itemA0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_2;
		L_2 = GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759(L_1, GameObject_AddComponent_TisCharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134_m72949B4FB53128E93EC468EB31F852BB3D767759_RuntimeMethod_var);
		// var rigid = itemB.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___itemB1;
		NullCheck(L_3);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_3, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_0 = L_4;
		// joint.anchor = Vector3.zero;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_5 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C(L_5, L_6, NULL);
		// joint.autoConfigureConnectedAnchor = false;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_7 = L_5;
		NullCheck(L_7);
		Joint_set_autoConfigureConnectedAnchor_mF61D716174DE67CD94FF042881E9052357679E02(L_7, (bool)0, NULL);
		// joint.connectedAnchor = new Vector3();
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_8 = L_7;
		il2cpp_codegen_initobj((&V_4), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_4;
		NullCheck(L_8);
		Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90(L_8, L_9, NULL);
		// joint.connectedBody = rigid;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_10 = L_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = V_0;
		NullCheck(L_10);
		Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4(L_10, L_11, NULL);
		// joint.lowTwistLimit = new SoftJointLimit { limit = -limit / 2f };
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_12 = L_10;
		il2cpp_codegen_initobj((&V_5), sizeof(SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5));
		SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A((&V_5), (-22.5f), NULL);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_13 = V_5;
		NullCheck(L_12);
		CharacterJoint_set_lowTwistLimit_m8DC922DE93DAB94B329B3C672061AA9741A4C02E(L_12, L_13, NULL);
		// joint.highTwistLimit = new SoftJointLimit { limit = limit / 2f };
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_14 = L_12;
		il2cpp_codegen_initobj((&V_5), sizeof(SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5));
		SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A((&V_5), (22.5f), NULL);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_15 = V_5;
		NullCheck(L_14);
		CharacterJoint_set_highTwistLimit_m11EFDBE8CBF92BD43F147C20F247B250CB432C32(L_14, L_15, NULL);
		// SoftJointLimit jl = new SoftJointLimit { limit = limit };
		il2cpp_codegen_initobj((&V_5), sizeof(SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5));
		SoftJointLimit_set_limit_m34B7F00528D7F5B03D2AC39E44AFD96F0EAADF1A((&V_5), (45.0f), NULL);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_16 = V_5;
		V_1 = L_16;
		// joint.swing1Limit = jl;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_17 = L_14;
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_18 = V_1;
		NullCheck(L_17);
		CharacterJoint_set_swing1Limit_mBA202634AF5606DA1D59B94EF3E359C7B4FD012E(L_17, L_18, NULL);
		// joint.swing2Limit = jl;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_19 = L_17;
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_20 = V_1;
		NullCheck(L_19);
		CharacterJoint_set_swing2Limit_mBA612E2C6E50BAAAA798FAA03490150D379BC744(L_19, L_20, NULL);
		// SoftJointLimitSpring jls = new SoftJointLimitSpring { spring = 20f, damper = 1f };
		il2cpp_codegen_initobj((&V_6), sizeof(SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0));
		SoftJointLimitSpring_set_spring_m9A216142953ECC1CEE5080D603D18F9D1BD0A6EA((&V_6), (20.0f), NULL);
		SoftJointLimitSpring_set_damper_mA86F8E250BA84A6DC3E84DC1A40319A39CD5CFD6((&V_6), (1.0f), NULL);
		SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 L_21 = V_6;
		V_2 = L_21;
		// joint.twistLimitSpring = jls;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_22 = L_19;
		SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 L_23 = V_2;
		NullCheck(L_22);
		CharacterJoint_set_twistLimitSpring_mF37BF3C4F77EBA9F1926FA8F07081D315A9C2031(L_22, L_23, NULL);
		// joint.swingLimitSpring = jls;
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_24 = L_22;
		SoftJointLimitSpring_tCC7B05E1EEE2AF16BA14115986AE287DF068A1B0 L_25 = V_2;
		NullCheck(L_24);
		CharacterJoint_set_swingLimitSpring_mBD4D7812652BE202BEB031F2E1997B70F0F87258(L_24, L_25, NULL);
		// if (rigid == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = L_24;
		if (!L_27)
		{
			G_B2_0 = L_24;
			goto IL_00d8;
		}
	}
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_28 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CharacterComponentManagerFast_CreateJoint_m5744F4D104C37719912A119CB1D9163B266DE31C_RuntimeMethod_var)));
	}

IL_00d8:
	{
		// var dist = itemA.position - itemB.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = ___itemA0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = ___itemB1;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_30, L_32, NULL);
		V_3 = L_33;
		// joint.anchor = itemA.InverseTransformDirection(-dist);
		CharacterJoint_t315135BAAE808616763C5A66EC3D6700FDCE8134* L_34 = G_B2_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = ___itemA0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_36, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_35, L_37, NULL);
		NullCheck(L_34);
		Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C(L_34, L_38, NULL);
		// return joint;
		return L_34;
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
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer_Start_m41D4814B9E1FDF6E91FA671FC3CD561A530D53D3 (CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548* __this, const RuntimeMethod* method) 
{
	{
		// Init();
		CharacterSlicerInitializer_Init_m1E535829207312A832A05C5FBB4C53729D3F1AE7(NULL);
		// }
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer_Init_m1E535829207312A832A05C5FBB4C53729D3F1AE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* V_3 = NULL;
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* G_B4_0 = NULL;
	CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* G_B4_1 = NULL;
	Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* G_B3_0 = NULL;
	CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* G_B3_1 = NULL;
	{
		// if (_initialized)
		bool L_0 = ((CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_StaticFields*)il2cpp_codegen_static_fields_for(CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var))->____initialized_4;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// _initialized = true;
		((CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_StaticFields*)il2cpp_codegen_static_fields_for(CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548_il2cpp_TypeInfo_var))->____initialized_4 = (bool)1;
		// var go = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_1, NULL);
		V_0 = L_1;
		// var b1 = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_2, NULL);
		V_1 = L_2;
		// var b2 = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_3, NULL);
		V_2 = L_3;
		// b1.transform.parent = go.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_7, NULL);
		// b2.transform.parent = b1.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_9);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_9, L_11, NULL);
		// var r = go.AddComponent<SkinnedMeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_13;
		L_13 = GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6(L_12, GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		// r.sharedMesh = GetMesh();
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_14 = L_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15;
		L_15 = CharacterSlicerInitializer_GetMesh_m37965DAC39B76F56094ED3D0B93E6B5ECFBD41D3(NULL);
		NullCheck(L_14);
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_14, L_15, NULL);
		// r.rootBone = b1.transform;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_16 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_16);
		SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355(L_16, L_18, NULL);
		// r.bones = new[]
		// {
		//     b1.transform,
		//     b2.transform,
		// };
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_19 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)2);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_22);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_23 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_2;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_25);
		NullCheck(L_16);
		SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_16, L_23, NULL);
		// var animator = go.AddComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_0;
		NullCheck(L_26);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27;
		L_27 = GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F(L_26, GameObject_AddComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m027B50641990FFCBF6CC9175796A521299A1A72F_RuntimeMethod_var);
		// animator.updateMode = AnimatorUpdateMode.AnimatePhysics;
		NullCheck(L_27);
		Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056(L_27, 1, NULL);
		// go.AddComponent<Rigidbody>().isKinematic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		NullCheck(L_28);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29;
		L_29 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_28, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		NullCheck(L_29);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_29, (bool)1, NULL);
		// b1.AddComponent<Rigidbody>().isKinematic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_1;
		NullCheck(L_30);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_31;
		L_31 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_30, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		NullCheck(L_31);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_31, (bool)1, NULL);
		// b2.AddComponent<Rigidbody>().isKinematic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_2;
		NullCheck(L_32);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33;
		L_33 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_32, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		NullCheck(L_33);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_33, (bool)1, NULL);
		// go.AddComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_0;
		NullCheck(L_34);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_35;
		L_35 = GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23(L_34, GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		// var slicer = go.AddComponent<CharacterSlicerInitializerObj>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_0;
		NullCheck(L_36);
		CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* L_37;
		L_37 = GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0(L_36, GameObject_AddComponent_TisCharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D_m79D5894C73C6FA86358930F9B4D2098F24E1F5A0_RuntimeMethod_var);
		// slicer.asynchronously = false;
		CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* L_38 = L_37;
		NullCheck(L_38);
		((BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A*)L_38)->___asynchronously_5 = (bool)0;
		// slicer.defaultSliceMaterial = new Material(Shader.Find("Standard"));
		CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* L_39 = L_38;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_40;
		L_40 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_41, L_40, NULL);
		NullCheck(L_39);
		((BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A*)L_39)->___defaultSliceMaterial_4 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((BzSliceableBase_t4311F9718B37E2D52A78A8FA1DBEAB4FEB1BDE1A*)L_39)->___defaultSliceMaterial_4), (void*)L_41);
		// Action<BzSliceTryResult> action = (x) =>
		// {
		//     if (!x.sliced)
		//         throw new InvalidOperationException("Not sliced");
		// 
		//     Destroy(x.outObjectNeg);
		//     Destroy(x.outObjectPos);
		// };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_42 = ((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_43 = L_42;
		G_B3_0 = L_43;
		G_B3_1 = L_39;
		if (L_43)
		{
			G_B4_0 = L_43;
			G_B4_1 = L_39;
			goto IL_00f4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* L_44 = ((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_45 = (Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F*)il2cpp_codegen_object_new(Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Action_1__ctor_m8AB4590574801447E5178140DF68ADE98F8F7207(L_45, L_44, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var), NULL);
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_46 = L_45;
		((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_46);
		G_B4_0 = L_46;
		G_B4_1 = G_B3_1;
	}

IL_00f4:
	{
		V_3 = G_B4_0;
		// slicer.Slice(new Plane(Vector3.up, Vector3.zero), action);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_49;
		memset((&L_49), 0, sizeof(L_49));
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&L_49), L_47, L_48, /*hidden argument*/NULL);
		Action_1_t9EFE849F5F6433979F3D25C430387A4277D6540F* L_50 = V_3;
		NullCheck(G_B4_1);
		BzSliceableBase_Slice_m3F109FFAD0697B9DB5823CD7060EF3375F175B1E(G_B4_1, L_49, L_50, NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::GetMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* CharacterSlicerInitializer_GetMesh_m37965DAC39B76F56094ED3D0B93E6B5ECFBD41D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// mesh.vertices = new[]
		// {
		//     new Vector3(-1, -1, 0),
		//     new Vector3( 0,  1, 0),
		//     new Vector3( 1, -1, 0),
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (-1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		NullCheck(L_1);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_1, L_7, NULL);
		// mesh.triangles = new[] { 0, 1, 2 };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)2);
		NullCheck(L_9);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_9, L_12, NULL);
		// mesh.boneWeights = new[]
		// {
		//     new BoneWeight { boneIndex0 = 0, weight0 = 1 },
		//     new BoneWeight { boneIndex0 = 1, weight0 = 1 },
		//     new BoneWeight { boneIndex0 = 0, weight0 = 1 },
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13 = V_0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_14 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)SZArrayNew(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var, (uint32_t)3);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_15 = L_14;
		il2cpp_codegen_initobj((&V_1), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_1), 0, NULL);
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_1), (1.0f), NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_16 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F)L_16);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_17 = L_15;
		il2cpp_codegen_initobj((&V_1), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_1), 1, NULL);
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_1), (1.0f), NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F)L_18);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_19 = L_17;
		il2cpp_codegen_initobj((&V_1), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC((&V_1), 0, NULL);
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7((&V_1), (1.0f), NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_20 = V_1;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F)L_20);
		NullCheck(L_13);
		Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_13, L_19, NULL);
		// mesh.bindposes = new[]
		// {
		//     Matrix4x4.identity,
		//     Matrix4x4.identity,
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_22 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_23 = L_22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24;
		L_24 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_24);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_25 = L_23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_26);
		NullCheck(L_21);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_21, L_25, NULL);
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = V_0;
		return L_27;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializer__ctor_mD0A3E931174C5F0E045D2E067AB3E918392D299A (CharacterSlicerInitializer_t6766C928D9D147DF9436AE4B75E27C5C9971D548* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/CharacterSlicerInitializerObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSlicerInitializerObj__ctor_m3F3812B9BAB6C9ADB610189498F58C1E063E0420 (CharacterSlicerInitializerObj_t0E53EEA76F2A02606CA7F22CCAF58489F16C016D* __this, const RuntimeMethod* method) 
{
	{
		BzSliceableCharacterBase__ctor_m5A4946C42E3E557ED472C7B40785B0E1CCCB05BC(__this, NULL);
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
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m978028119F8EE5DF330E82C050C3770B1AD5859C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* L_0 = (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E*)il2cpp_codegen_object_new(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF0270A043A9E72A23703328CFC2E90A6ED413238(L_0, NULL);
		((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0270A043A9E72A23703328CFC2E90A6ED413238 (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BzKovSoft.CharacterSlicer.CharacterSlicerInitializer/<>c::<Init>b__2_0(BzKovSoft.ObjectSlicer.BzSliceTryResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C (U3CU3Ec_tECBD9165BA29610E032CD99D3BBBFEBFEEFB403E* __this, BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!x.sliced)
		BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = L_0->___sliced_1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Not sliced");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4166C49C7439DBBFA713A83D8BA4CE3FFE0C5E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__2_0_mB66DAFDD6B360675831DE68F6B9003A01835F65C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Destroy(x.outObjectNeg);
		BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* L_3 = ___x0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___outObjectNeg_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// Destroy(x.outObjectPos);
		BzSliceTryResult_tD39E6AA2B043E36E2040308E41E407AEE9C2E9B2* L_5 = ___x0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___outObjectPos_4;
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
