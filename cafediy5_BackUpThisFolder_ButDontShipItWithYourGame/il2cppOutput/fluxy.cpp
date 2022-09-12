#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector4>
struct IComparer_1_t56F8CE7C6F56BB755322EC41EEF4092C027F5E1E;
// System.Collections.Generic.List`1<Fluxy.FluxyContainer>
struct List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B;
// System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer>
struct List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Fluxy.FluxyContainer[]
struct FluxyContainerU5BU5D_tAA5428F72DA6EB19A3DFB49294337AAE7C3BC3B0;
// Fluxy.FluxyTarget[]
struct FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.LOD[]
struct LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Fluxy.FluxyStorage/Framebuffer[]
struct FramebufferU5BU5D_tF4160737E84F0E94514DDF1B218D9DFEC4B896C4;
// FluxySamples.AdvectRigidbody
struct AdvectRigidbody_t97298DDF577AB5DBCF36D60921717BA47C7E4DCB;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Fluxy.ExecutionOrder
struct ExecutionOrder_tE5AB41C1555F16B274C6B78E8D43978E8B3F2034;
// FluxySamples.FirstPersonLauncher
struct FirstPersonLauncher_tBA58DB76F938AD026A153D31B28BF603C7879652;
// FluxySamples.FluxyCharacter
struct FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B;
// Fluxy.FluxyContainer
struct FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4;
// Fluxy.FluxySolver
struct FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C;
// Fluxy.FluxyStorage
struct FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B;
// Fluxy.FluxyTarget
struct FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35;
// Fluxy.FluxyTargetDetector
struct FluxyTargetDetector_t803C22F696689E1E21081FD80008236D31E5EFF5;
// Fluxy.FluxyTargetProvider
struct FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.LODGroup
struct LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A;
// FluxySamples.LookAroundCamera
struct LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// FluxySamples.MouseInteraction
struct MouseInteraction_tC3D7C9232F51FD49871AEB49B7D2914F440761B1;
// FluxySamples.MoveAndRotate
struct MoveAndRotate_tE07D42C07F13AC213F6B27C7F4B464697DD27890;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OpacityFromVelocity
struct OpacityFromVelocity_tADE1DBAEEC1E53362545802039D01F565A058FA9;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RotateTarget
struct RotateTarget_tB2C8C6B866B7DDAB00BA161B78082F2312EB0B4E;
// FluxySamples.RotateWithKeys
struct RotateWithKeys_t0278F74DB2C337F531FC7536C8FA8F911D9EFC43;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SetRandomForce
struct SetRandomForce_tC0C55C77A2F9FC95DF50AB69581784E6D28039CA;
// FluxySamples.SetSplatRate
struct SetSplatRate_t8D3D69DCA5F9CF36C7088F357B374FB2E1D53E4D;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// FluxySamples.URPPlanarReflections
struct URPPlanarReflections_tD97C13263EC27DE867458309405F3AB93B5441A5;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Wiggle
struct Wiggle_tE0BFFCC59C59120F44BE21900208795E5DB4974B;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Fluxy.FluxySolver/SolverCallback
struct SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243;
// Fluxy.FluxyStorage/Framebuffer
struct Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E;
// Fluxy.FluxyTarget/SplatCallback
struct SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A;
// FluxySamples.MoveAndRotate/Vector3andSpace
struct Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275;
// Fluxy.RectPacking/RectComparer
struct RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral073636784DA1EA12164998BEE384713657E4BE14;
IL2CPP_EXTERN_C String_t* _stringLiteral0909531A7FAC205ABFB091488045C4DEB42A381B;
IL2CPP_EXTERN_C String_t* _stringLiteral16B81299E2C505260CF9D3AA4F9BB04D483167AB;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral268FBEAAF8CBA4E239A3AE3A35D76E38C6043292;
IL2CPP_EXTERN_C String_t* _stringLiteral288B53F014E2C53296CBC94785B0521CC621D509;
IL2CPP_EXTERN_C String_t* _stringLiteral2FFA3381ED789E2835D20CF624696D9F56600E99;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3B427821EA68EA870B2AAE3979AD28753A28F82D;
IL2CPP_EXTERN_C String_t* _stringLiteral3DACD58E82787075000040C47C7C24A5ED002803;
IL2CPP_EXTERN_C String_t* _stringLiteral3E1C4822070726EEF0A293019FE9EE0B336FF856;
IL2CPP_EXTERN_C String_t* _stringLiteral4161E0A39A3148ED3708A2BE4F66E18EC901740E;
IL2CPP_EXTERN_C String_t* _stringLiteral43999CE96C0E92E900C457A26365CDA7A4B90A46;
IL2CPP_EXTERN_C String_t* _stringLiteral47D99E498D0B0EC5E9D376989CC81FD31A3F8331;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral509D3CD1F9B1834143988C677FBC96E4C0D8206E;
IL2CPP_EXTERN_C String_t* _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC;
IL2CPP_EXTERN_C String_t* _stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95;
IL2CPP_EXTERN_C String_t* _stringLiteral647D0C3A21D734DBF2B11FDAE5A30EC0BF6E38CB;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5958CCD0401A1455BADA383AE28BEE616942BD;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF4FD144BC6CB636FC433CB5AA888D9AFEB5C68;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral94CB2375BA8D88D3DAEA9045641C4D463AAA21E1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A68B56B4D7A3A8E6F7B9C3043D9B8200D37714E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1464440687AC8C032A17B21145AE2932181DDB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F;
IL2CPP_EXTERN_C String_t* _stringLiteralB6380177CF575F7E727948E4333BEE58D7849455;
IL2CPP_EXTERN_C String_t* _stringLiteralB768596B99828C126004E8EDB7C975B230B6024A;
IL2CPP_EXTERN_C String_t* _stringLiteralC3A00AEC2690E02C6990AA7ABF32E6A078CE45B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC835D788CDC7B69BA4F951C6D4AEE2A5217BEA76;
IL2CPP_EXTERN_C String_t* _stringLiteralCAB0DA7A55B08660269138398A7073ACD568FBAB;
IL2CPP_EXTERN_C String_t* _stringLiteralD0EFBF63A763874A5B2EA57E0CEC328970F51C19;
IL2CPP_EXTERN_C String_t* _stringLiteralD6315798FF47A5A5AB2AD03739B4783B2AD1305B;
IL2CPP_EXTERN_C String_t* _stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C String_t* _stringLiteralED7D7113FB1B05E776E1F6195BC6408A8C80D23D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4D66C4520BB476A3388B0697F3EA5CD245B42F6;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFD60C99D01711E5D4CDB07D98EB9E9E35D43BA;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD041D8580AA4B4DB2DC848A4603EC68F497E1C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDDBE889687B9137E363F432AF5965FAA9F5DDD9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncGPUReadbackRequest_GetData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCD520E10A2FF9A6B23B92761C1E60AE9793DC1C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_mEDBDE6C58BAFDF702C9C393E43D334D03B6CC31D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisFluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078_mFE5515364CAA29F8BD1035F2DCCEC32D501562E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_m8FDCBDEA2A41D9956AEA0433E018586E1E359AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m64618916AFEC07957EE9290E125C22D0EC5469DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FluxySolver_U3CReadbackU3Eb__60_0_m397E712BCB484FF9C4245781B12AC920AC333313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9EC82018F81FA1E5303C41C63215864C8EB6D6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE6CD7442B1B644E5C65B906C579DEA3CDB7DD48C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF3B04374ADA9F52D7C2B8274E50BFF139BA053D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mC9A808CE04E22E8E526B00E70BC1AED1637F2B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m136832F1BF1C2F06560274F781669A55CDB351C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m79B4FDD274D98AB95B99EEAFB057AE717CE6CF57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB4D12A254786DB5ED4D5A3E78395402B087FB063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m76192A0E049F507EF693F0599892A3B5E58D46A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_LoadRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2C546B83A6466CCBD56499581F3A7041257CE976_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBBD17DAF4AE389D6D75C30233E4FA3531F1BEE08 
{
};

// System.Collections.Generic.List`1<Fluxy.FluxyContainer>
struct List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FluxyContainerU5BU5D_tAA5428F72DA6EB19A3DFB49294337AAE7C3BC3B0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FluxyContainerU5BU5D_tAA5428F72DA6EB19A3DFB49294337AAE7C3BC3B0* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer>
struct List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FramebufferU5BU5D_tF4160737E84F0E94514DDF1B218D9DFEC4B896C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FramebufferU5BU5D_tF4160737E84F0E94514DDF1B218D9DFEC4B896C4* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Fluxy.FluxyUtils
struct FluxyUtils_tFA74246C86DE4252454526DC1BD444188C58006E  : public RuntimeObject
{
};

// Fluxy.RectPacking
struct RectPacking_t20A8D188F7EFF7AF53756243C59CB016BF8002BB  : public RuntimeObject
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

// Fluxy.FluxyStorage/Framebuffer
struct Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E  : public RuntimeObject
{
	// UnityEngine.RenderTexture Fluxy.FluxyStorage/Framebuffer::velocityA
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___velocityA_0;
	// UnityEngine.RenderTexture Fluxy.FluxyStorage/Framebuffer::velocityB
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___velocityB_1;
	// UnityEngine.RenderTexture Fluxy.FluxyStorage/Framebuffer::stateA
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___stateA_2;
	// UnityEngine.RenderTexture Fluxy.FluxyStorage/Framebuffer::stateB
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___stateB_3;
	// UnityEngine.RenderTexture Fluxy.FluxyStorage/Framebuffer::tileID
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___tileID_4;
	// System.Int32 Fluxy.FluxyStorage/Framebuffer::desiredResolution
	int32_t ___desiredResolution_5;
	// System.Int32 Fluxy.FluxyStorage/Framebuffer::stateSupersampling
	int32_t ___stateSupersampling_6;
};

// Fluxy.RectPacking/RectComparer
struct RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Fluxy.ExecutionOrder
struct ExecutionOrder_tE5AB41C1555F16B274C6B78E8D43978E8B3F2034  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 Fluxy.ExecutionOrder::order
	int32_t ___order_0;
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

// UnityEngine.LOD
struct LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 
{
	// System.Single UnityEngine.LOD::screenRelativeTransitionHeight
	float ___screenRelativeTransitionHeight_0;
	// System.Single UnityEngine.LOD::fadeTransitionWidth
	float ___fadeTransitionWidth_1;
	// UnityEngine.Renderer[] UnityEngine.LOD::renderers
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.LOD
struct LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshaled_pinvoke
{
	float ___screenRelativeTransitionHeight_0;
	float ___fadeTransitionWidth_1;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_2;
};
// Native definition for COM marshalling of UnityEngine.LOD
struct LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshaled_com
{
	float ___screenRelativeTransitionHeight_0;
	float ___fadeTransitionWidth_1;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_2;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// Fluxy.FluxyContainer/BoundaryConditions
struct BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB 
{
	// Fluxy.FluxyContainer/BoundaryConditions/BoundaryType Fluxy.FluxyContainer/BoundaryConditions::horizontalBoundary
	int32_t ___horizontalBoundary_0;
	// Fluxy.FluxyContainer/BoundaryConditions/BoundaryType Fluxy.FluxyContainer/BoundaryConditions::verticalBoundary
	int32_t ___verticalBoundary_1;
};

// Fluxy.FluxyContainer/EdgeFalloff
struct EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B 
{
	// System.Single Fluxy.FluxyContainer/EdgeFalloff::densityEdgeWidth
	float ___densityEdgeWidth_0;
	// System.Single Fluxy.FluxyContainer/EdgeFalloff::densityFalloffRate
	float ___densityFalloffRate_1;
	// System.Single Fluxy.FluxyContainer/EdgeFalloff::velocityEdgeWidth
	float ___velocityEdgeWidth_2;
	// System.Single Fluxy.FluxyContainer/EdgeFalloff::velocityFalloffRate
	float ___velocityFalloffRate_3;
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

// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;
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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// FluxySamples.LookAroundCamera/CameraShot
struct CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E 
{
	// UnityEngine.Vector3 FluxySamples.LookAroundCamera/CameraShot::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion FluxySamples.LookAroundCamera/CameraShot::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
	// UnityEngine.Vector3 FluxySamples.LookAroundCamera/CameraShot::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Single FluxySamples.LookAroundCamera/CameraShot::fieldOfView
	float ___fieldOfView_3;
};

// FluxySamples.MoveAndRotate/Vector3andSpace
struct Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275  : public RuntimeObject
{
	// UnityEngine.Vector3 FluxySamples.MoveAndRotate/Vector3andSpace::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_0;
	// UnityEngine.Space FluxySamples.MoveAndRotate/Vector3andSpace::space
	int32_t ___space_1;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// Fluxy.FluxyStorage
struct FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 Fluxy.FluxyStorage::memoryBudget
	int32_t ___memoryBudget_6;
	// Fluxy.FluxyStorage/FluidTexturePrecision Fluxy.FluxyStorage::densityPrecision
	int32_t ___densityPrecision_7;
	// Fluxy.FluxyStorage/FluidTexturePrecision Fluxy.FluxyStorage::velocityPrecision
	int32_t ___velocityPrecision_8;
	// System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer> Fluxy.FluxyStorage::framebuffers
	List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* ___framebuffers_9;
};

// UnityEngine.LODGroup
struct LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Fluxy.FluxySolver/SolverCallback
struct SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243  : public MulticastDelegate_t
{
};

// Fluxy.FluxyTarget/SplatCallback
struct SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// FluxySamples.AdvectRigidbody
struct AdvectRigidbody_t97298DDF577AB5DBCF36D60921717BA47C7E4DCB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Fluxy.FluxyContainer FluxySamples.AdvectRigidbody::container
	FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container_4;
	// UnityEngine.Rigidbody FluxySamples.AdvectRigidbody::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// FluxySamples.FirstPersonLauncher
struct FirstPersonLauncher_tBA58DB76F938AD026A153D31B28BF603C7879652  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FluxySamples.FirstPersonLauncher::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_4;
	// System.Single FluxySamples.FirstPersonLauncher::power
	float ___power_5;
};

// FluxySamples.FluxyCharacter
struct FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FluxySamples.FluxyCharacter::m_MovingTurnSpeed
	float ___m_MovingTurnSpeed_4;
	// System.Single FluxySamples.FluxyCharacter::m_StationaryTurnSpeed
	float ___m_StationaryTurnSpeed_5;
	// System.Single FluxySamples.FluxyCharacter::m_JumpPower
	float ___m_JumpPower_6;
	// System.Single FluxySamples.FluxyCharacter::m_GravityMultiplier
	float ___m_GravityMultiplier_7;
	// System.Single FluxySamples.FluxyCharacter::m_RunCycleLegOffset
	float ___m_RunCycleLegOffset_8;
	// System.Single FluxySamples.FluxyCharacter::m_MoveSpeedMultiplier
	float ___m_MoveSpeedMultiplier_9;
	// System.Single FluxySamples.FluxyCharacter::m_AnimSpeedMultiplier
	float ___m_AnimSpeedMultiplier_10;
	// System.Single FluxySamples.FluxyCharacter::m_GroundCheckDistance
	float ___m_GroundCheckDistance_11;
	// UnityEngine.Rigidbody FluxySamples.FluxyCharacter::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_12;
	// UnityEngine.Animator FluxySamples.FluxyCharacter::m_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Animator_13;
	// System.Boolean FluxySamples.FluxyCharacter::m_IsGrounded
	bool ___m_IsGrounded_14;
	// System.Single FluxySamples.FluxyCharacter::m_OrigGroundCheckDistance
	float ___m_OrigGroundCheckDistance_15;
	// System.Single FluxySamples.FluxyCharacter::m_TurnAmount
	float ___m_TurnAmount_17;
	// System.Single FluxySamples.FluxyCharacter::m_ForwardAmount
	float ___m_ForwardAmount_18;
	// UnityEngine.Vector3 FluxySamples.FluxyCharacter::m_GroundNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_GroundNormal_19;
	// System.Single FluxySamples.FluxyCharacter::m_CapsuleHeight
	float ___m_CapsuleHeight_20;
	// UnityEngine.Vector3 FluxySamples.FluxyCharacter::m_CapsuleCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CapsuleCenter_21;
	// UnityEngine.CapsuleCollider FluxySamples.FluxyCharacter::m_Capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___m_Capsule_22;
	// System.Boolean FluxySamples.FluxyCharacter::m_Crouching
	bool ___m_Crouching_23;
};

// Fluxy.FluxyContainer
struct FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh Fluxy.FluxyContainer::customMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___customMesh_4;
	// UnityEngine.Vector2Int Fluxy.FluxyContainer::subdivisions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___subdivisions_5;
	// UnityEngine.Vector2 Fluxy.FluxyContainer::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_6;
	// Fluxy.FluxyContainer/LookAtMode Fluxy.FluxyContainer::lookAtMode
	int32_t ___lookAtMode_7;
	// UnityEngine.Transform Fluxy.FluxyContainer::lookAt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAt_8;
	// UnityEngine.Transform Fluxy.FluxyContainer::projectFrom
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___projectFrom_9;
	// UnityEngine.Texture2D Fluxy.FluxyContainer::clearTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___clearTexture_10;
	// UnityEngine.Color Fluxy.FluxyContainer::clearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clearColor_11;
	// UnityEngine.Texture2D Fluxy.FluxyContainer::surfaceNormals
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___surfaceNormals_12;
	// UnityEngine.Vector2 Fluxy.FluxyContainer::normalTiling
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalTiling_13;
	// System.Single Fluxy.FluxyContainer::normalScale
	float ___normalScale_14;
	// Fluxy.FluxyContainer/EdgeFalloff Fluxy.FluxyContainer::edgeFalloff
	EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B ___edgeFalloff_15;
	// Fluxy.FluxyContainer/BoundaryConditions Fluxy.FluxyContainer::boundaries
	BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB ___boundaries_16;
	// System.Single Fluxy.FluxyContainer::velocityScale
	float ___velocityScale_17;
	// System.Single Fluxy.FluxyContainer::accelerationScale
	float ___accelerationScale_18;
	// UnityEngine.Vector3 Fluxy.FluxyContainer::gravity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gravity_19;
	// UnityEngine.Vector3 Fluxy.FluxyContainer::externalForce
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___externalForce_20;
	// Fluxy.FluxyTarget[] Fluxy.FluxyContainer::targets
	FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* ___targets_21;
	// System.Single Fluxy.FluxyContainer::pressure
	float ___pressure_22;
	// System.Single Fluxy.FluxyContainer::viscosity
	float ___viscosity_23;
	// System.Single Fluxy.FluxyContainer::turbulence
	float ___turbulence_24;
	// System.Single Fluxy.FluxyContainer::adhesion
	float ___adhesion_25;
	// System.Single Fluxy.FluxyContainer::surfaceTension
	float ___surfaceTension_26;
	// System.Single Fluxy.FluxyContainer::buoyancy
	float ___buoyancy_27;
	// UnityEngine.Vector4 Fluxy.FluxyContainer::dissipation
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___dissipation_28;
	// Fluxy.FluxySolver Fluxy.FluxyContainer::m_Solver
	FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___m_Solver_29;
	// UnityEngine.Vector3 Fluxy.FluxyContainer::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_30;
	// UnityEngine.Vector3 Fluxy.FluxyContainer::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_31;
	// UnityEngine.Vector3 Fluxy.FluxyContainer::oldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldPosition_32;
	// UnityEngine.Quaternion Fluxy.FluxyContainer::oldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oldRotation_33;
	// UnityEngine.Vector3 Fluxy.FluxyContainer::oldVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldVelocity_34;
	// UnityEngine.Mesh Fluxy.FluxyContainer::planeMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___planeMesh_35;
	// UnityEngine.Vector3[] Fluxy.FluxyContainer::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_36;
	// UnityEngine.Vector3[] Fluxy.FluxyContainer::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_37;
	// UnityEngine.Vector4[] Fluxy.FluxyContainer::tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_38;
	// UnityEngine.Vector2[] Fluxy.FluxyContainer::uvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs_39;
	// System.Int32[] Fluxy.FluxyContainer::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_40;
};

// Fluxy.FluxySolver
struct FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Fluxy.FluxyStorage Fluxy.FluxySolver::storage
	FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* ___storage_5;
	// System.Int32 Fluxy.FluxySolver::desiredResolution
	int32_t ___desiredResolution_6;
	// System.Int32 Fluxy.FluxySolver::densitySupersampling
	int32_t ___densitySupersampling_7;
	// System.Boolean Fluxy.FluxySolver::disposeWhenCulled
	bool ___disposeWhenCulled_8;
	// System.Boolean Fluxy.FluxySolver::isReadable
	bool ___isReadable_9;
	// UnityEngine.Material Fluxy.FluxySolver::simulationMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___simulationMaterial_10;
	// System.Single Fluxy.FluxySolver::maxTimestep
	float ___maxTimestep_11;
	// System.Single Fluxy.FluxySolver::maxSteps
	float ___maxSteps_12;
	// Fluxy.FluxySolver/PressureSolver Fluxy.FluxySolver::pressureSolver
	int32_t ___pressureSolver_13;
	// System.Int32 Fluxy.FluxySolver::pressureIterations
	int32_t ___pressureIterations_14;
	// UnityEngine.LODGroup Fluxy.FluxySolver::lodGroup
	LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* ___lodGroup_15;
	// System.Int32 Fluxy.FluxySolver::visibleLOD
	int32_t ___visibleLOD_16;
	// System.Boolean Fluxy.FluxySolver::visible
	bool ___visible_17;
	// System.Collections.Generic.List`1<Fluxy.FluxyContainer> Fluxy.FluxySolver::containers
	List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* ___containers_18;
	// System.Int32 Fluxy.FluxySolver::framebufferID
	int32_t ___framebufferID_19;
	// System.Boolean Fluxy.FluxySolver::tilesDirty
	bool ___tilesDirty_20;
	// UnityEngine.MaterialPropertyBlock Fluxy.FluxySolver::propertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___propertyBlock_21;
	// UnityEngine.Vector4[] Fluxy.FluxySolver::rects
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___rects_22;
	// System.Int32[] Fluxy.FluxySolver::indices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices_23;
	// UnityEngine.Vector4[] Fluxy.FluxySolver::externalForce
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___externalForce_24;
	// UnityEngine.Vector4[] Fluxy.FluxySolver::buoyancy
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___buoyancy_25;
	// UnityEngine.Vector4[] Fluxy.FluxySolver::dissipation
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___dissipation_26;
	// System.Single[] Fluxy.FluxySolver::pressure
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pressure_27;
	// System.Single[] Fluxy.FluxySolver::viscosity
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___viscosity_28;
	// System.Single[] Fluxy.FluxySolver::turbulence
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___turbulence_29;
	// System.Single[] Fluxy.FluxySolver::adhesion
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___adhesion_30;
	// System.Single[] Fluxy.FluxySolver::surfaceTension
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___surfaceTension_31;
	// UnityEngine.Vector4[] Fluxy.FluxySolver::wrapmode
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___wrapmode_32;
	// UnityEngine.Vector4[] Fluxy.FluxySolver::densityFalloff
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___densityFalloff_33;
	// UnityEngine.Vector4[] Fluxy.FluxySolver::offsets
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___offsets_34;
	// Fluxy.FluxySolver/SolverCallback Fluxy.FluxySolver::OnStep
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* ___OnStep_35;
	// UnityEngine.Texture2D Fluxy.FluxySolver::<readbackTexture>k__BackingField
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CreadbackTextureU3Ek__BackingField_36;
};

// Fluxy.FluxyTarget
struct FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Fluxy.FluxyTarget::splatMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___splatMaterial_4;
	// System.Int32 Fluxy.FluxyTarget::rateOverSteps
	int32_t ___rateOverSteps_5;
	// System.Single Fluxy.FluxyTarget::rateOverTime
	float ___rateOverTime_6;
	// System.Single Fluxy.FluxyTarget::rateOverDistance
	float ___rateOverDistance_7;
	// System.Boolean Fluxy.FluxyTarget::overridePosition
	bool ___overridePosition_8;
	// UnityEngine.Vector2 Fluxy.FluxyTarget::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_9;
	// System.Single Fluxy.FluxyTarget::positionRandomness
	float ___positionRandomness_10;
	// System.Boolean Fluxy.FluxyTarget::overrideRotation
	bool ___overrideRotation_11;
	// System.Single Fluxy.FluxyTarget::rotation
	float ___rotation_12;
	// System.Single Fluxy.FluxyTarget::rotationRandomness
	float ___rotationRandomness_13;
	// System.Boolean Fluxy.FluxyTarget::scaleWithDistance
	bool ___scaleWithDistance_14;
	// UnityEngine.Vector2 Fluxy.FluxyTarget::scale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale_15;
	// System.Single Fluxy.FluxyTarget::scaleRandomness
	float ___scaleRandomness_16;
	// System.Single Fluxy.FluxyTarget::velocityWeight
	float ___velocityWeight_17;
	// UnityEngine.Texture Fluxy.FluxyTarget::velocityTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___velocityTexture_18;
	// System.Single Fluxy.FluxyTarget::maxRelativeVelocity
	float ___maxRelativeVelocity_19;
	// UnityEngine.Vector3 Fluxy.FluxyTarget::velocityScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocityScale_20;
	// System.Single Fluxy.FluxyTarget::maxRelativeAngularVelocity
	float ___maxRelativeAngularVelocity_21;
	// System.Single Fluxy.FluxyTarget::angularVelocityScale
	float ___angularVelocityScale_22;
	// UnityEngine.Vector3 Fluxy.FluxyTarget::force
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force_23;
	// System.Single Fluxy.FluxyTarget::densityWeight
	float ___densityWeight_24;
	// UnityEngine.Texture Fluxy.FluxyTarget::densityTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___densityTexture_25;
	// UnityEngine.Rendering.BlendMode Fluxy.FluxyTarget::srcBlend
	int32_t ___srcBlend_26;
	// UnityEngine.Rendering.BlendMode Fluxy.FluxyTarget::dstBlend
	int32_t ___dstBlend_27;
	// UnityEngine.Rendering.BlendOp Fluxy.FluxyTarget::blendOp
	int32_t ___blendOp_28;
	// UnityEngine.Color Fluxy.FluxyTarget::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_29;
	// UnityEngine.Vector3 Fluxy.FluxyTarget::oldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldPosition_30;
	// UnityEngine.Quaternion Fluxy.FluxyTarget::oldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oldRotation_31;
	// System.Single Fluxy.FluxyTarget::timeAccumulator
	float ___timeAccumulator_32;
	// System.Single Fluxy.FluxyTarget::distanceAccumulator
	float ___distanceAccumulator_33;
	// System.Int32 Fluxy.FluxyTarget::timeSplats
	int32_t ___timeSplats_34;
	// Fluxy.FluxyTarget/SplatCallback Fluxy.FluxyTarget::OnSplat
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* ___OnSplat_35;
};

// Fluxy.FluxyTargetProvider
struct FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FluxySamples.LookAroundCamera
struct LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera FluxySamples.LookAroundCamera::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// FluxySamples.LookAroundCamera/CameraShot FluxySamples.LookAroundCamera::currentShot
	CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E ___currentShot_5;
	// System.Single FluxySamples.LookAroundCamera::movementSpeed
	float ___movementSpeed_6;
	// System.Single FluxySamples.LookAroundCamera::rotationSpeed
	float ___rotationSpeed_7;
	// System.Single FluxySamples.LookAroundCamera::translationResponse
	float ___translationResponse_8;
	// System.Single FluxySamples.LookAroundCamera::rotationResponse
	float ___rotationResponse_9;
	// System.Single FluxySamples.LookAroundCamera::fovResponse
	float ___fovResponse_10;
};

// FluxySamples.MouseInteraction
struct MouseInteraction_tC3D7C9232F51FD49871AEB49B7D2914F440761B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Fluxy.FluxyTarget FluxySamples.MouseInteraction::target
	FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target_4;
};

// FluxySamples.MoveAndRotate
struct MoveAndRotate_tE07D42C07F13AC213F6B27C7F4B464697DD27890  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FluxySamples.MoveAndRotate/Vector3andSpace FluxySamples.MoveAndRotate::moveUnitsPerSecond
	Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275* ___moveUnitsPerSecond_4;
	// FluxySamples.MoveAndRotate/Vector3andSpace FluxySamples.MoveAndRotate::rotateDegreesPerSecond
	Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275* ___rotateDegreesPerSecond_5;
	// System.Boolean FluxySamples.MoveAndRotate::ignoreTimescale
	bool ___ignoreTimescale_6;
	// System.Single FluxySamples.MoveAndRotate::m_LastRealTime
	float ___m_LastRealTime_7;
};

// OpacityFromVelocity
struct OpacityFromVelocity_tADE1DBAEEC1E53362545802039D01F565A058FA9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AnimationCurve OpacityFromVelocity::velocityToOpacity
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___velocityToOpacity_4;
	// Fluxy.FluxyTarget OpacityFromVelocity::target
	FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target_5;
};

// RotateTarget
struct RotateTarget_tB2C8C6B866B7DDAB00BA161B78082F2312EB0B4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RotateTarget::speed
	float ___speed_4;
	// Fluxy.FluxyTarget RotateTarget::target
	FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target_5;
};

// FluxySamples.RotateWithKeys
struct RotateWithKeys_t0278F74DB2C337F531FC7536C8FA8F911D9EFC43  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FluxySamples.RotateWithKeys::speed
	float ___speed_4;
	// System.Single FluxySamples.RotateWithKeys::angularDrag
	float ___angularDrag_5;
	// System.Single FluxySamples.RotateWithKeys::angularAccel
	float ___angularAccel_6;
};

// SetRandomForce
struct SetRandomForce_tC0C55C77A2F9FC95DF50AB69581784E6D28039CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Fluxy.FluxyTarget SetRandomForce::target
	FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target_4;
};

// FluxySamples.SetSplatRate
struct SetSplatRate_t8D3D69DCA5F9CF36C7088F357B374FB2E1D53E4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FluxySamples.URPPlanarReflections
struct URPPlanarReflections_tD97C13263EC27DE867458309405F3AB93B5441A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Wiggle
struct Wiggle_tE0BFFCC59C59120F44BE21900208795E5DB4974B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Wiggle::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_4;
	// System.Single Wiggle::amplitude
	float ___amplitude_5;
	// System.Single Wiggle::speed
	float ___speed_6;
	// System.Single Wiggle::offset
	float ___offset_7;
	// UnityEngine.Vector3 Wiggle::initialPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPos_8;
};

// Fluxy.FluxyTargetDetector
struct FluxyTargetDetector_t803C22F696689E1E21081FD80008236D31E5EFF5  : public FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078
{
	// UnityEngine.Vector3 Fluxy.FluxyTargetDetector::size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size_4;
	// System.Int32 Fluxy.FluxyTargetDetector::maxTargets
	int32_t ___maxTargets_5;
	// UnityEngine.LayerMask Fluxy.FluxyTargetDetector::layers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layers_6;
	// UnityEngine.Collider[] Fluxy.FluxyTargetDetector::colliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___colliders_7;
	// Fluxy.FluxyTarget[] Fluxy.FluxyTargetDetector::targets
	FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* ___targets_8;
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.LOD[]
struct LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842  : public RuntimeArray
{
	ALIGN_FIELD (8) LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 m_Items[1];

	inline LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderers_2), (void*)NULL);
	}
	inline LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderers_2), (void*)NULL);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Fluxy.FluxyTarget[]
struct FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9  : public RuntimeArray
{
	ALIGN_FIELD (8) FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* m_Items[1];

	inline FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993  : public RuntimeArray
{
	ALIGN_FIELD (8) Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D m_Items[1];

	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777_gshared (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF AsyncGPUReadbackRequest_GetData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCD520E10A2FF9A6B23B92761C1E60AE9793DC1C9_gshared (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___layer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Single>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2C546B83A6466CCBD56499581F3A7041257CE976_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___data0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<UnityEngine.Vector4,System.Int32>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD041D8580AA4B4DB2DC848A4603EC68F497E1C4B_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___keys0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDDBE889687B9137E363F432AF5965FAA9F5DDD9A_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m136832F1BF1C2F06560274F781669A55CDB351C2_gshared (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_gshared_inline (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rect>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_gshared_inline (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Rect>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_gshared (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF3B04374ADA9F52D7C2B8274E50BFF139BA053D7_gshared (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m76192A0E049F507EF693F0599892A3B5E58D46A1_gshared (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, int32_t ___index0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<Fluxy.FluxyTarget>()
inline FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 Fluxy.FluxyTarget::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyTarget_get_velocity_mDFACD8CDE76B3088A792AB2951EA836EE61620A0 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyContainer::SetSolver(Fluxy.FluxySolver,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_SetSolver_mF9643B2B01F6C0A37935287F7DE42F1457CD7522 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___newSolver0, bool ___setMember1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetVertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_m881F2A14D298007BFCCFA5FE03825BCCD0B19D12 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___inVertices0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetNormals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_m7223127D3403D2EC512DBEDFC063F4D04E2B8554 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___inNormals0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetTangents(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTangents_mBFE6D1B758D8B48CAEC4E093B8C8260388F56425 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___inTangents0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m6AFD5BFC4D7FB9EE57D8F19AB1BECD0675771D48 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UnregisterContainer(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UnregisterContainer_m0A611B2B5042CF3C988B0C6D97FA9A87265AAB08 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean Fluxy.FluxySolver::RegisterContainer(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FluxySolver_RegisterContainer_m1606A8D04613A6A3C046D608D8636414DB0D3171 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) ;
// Fluxy.FluxyStorage/Framebuffer Fluxy.FluxySolver::get_framebuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* FluxySolver_get_framebuffer_m7C5CD52E551AD83ADD6CAEBD05A149C9117CF66C (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// System.Int32 Fluxy.FluxySolver::GetContainerID(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxySolver_GetContainerID_mCD22B990EEF80FACD2561A7C0E89DCC8214BC486 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UpdateTileData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateTileData_m393FA993844732435BD24C60404EF80E6BC39D9C (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438 (String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::GetProjectionOrigin(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_GetProjectionOrigin_mD52617575E78B61468727C050205E37CB1232819 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___targetPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.MeshCollider>(T&)
inline bool Component_TryGetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m64618916AFEC07957EE9290E125C22D0EC5469DD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, float ___distance0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyContainer::ResetVelocityAndAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_ResetVelocityAndAcceleration_mA080109975F824A79BCB3FC44F03200D97CC575B (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) ;
// Fluxy.FluxySolver Fluxy.FluxyContainer::get_solver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2_inline (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Fluxy.FluxySolver::GetUVRectForContainer(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 FluxySolver_GetUVRectForContainer_m32F5CBAA4FC4BDCF55B3F45670FB61BC4FB72C66 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::TransformWorldPointToUVSpace(UnityEngine.Vector3&,UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_TransformWorldPointToUVSpace_m67826EB44B4E4CB272BE90E27BE82642BFB06B77 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___point0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvRect1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Fluxy.FluxySolver::get_readbackTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixelBilinear_m6AE4AF4FD181C478DF0F2C5C329F22A263ABFF5C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, float ___u0, float ___v1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::TransformUVVectorToWorldSpace(UnityEngine.Vector3&,UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_TransformUVVectorToWorldSpace_m3637669118C0007145488C5E5C3B1842C675E7C1 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vector0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvRect1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m916F9A7A8ACC51F304BB5BB4536854A045EF844B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_one_mF2EE0D4A57234324336A491DAB06305AB037C373_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// Fluxy.FluxyStorage/Framebuffer Fluxy.FluxyStorage::GetFramebuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* FluxyStorage_GetFramebuffer_m0CE6BF9B51E3130DDF7D2050BDEC90673C852415 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___framebufferID0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LODGroup>()
inline LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* Component_GetComponent_TisLODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_mEDBDE6C58BAFDF702C9C393E43D334D03B6CC31D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Int32 Fluxy.FluxySolver::GetCurrentLOD(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxySolver_GetCurrentLOD_m4EBDEBE4DF09DDA1AA52D1E77A20E4377D36E91B (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UpdateFramebuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateFramebuffer_mE7126F0C3E923ABCD815B661653520D79FEA0508 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::DisposeOfFramebuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_DisposeOfFramebuffer_m39BA98A3C4CDB09E4846F8D95E17B9B36DDB1488 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Fluxy.FluxyContainer>::get_Count()
inline int32_t List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean Fluxy.FluxySolver::IsFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FluxySolver_IsFull_mCB9B1199E0BF2B6B72B3D4DFEF73CFD033FE69E8 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Fluxy.FluxyContainer>::Contains(T)
inline bool List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1 (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Fluxy.FluxyContainer>::Add(T)
inline void List_1_Add_m9EC82018F81FA1E5303C41C63215864C8EB6D6BB_inline (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Fluxy.FluxyContainer>::Remove(T)
inline bool List_1_Remove_mC9A808CE04E22E8E526B00E70BC1AED1637F2B98 (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Fluxy.FluxyContainer>::IndexOf(T)
inline int32_t List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21 (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Int32 Fluxy.FluxyStorage::RequestFramebuffer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_RequestFramebuffer_mD568BCC76830E926174E6166A9F17691394868BE (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___desiredResolution0, int32_t ___stateSupersampling1, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyStorage::ResizeStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyStorage_ResizeStorage_m8D3525077EBD827D9B33792CF7A0B0EBEB3C9375 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::set_readbackTexture(UnityEngine.Texture2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FluxySolver_set_readbackTexture_m2163B4EE47AD6082614FE461B3AE7D560CE281A4_inline (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyStorage::DisposeFramebuffer(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyStorage_DisposeFramebuffer_m80E997092396F3E651072FDCF00759A6B68BA577 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___framebufferID0, bool ___expand1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Single UnityEngine.QualitySettings::get_lodBias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float QualitySettings_get_lodBias_m0DB63DEEF86BE1C091409BFAE8539F187886DA7B (const RuntimeMethod* method) ;
// System.Single Fluxy.FluxyUtils::RelativeScreenHeight(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FluxyUtils_RelativeScreenHeight_m31996CE2FC4ACD8615CCAE5755EC9216BCA1D710 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___distance1, float ___size2, const RuntimeMethod* method) ;
// UnityEngine.LOD[] UnityEngine.LODGroup::GetLODs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842* LODGroup_GetLODs_m46EE101B04CD6712165D7BD07B230A8AC3336F15 (LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LODGroup::get_lodCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LODGroup_get_lodCount_m96FCA4B8FDE68EB164627874A18863BFE44B3866 (LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver/SolverCallback::Invoke(Fluxy.FluxySolver)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_inline (SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UpdateExternalForces(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateExternalForces_mAD0AF2420A330DCD4D08AE7F5206915BA70E449A (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_m303329453ADB3495208897E282FD24910878F537 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Fluxy.FluxyContainer>::get_Item(System.Int32)
inline FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* (*) (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___pass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Ortho_m2C3F7FDC23CFC7E6D59009362559FDC0B6A3DC25 (float ___left0, float ___right1, float ___bottom2, float ___top3, float ___zNear4, float ___zFar5, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadProjectionMatrix_m50BB4BC12EC636964C60C0DBBC4D5777706B00E4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___mat0, const RuntimeMethod* method) ;
// UnityEngine.Mesh Fluxy.FluxyContainer::get_containerMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* FluxyContainer_get_containerMesh_m3C06F50E2303ECA98C3C3424CC7154C554F13AFA (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshNow_m38D27FF56329FF8CC920EF046CDB49124553BE25 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 Fluxy.RectPacking::Pack(UnityEngine.Vector4[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectPacking_Pack_mBD78886B59BC1CB9FAAB436D6DCCDE59F62EB9ED (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___rects0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices1, int32_t ___first2, int32_t ___length3, int32_t ___margin4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalVectorArray(System.String,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVectorArray_mA17EBE19C8992C84E67AEEF315F7A1A8C3EA8B97 (String_t* ___name0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___values1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Fluxy.FluxyContainer/BoundaryConditions::op_Implicit(Fluxy.FluxyContainer/BoundaryConditions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BoundaryConditions_op_Implicit_m96C0D19FE4E43FB467377BF4D36AE9B83DE56474 (BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB ___b0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Fluxy.FluxyContainer/EdgeFalloff::op_Implicit(Fluxy.FluxyContainer/EdgeFalloff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EdgeFalloff_op_Implicit_m5A7CB1C60C90E2A3883CF2FCE577BB57E41857A1 (EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B ___d0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::UpdateVelocityAndGetAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_UpdateVelocityAndGetAcceleration_mCB034ED31A86DBEDCCDDE55AE606A5066EAD5331 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::TransformWorldVectorToUVSpace(UnityEngine.Vector3&,UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_TransformWorldVectorToUVSpace_m41523FEAECA65580126FB15954133E8E95970A37 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vector0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvRect1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::get_velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_get_velocity_mDC273E5096077DC213EB1220FE1B90423D977D3E_inline (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Renderer>(T&)
inline bool Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetInt_m5C415E420E7C21154F1B034C6141C7D094CF40F9 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_mB802D9FA760800EA0AB78F5CE229F5F8108F7178 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloatArray(System.String,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloatArray_m5A579B1AF94A2ACCD013EBE6F46651FB2C386041 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVectorArray(System.String,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVectorArray_mF95A113AD4508490F0F8749EF36D4DFEE6E83D6E (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___values1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021 (String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Fluxy.FluxyTargetProvider>(T&)
inline bool Component_TryGetComponent_TisFluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078_mFE5515364CAA29F8BD1035F2DCCEC32D501562E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777 (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Rendering.AsyncGPUReadbackRequest UnityEngine.Rendering.AsyncGPUReadback::Request(UnityEngine.Texture,System.Int32,UnityEngine.TextureFormat,System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 AsyncGPUReadback_Request_mFF2155AC423B19101CCD710F0FA146795CA70773 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___mipIndex1, int32_t ___dstFormat2, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___callback3, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UpdateLOD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateLOD_m6AD1ED3E5068A67407492023338A4596F40089C6 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UpdateContainerTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateContainerTransforms_mB0D00A9CF552CEE7B4BD19053607D7B4FDD5EF53 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::Splat(Fluxy.FluxyStorage/Framebuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_Splat_m29A24E2830D2D920AC412465BBACBB3C315E400E (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UpdateContainers(Fluxy.FluxyStorage/Framebuffer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateContainers_mF117ED8ACCBCCB08890414E88AF7AEB3FDA6AF8F (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb0, float ___deltaTime1, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::Readback(Fluxy.FluxyStorage/Framebuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_Readback_m3379A1BE2AC8A0056C86EE7BCBA2AAB169D7439F (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb0, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxySolver::UpdateSolver(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateSolver_mB884A84F02A27C47E3536DAA9A4E8FA284B327F3 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, float ___deltaTime0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fluxy.FluxyContainer>::.ctor()
inline void List_1__ctor_mB4D12A254786DB5ED4D5A3E78395402B087FB063 (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rendering.AsyncGPUReadbackRequest::get_hasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Single>(System.Int32)
inline NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF AsyncGPUReadbackRequest_GetData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCD520E10A2FF9A6B23B92761C1E60AE9793DC1C9 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___layer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7*, int32_t, const RuntimeMethod*))AsyncGPUReadbackRequest_GetData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCD520E10A2FF9A6B23B92761C1E60AE9793DC1C9_gshared)(__this, ___layer0, method);
}
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Single>(Unity.Collections.NativeArray`1<T>)
inline void Texture2D_LoadRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2C546B83A6466CCBD56499581F3A7041257CE976 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___data0, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))Texture2D_LoadRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2C546B83A6466CCBD56499581F3A7041257CE976_gshared)(__this, ___data0, method);
}
// System.Void Fluxy.FluxyStorage/Framebuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Framebuffer__ctor_mA4412BE8B0E1345D378FDEDC70BC6050E5907E03 (Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* __this, int32_t ___desiredResolution0, int32_t ___stateSupersampling1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer>::get_Item(System.Int32)
inline Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90 (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* (*) (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer>::get_Count()
inline int32_t List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_inline (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer>::Add(T)
inline void List_1_Add_mE6CD7442B1B644E5C65B906C579DEA3CDB7DD48C_inline (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer>::set_Item(System.Int32,T)
inline void List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5 (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* __this, int32_t ___index0, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5*, int32_t, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Int32 Fluxy.FluxyStorage::GetBytesPerPixel(Fluxy.FluxyStorage/FluidTexturePrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_GetBytesPerPixel_m56B2226E4603068A225CF172172D8E5158910526 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___precision0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Int32 Fluxy.FluxyStorage::PrevPowerTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_PrevPowerTwo_mB11AE884310CD53D4C7D4DD2BA55BE462AA30D88 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyStorage::ReallocateFramebuffer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyStorage_ReallocateFramebuffer_m0B65567E16D8565A443BD2139838BFCEB3852488 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___id0, int32_t ___resolution1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763 (int32_t ___format0, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat Fluxy.FluxyStorage::GetRenderTextureFormat(Fluxy.FluxyStorage/FluidTexturePrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_GetRenderTextureFormat_m63EBA17A4DC84E81FF0D9C05C935170D84F1B583 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___precision0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fluxy.FluxyStorage/Framebuffer>::.ctor()
inline void List_1__ctor_m79B4FDD274D98AB95B99EEAFB057AE717CE6CF57 (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyTarget::SetOldState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_SetOldState_m10DE250A0B4B227A99A9B931DAC28F858E88F28B (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyTarget::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyTarget_get_angularVelocity_m9603A8359A558A84BE331803F560EF82B86295B9 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::get_angularVelocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_get_angularVelocity_m2E3BA4F1D578664A3B194E49762A357C866EBC2E_inline (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single Fluxy.FluxyTarget::GetAspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FluxyTarget_GetAspectRatio_m19555497AD4ABD36E20F8DA9D4EE3825A4985FC2 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Random_get_insideUnitCircle_mB05E074D2463729E20EC637F10CFEE90FC587E51 (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyTarget/SplatCallback::Invoke(Fluxy.FluxyTarget,Fluxy.FluxyContainer,Fluxy.FluxyStorage/Framebuffer,UnityEngine.Vector4& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_inline (SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void Fluxy.RectPacking/RectComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectComparer__ctor_m6D22810C9096305A5132B708C9D9C3D8FEF9488D (RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<UnityEngine.Vector4,System.Int32>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
inline void Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD041D8580AA4B4DB2DC848A4603EC68F497E1C4B (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___keys0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD041D8580AA4B4DB2DC848A4603EC68F497E1C4B_gshared)(___keys0, ___items1, ___index2, ___length3, ___comparer4, method);
}
// System.Void System.Array::Sort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
inline void Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDDBE889687B9137E363F432AF5965FAA9F5DDD9A (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDDBE889687B9137E363F432AF5965FAA9F5DDD9A_gshared)(___array0, ___index1, ___length2, ___comparer3, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::.ctor()
inline void List_1__ctor_m136832F1BF1C2F06560274F781669A55CDB351C2 (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*, const RuntimeMethod*))List_1__ctor_m136832F1BF1C2F06560274F781669A55CDB351C2_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::Add(T)
inline void List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_inline (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*))List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rect>::get_Count()
inline int32_t List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_inline (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*, const RuntimeMethod*))List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Rect>::get_Item(System.Int32)
inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60 (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D (*) (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*, int32_t, const RuntimeMethod*))List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF3B04374ADA9F52D7C2B8274E50BFF139BA053D7 (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF3B04374ADA9F52D7C2B8274E50BFF139BA053D7_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rect>::set_Item(System.Int32,T)
inline void List_1_set_Item_m76192A0E049F507EF693F0599892A3B5E58D46A1 (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, int32_t ___index0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*))List_1_set_Item_m76192A0E049F507EF693F0599892A3B5E58D46A1_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.Collider>(T[]&,System.Int32)
inline void Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Array::Resize<Fluxy.FluxyTarget>(T[]&,System.Int32)
inline void Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D (FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared)(___array0, ___newSize1, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_m86ADE49B7A30F04397ED05D063D3AC2A2757B45D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___halfExtents1, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___results2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation3, int32_t ___mask4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Fluxy.FluxyTarget>(T&)
inline bool Component_TryGetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_m8FDCBDEA2A41D9956AEA0433E018586E1E359AE6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void Fluxy.FluxyTargetProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTargetProvider__ctor_mD591978039E62C95BA855B1BA58042E19413E657 (FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Fluxy.FluxyContainer::GetVelocityAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_GetVelocityAt_m4EEC348FBC06AAA4DDC62D279C139E79C15E7DDE (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m56FED505BFFA2732B04CC4710F35E863FFB406AC (int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void FluxySamples.FluxyCharacter::CheckGroundStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_CheckGroundStatus_m424F203F886DB8686CC3DB62857087BEDB0BE564 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// System.Void FluxySamples.FluxyCharacter::ApplyExtraTurnRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_ApplyExtraTurnRotation_mE1EAEF22D06FAF7CD7DA4BA453635833FA27E9FA (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) ;
// System.Void FluxySamples.FluxyCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_HandleGroundedMovement_m844EAC4330FAAE23EC18C0B9D0E592D1C306D71D (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, bool ___crouch0, bool ___jump1, const RuntimeMethod* method) ;
// System.Void FluxySamples.FluxyCharacter::HandleAirborneMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_HandleAirborneMovement_m507D7114F7FED861302B5C0CDAA3E65367CF7AFA (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) ;
// System.Void FluxySamples.FluxyCharacter::ScaleCapsuleForCrouching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_ScaleCapsuleForCrouching_m32EF1CD6E53ED8B56A682B82DA0F99B00B17C5B6 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, bool ___crouch0, const RuntimeMethod* method) ;
// System.Void FluxySamples.FluxyCharacter::PreventStandingInLowHeadroom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_PreventStandingInLowHeadroom_m266F53FB36AEC85E1FC206C8413CE529E030FE11 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) ;
// System.Void FluxySamples.FluxyCharacter::UpdateAnimator(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_UpdateAnimator_mD3D50826A91FB6754F3F1374945A7A03C3E5F6F5 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_m2CE6BCAF0D0587AE29B6103280B337CDC3B5D5A8 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void FluxySamples.LookAroundCamera/CameraShot::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShot__ctor_m6C705120312943EEFF41A7659CC83451EBC2B7D3 (CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, float ___fieldOfView3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void FluxySamples.LookAroundCamera::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAroundCamera_LookAt_mBDC3E51A081D0C5F097B5699CE1AADD6B7038BDE (LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up1, const RuntimeMethod* method) ;
// System.Void FluxySamples.LookAroundCamera::UpdateShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAroundCamera_UpdateShot_m987F07352199447A6BDF129534606B225A65FA96 (LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Random::ColorHSV(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Random_ColorHSV_mA18D11E5B3661E5503C17C4A8FF521AF8B45F1D5 (float ___hueMin0, float ___hueMax1, float ___saturationMin2, float ___saturationMax3, float ___valueMin4, float ___valueMax5, float ___alphaMin6, float ___alphaMax7, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
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
// System.Void OpacityFromVelocity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpacityFromVelocity_Awake_mAACDF88D8AE248F2FD63FC11A5CE28FD0E5C293E (OpacityFromVelocity_tADE1DBAEEC1E53362545802039D01F565A058FA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GetComponent<FluxyTarget>();
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_0;
		L_0 = Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F(__this, Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		__this->___target_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void OpacityFromVelocity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpacityFromVelocity_Update_m5268ABEF20BF8965C3B7187D5FFE1D5ADCF700F0 (OpacityFromVelocity_tADE1DBAEEC1E53362545802039D01F565A058FA9* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var c = target.color;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_0 = __this->___target_5;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = L_0->___color_29;
		V_0 = L_1;
		// c.a = velocityToOpacity.Evaluate(target.velocity.magnitude);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = __this->___velocityToOpacity_4;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_3 = __this->___target_5;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = FluxyTarget_get_velocity_mDFACD8CDE76B3088A792AB2951EA836EE61620A0(L_3, NULL);
		V_1 = L_4;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		NullCheck(L_2);
		float L_6;
		L_6 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_2, L_5, NULL);
		(&V_0)->___a_3 = L_6;
		// target.color = c;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_7 = __this->___target_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		NullCheck(L_7);
		L_7->___color_29 = L_8;
		// }
		return;
	}
}
// System.Void OpacityFromVelocity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpacityFromVelocity__ctor_mCD3CDC4EA484E67905EEF5C5D487E56F9B40B0DC (OpacityFromVelocity_tADE1DBAEEC1E53362545802039D01F565A058FA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve velocityToOpacity = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___velocityToOpacity_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___velocityToOpacity_4), (void*)L_0);
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
// System.Void RotateTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateTarget_Start_m883CA28C49048429DC3E651F3AD29B3B68652BC6 (RotateTarget_tB2C8C6B866B7DDAB00BA161B78082F2312EB0B4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GetComponent<FluxyTarget>();
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_0;
		L_0 = Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F(__this, Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		__this->___target_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void RotateTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateTarget_Update_m53E842B56B8DEC6A10A03F20580053063F521B97 (RotateTarget_tB2C8C6B866B7DDAB00BA161B78082F2312EB0B4E* __this, const RuntimeMethod* method) 
{
	{
		// target.rotation += speed * Time.deltaTime * Mathf.Rad2Deg;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_0 = __this->___target_5;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_1 = L_0;
		NullCheck(L_1);
		float L_2 = L_1->___rotation_12;
		float L_3 = __this->___speed_4;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_1);
		L_1->___rotation_12 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), (57.2957802f)))));
		// }
		return;
	}
}
// System.Void RotateTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateTarget__ctor_m64B8A75D3C1A791F42279F393F578DB07E9802C0 (RotateTarget_tB2C8C6B866B7DDAB00BA161B78082F2312EB0B4E* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1;
		__this->___speed_4 = (1.0f);
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
// System.Void SetRandomForce::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetRandomForce_Start_m4B05578E8C14135C230A5252EB6E2EE3F1FF62AE (SetRandomForce_tC0C55C77A2F9FC95DF50AB69581784E6D28039CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GetComponent<FluxyTarget>();
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_0;
		L_0 = Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F(__this, Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SetRandomForce::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetRandomForce_Update_m3BF83AB0ADE26818BEE30171794A1689AD0EBD9C (SetRandomForce_tC0C55C77A2F9FC95DF50AB69581784E6D28039CA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float x = Mathf.PerlinNoise(Time.time, 0)*2-1;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1;
		L_1 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_0, (0.0f), NULL);
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, (2.0f))), (1.0f)));
		// float y = Mathf.PerlinNoise(Time.time, 0.5f)*2-1;
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_3;
		L_3 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_2, (0.5f), NULL);
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, (2.0f))), (1.0f)));
		// float z = Mathf.PerlinNoise(Time.time, 1)*2-1;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_5;
		L_5 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_4, (1.0f), NULL);
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_5, (2.0f))), (1.0f)));
		// target.force = new Vector3(x, y, z);
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_6 = __this->___target_4;
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->___force_23 = L_10;
		// float r = Mathf.PerlinNoise(Time.time, 0.25f);
		float L_11;
		L_11 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_12;
		L_12 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_11, (0.25f), NULL);
		V_3 = L_12;
		// float g = Mathf.PerlinNoise(Time.time, 0.75f);
		float L_13;
		L_13 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_14;
		L_14 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_13, (0.75f), NULL);
		V_4 = L_14;
		// float b = Mathf.PerlinNoise(Time.time, 0.8f);
		float L_15;
		L_15 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_16;
		L_16 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_15, (0.800000012f), NULL);
		V_5 = L_16;
		// target.color = new Color(r, g, b);
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_17 = __this->___target_4;
		float L_18 = V_3;
		float L_19 = V_4;
		float L_20 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_21), L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->___color_29 = L_21;
		// }
		return;
	}
}
// System.Void SetRandomForce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetRandomForce__ctor_m95D94CB7E7A8B16D6FE80EB2934B1324345B913F (SetRandomForce_tC0C55C77A2F9FC95DF50AB69581784E6D28039CA* __this, const RuntimeMethod* method) 
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
// System.Void Wiggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wiggle_Start_m02D8C8528C9C18FB8DF901100EA12D8F180FE05E (Wiggle_tE0BFFCC59C59120F44BE21900208795E5DB4974B* __this, const RuntimeMethod* method) 
{
	{
		// initialPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___initialPos_8 = L_1;
		// }
		return;
	}
}
// System.Void Wiggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wiggle_Update_m088E2658CC093CDA2B2AAB48631A7EF1FA082726 (Wiggle_tE0BFFCC59C59120F44BE21900208795E5DB4974B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float pos = Mathf.Sin(offset + Time.time * speed) * amplitude;
		float L_0 = __this->___offset_7;
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_2 = __this->___speed_6;
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2)))));
		float L_4 = __this->___amplitude_5;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		// transform.position = initialPos + axis.normalized * pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___initialPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___axis_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_7, NULL);
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_10, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_11, NULL);
		// }
		return;
	}
}
// System.Void Wiggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wiggle__ctor_m391902D496558C21F1A797906212ED8587D3D744 (Wiggle_tE0BFFCC59C59120F44BE21900208795E5DB4974B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___axis_4 = L_0;
		// public float amplitude = 1;
		__this->___amplitude_5 = (1.0f);
		// public float speed = 1;
		__this->___speed_6 = (1.0f);
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
// System.Void Fluxy.ExecutionOrder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionOrder__ctor_m8A1C1546B30ACF5FE192B2EE1F18FD25C3E2FD1E (ExecutionOrder_tE5AB41C1555F16B274C6B78E8D43978E8B3F2034* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public ExecutionOrder(int order)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.order = order;
		int32_t L_0 = ___order0;
		__this->___order_0 = L_0;
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
// Fluxy.FluxySolver Fluxy.FluxyContainer::get_solver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Solver; }
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_0 = __this->___m_Solver_29;
		return L_0;
	}
}
// System.Void Fluxy.FluxyContainer::set_solver(Fluxy.FluxySolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_set_solver_m2A4649FB2194E6C699303062115DD210115CB9FC (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Solver = value;
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_0 = ___value0;
		__this->___m_Solver_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Solver_29), (void*)L_0);
		// SetSolver(m_Solver, true);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_1 = __this->___m_Solver_29;
		FluxyContainer_SetSolver_mF9643B2B01F6C0A37935287F7DE42F1457CD7522(__this, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_get_velocity_mDC273E5096077DC213EB1220FE1B90423D977D3E (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Velocity; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Velocity_30;
		return L_0;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_get_angularVelocity_m2E3BA4F1D578664A3B194E49762A357C866EBC2E (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AngularVelocity; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_AngularVelocity_31;
		return L_0;
	}
}
// UnityEngine.Mesh Fluxy.FluxyContainer::get_containerMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* FluxyContainer_get_containerMesh_m3C06F50E2303ECA98C3C3424CC7154C554F13AFA (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return customMesh != null ? customMesh : planeMesh; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___customMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___planeMesh_35;
		return L_2;
	}

IL_0015:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = __this->___customMesh_4;
		return L_3;
	}
}
// System.Void Fluxy.FluxyContainer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_OnEnable_m2911B5ECDB59D1DA8993C521036A100EB94E336E (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// UpdateMesh();
		VirtualActionInvoker0::Invoke(8 /* System.Void Fluxy.FluxyContainer::UpdateMesh() */, __this);
		// SetSolver(m_Solver, false);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_0 = __this->___m_Solver_29;
		FluxyContainer_SetSolver_mF9643B2B01F6C0A37935287F7DE42F1457CD7522(__this, L_0, (bool)0, NULL);
		// oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___oldPosition_32 = L_2;
		// oldRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		__this->___oldRotation_33 = L_4;
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_OnDisable_m8A4C86A537B78C118CDC53E295560C1D55D01224 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroyImmediate(planeMesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___planeMesh_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_0, NULL);
		// SetSolver(null, false);
		FluxyContainer_SetSolver_mF9643B2B01F6C0A37935287F7DE42F1457CD7522(__this, (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C*)NULL, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_Start_m9CF70D4A773564FAF5A58FD5409E64E958D79249 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Clear();
		VirtualActionInvoker0::Invoke(9 /* System.Void Fluxy.FluxyContainer::Clear() */, __this);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_OnValidate_m3FB2B13084B36394E6113C1DF75D8E835FB8B8D3 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// subdivisions.x = Mathf.Max(1, subdivisions.x);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = (&__this->___subdivisions_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_1 = (&__this->___subdivisions_5);
		int32_t L_2;
		L_2 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_1, NULL);
		int32_t L_3;
		L_3 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(1, L_2, NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_0, L_3, NULL);
		// subdivisions.y = Mathf.Max(1, subdivisions.y);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_4 = (&__this->___subdivisions_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_5 = (&__this->___subdivisions_5);
		int32_t L_6;
		L_6 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_5, NULL);
		int32_t L_7;
		L_7 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(1, L_6, NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_4, L_7, NULL);
		// UpdateMesh();
		VirtualActionInvoker0::Invoke(8 /* System.Void Fluxy.FluxyContainer::UpdateMesh() */, __this);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_UpdateMesh_m804842E4D725F2818A5428A75D818D42504D1847 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16B81299E2C505260CF9D3AA4F9BB04D483167AB);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// if (customMesh != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___customMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// if (planeMesh != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___planeMesh_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// DestroyImmediate(planeMesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->___planeMesh_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_0027:
	{
		// GetComponent<MeshFilter>().sharedMesh = customMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5;
		L_5 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = __this->___customMesh_4;
		NullCheck(L_5);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_5, L_6, NULL);
		// return;
		return;
	}

IL_0039:
	{
		// else if (planeMesh == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = __this->___planeMesh_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		// planeMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_9, NULL);
		__this->___planeMesh_35 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planeMesh_35), (void*)L_9);
		// planeMesh.name = "FluidContainer";
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = __this->___planeMesh_35;
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, _stringLiteral16B81299E2C505260CF9D3AA4F9BB04D483167AB, NULL);
		// GetComponent<MeshFilter>().sharedMesh = planeMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11;
		L_11 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = __this->___planeMesh_35;
		NullCheck(L_11);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_11, L_12, NULL);
	}

IL_0073:
	{
		// planeMesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13 = __this->___planeMesh_35;
		NullCheck(L_13);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_13, NULL);
		// subdivisions.x = Mathf.Max(1, subdivisions.x);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_14 = (&__this->___subdivisions_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_15 = (&__this->___subdivisions_5);
		int32_t L_16;
		L_16 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_15, NULL);
		int32_t L_17;
		L_17 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(1, L_16, NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_14, L_17, NULL);
		// subdivisions.y = Mathf.Max(1, subdivisions.y);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_18 = (&__this->___subdivisions_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_19 = (&__this->___subdivisions_5);
		int32_t L_20;
		L_20 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_19, NULL);
		int32_t L_21;
		L_21 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(1, L_20, NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_18, L_21, NULL);
		// Vector2 quadSize = new Vector2(1.0f / subdivisions.x, 1.0f / subdivisions.y);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_22 = (&__this->___subdivisions_5);
		int32_t L_23;
		L_23 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_22, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_24 = (&__this->___subdivisions_5);
		int32_t L_25;
		L_25 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_24, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)((1.0f)/((float)L_23))), ((float)((1.0f)/((float)L_25))), NULL);
		// int vertexCount = (subdivisions.x + 1) * (subdivisions.y + 1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_26 = (&__this->___subdivisions_5);
		int32_t L_27;
		L_27 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_26, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_28 = (&__this->___subdivisions_5);
		int32_t L_29;
		L_29 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_28, NULL);
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_27, 1)), ((int32_t)il2cpp_codegen_add(L_29, 1))));
		// int triangleCount = subdivisions.x * subdivisions.y * 2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_30 = (&__this->___subdivisions_5);
		int32_t L_31;
		L_31 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_30, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_32 = (&__this->___subdivisions_5);
		int32_t L_33;
		L_33 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_32, NULL);
		V_2 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_31, L_33)), 2));
		// if (vertexCount > 65535)
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_012d;
		}
	}
	{
		// planeMesh.indexFormat = IndexFormat.UInt32;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = __this->___planeMesh_35;
		NullCheck(L_35);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_35, 1, NULL);
		goto IL_0139;
	}

IL_012d:
	{
		// planeMesh.indexFormat = IndexFormat.UInt16;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_36 = __this->___planeMesh_35;
		NullCheck(L_36);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_36, 0, NULL);
	}

IL_0139:
	{
		// vertices = new Vector3[vertexCount];
		int32_t L_37 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_37);
		__this->___vertices_36 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_36), (void*)L_38);
		// normals = new Vector3[vertexCount];
		int32_t L_39 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_39);
		__this->___normals_37 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normals_37), (void*)L_40);
		// tangents = new Vector4[vertexCount];
		int32_t L_41 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_42 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->___tangents_38 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tangents_38), (void*)L_42);
		// uvs = new Vector2[vertexCount];
		int32_t L_43 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_43);
		__this->___uvs_39 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uvs_39), (void*)L_44);
		// triangles = new int[triangleCount * 3];
		int32_t L_45 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_45, 3)));
		__this->___triangles_40 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles_40), (void*)L_46);
		// for (int y = 0; y < subdivisions.y + 1; ++y)
		V_3 = 0;
		goto IL_0279;
	}

IL_017e:
	{
		// for (int x = 0; x < subdivisions.x + 1; ++x)
		V_4 = 0;
		goto IL_0261;
	}

IL_0186:
	{
		// int v = y * (subdivisions.x + 1) + x;
		int32_t L_47 = V_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_48 = (&__this->___subdivisions_5);
		int32_t L_49;
		L_49 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_48, NULL);
		int32_t L_50 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_47, ((int32_t)il2cpp_codegen_add(L_49, 1)))), L_50));
		// vertices[v] = new Vector3((quadSize.x * x - 0.5f) * size.x, (quadSize.y * y - 0.5f) * size.y, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = __this->___vertices_36;
		int32_t L_52 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_0;
		float L_54 = L_53.___x_0;
		int32_t L_55 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_56 = (&__this->___size_6);
		float L_57 = L_56->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_0;
		float L_59 = L_58.___y_1;
		int32_t L_60 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&__this->___size_6);
		float L_62 = L_61->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_54, ((float)L_55))), (0.5f))), L_57)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_59, ((float)L_60))), (0.5f))), L_62)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_63);
		// normals[v] = -Vector3.forward;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = __this->___normals_37;
		int32_t L_65 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_66, NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_67);
		// tangents[v] = new Vector4(1, 0, 0, -1);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_68 = __this->___tangents_38;
		int32_t L_69 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_70), (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_70);
		// uvs[v] = new Vector3(x / (float)subdivisions.x, y / (float)subdivisions.y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_71 = __this->___uvs_39;
		int32_t L_72 = V_5;
		int32_t L_73 = V_4;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_74 = (&__this->___subdivisions_5);
		int32_t L_75;
		L_75 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_74, NULL);
		int32_t L_76 = V_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_77 = (&__this->___subdivisions_5);
		int32_t L_78;
		L_78 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_79), ((float)(((float)L_73)/((float)L_75))), ((float)(((float)L_76)/((float)L_78))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_79, NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_80);
		// for (int x = 0; x < subdivisions.x + 1; ++x)
		int32_t L_81 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0261:
	{
		// for (int x = 0; x < subdivisions.x + 1; ++x)
		int32_t L_82 = V_4;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_83 = (&__this->___subdivisions_5);
		int32_t L_84;
		L_84 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_83, NULL);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)il2cpp_codegen_add(L_84, 1)))))
		{
			goto IL_0186;
		}
	}
	{
		// for (int y = 0; y < subdivisions.y + 1; ++y)
		int32_t L_85 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0279:
	{
		// for (int y = 0; y < subdivisions.y + 1; ++y)
		int32_t L_86 = V_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_87 = (&__this->___subdivisions_5);
		int32_t L_88;
		L_88 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_87, NULL);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)il2cpp_codegen_add(L_88, 1)))))
		{
			goto IL_017e;
		}
	}
	{
		// for (int y = 0; y < subdivisions.y; ++y)
		V_6 = 0;
		goto IL_035e;
	}

IL_0294:
	{
		// for (int x = 0; x < subdivisions.x; ++x)
		V_7 = 0;
		goto IL_0346;
	}

IL_029c:
	{
		// int face = (y * (subdivisions.x + 1) + x);
		int32_t L_89 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_90 = (&__this->___subdivisions_5);
		int32_t L_91;
		L_91 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_90, NULL);
		int32_t L_92 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_89, ((int32_t)il2cpp_codegen_add(L_91, 1)))), L_92));
		// int t = (y * subdivisions.x + x) * 6;
		int32_t L_93 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_94 = (&__this->___subdivisions_5);
		int32_t L_95;
		L_95 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_94, NULL);
		int32_t L_96 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_93, L_95)), L_96)), 6));
		// triangles[t] = face + subdivisions.x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___triangles_40;
		int32_t L_98 = V_9;
		int32_t L_99 = V_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_100 = (&__this->___subdivisions_5);
		int32_t L_101;
		L_101 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_100, NULL);
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_98), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_99, L_101)), 1)));
		// triangles[t + 1] = face + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->___triangles_40;
		int32_t L_103 = V_9;
		int32_t L_104 = V_8;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_103, 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_104, 1)));
		// triangles[t + 2] = face;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___triangles_40;
		int32_t L_106 = V_9;
		int32_t L_107 = V_8;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_106, 2))), (int32_t)L_107);
		// triangles[t + 3] = face + subdivisions.x + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->___triangles_40;
		int32_t L_109 = V_9;
		int32_t L_110 = V_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_111 = (&__this->___subdivisions_5);
		int32_t L_112;
		L_112 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_111, NULL);
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 3))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_110, L_112)), 2)));
		// triangles[t + 4] = face + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___triangles_40;
		int32_t L_114 = V_9;
		int32_t L_115 = V_8;
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_114, 4))), (int32_t)((int32_t)il2cpp_codegen_add(L_115, 1)));
		// triangles[t + 5] = face + subdivisions.x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = __this->___triangles_40;
		int32_t L_117 = V_9;
		int32_t L_118 = V_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_119 = (&__this->___subdivisions_5);
		int32_t L_120;
		L_120 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_119, NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_117, 5))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_118, L_120)), 1)));
		// for (int x = 0; x < subdivisions.x; ++x)
		int32_t L_121 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0346:
	{
		// for (int x = 0; x < subdivisions.x; ++x)
		int32_t L_122 = V_7;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_123 = (&__this->___subdivisions_5);
		int32_t L_124;
		L_124 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_123, NULL);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_029c;
		}
	}
	{
		// for (int y = 0; y < subdivisions.y; ++y)
		int32_t L_125 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_035e:
	{
		// for (int y = 0; y < subdivisions.y; ++y)
		int32_t L_126 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_127 = (&__this->___subdivisions_5);
		int32_t L_128;
		L_128 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_127, NULL);
		if ((((int32_t)L_126) < ((int32_t)L_128)))
		{
			goto IL_0294;
		}
	}
	{
		// planeMesh.SetVertices(vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_129 = __this->___planeMesh_35;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_130 = __this->___vertices_36;
		NullCheck(L_129);
		Mesh_SetVertices_m881F2A14D298007BFCCFA5FE03825BCCD0B19D12(L_129, L_130, NULL);
		// planeMesh.SetNormals(normals);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_131 = __this->___planeMesh_35;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_132 = __this->___normals_37;
		NullCheck(L_131);
		Mesh_SetNormals_m7223127D3403D2EC512DBEDFC063F4D04E2B8554(L_131, L_132, NULL);
		// planeMesh.SetTangents(tangents);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_133 = __this->___planeMesh_35;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_134 = __this->___tangents_38;
		NullCheck(L_133);
		Mesh_SetTangents_mBFE6D1B758D8B48CAEC4E093B8C8260388F56425(L_133, L_134, NULL);
		// planeMesh.SetUVs(0, uvs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_135 = __this->___planeMesh_35;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_136 = __this->___uvs_39;
		NullCheck(L_135);
		Mesh_SetUVs_m6AFD5BFC4D7FB9EE57D8F19AB1BECD0675771D48(L_135, 0, L_136, NULL);
		// planeMesh.SetIndices(triangles, MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_137 = __this->___planeMesh_35;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = __this->___triangles_40;
		NullCheck(L_137);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_137, L_138, 0, 0, NULL);
		// planeMesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_139 = __this->___planeMesh_35;
		NullCheck(L_139);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_139, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::SetSolver(Fluxy.FluxySolver,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_SetSolver_mF9643B2B01F6C0A37935287F7DE42F1457CD7522 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___newSolver0, bool ___setMember1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Solver != null)
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_0 = __this->___m_Solver_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_Solver.UnregisterContainer(this);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_2 = __this->___m_Solver_29;
		NullCheck(L_2);
		FluxySolver_UnregisterContainer_m0A611B2B5042CF3C988B0C6D97FA9A87265AAB08(L_2, __this, NULL);
	}

IL_001a:
	{
		// if (setMember)
		bool L_3 = ___setMember1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// m_Solver = newSolver;
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_4 = ___newSolver0;
		__this->___m_Solver_29 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Solver_29), (void*)L_4);
	}

IL_0024:
	{
		// if (m_Solver != null && isActiveAndEnabled)
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_5 = __this->___m_Solver_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		bool L_7;
		L_7 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// m_Solver.RegisterContainer(this);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_8 = __this->___m_Solver_29;
		NullCheck(L_8);
		bool L_9;
		L_9 = FluxySolver_RegisterContainer_m1606A8D04613A6A3C046D608D8636414DB0D3171(L_8, __this, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_Clear_m7AE1345B0119468F0FAD0EA70C4201C23F96CDA5 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4D66C4520BB476A3388B0697F3EA5CD245B42F6);
		s_Il2CppMethodInitialized = true;
	}
	Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (m_Solver != null)
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_0 = __this->___m_Solver_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// var fb = m_Solver.framebuffer;
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_2 = __this->___m_Solver_29;
		NullCheck(L_2);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_3;
		L_3 = FluxySolver_get_framebuffer_m7C5CD52E551AD83ADD6CAEBD05A149C9117CF66C(L_2, NULL);
		V_0 = L_3;
		// if (fb != null && m_Solver.simulationMaterial != null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00a3;
		}
	}
	{
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_5 = __this->___m_Solver_29;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_00a3;
		}
	}
	{
		// int id = m_Solver.GetContainerID(this);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_8 = __this->___m_Solver_29;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = FluxySolver_GetContainerID_mCD22B990EEF80FACD2561A7C0E89DCC8214BC486(L_8, __this, NULL);
		V_1 = L_9;
		// if (id >= 0)
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		// m_Solver.UpdateTileData();
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_11 = __this->___m_Solver_29;
		NullCheck(L_11);
		FluxySolver_UpdateTileData_m393FA993844732435BD24C60404EF80E6BC39D9C(L_11, NULL);
		// m_Solver.simulationMaterial.SetInt("_TileIndex", id + 1);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_12 = __this->___m_Solver_29;
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = L_12->___simulationMaterial_10;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_13, _stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		// m_Solver.simulationMaterial.SetColor("_ClearColor", clearColor);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_15 = __this->___m_Solver_29;
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = L_15->___simulationMaterial_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___clearColor_11;
		NullCheck(L_16);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_16, _stringLiteralF4D66C4520BB476A3388B0697F3EA5CD245B42F6, L_17, NULL);
		// Graphics.Blit(clearTexture, fb.stateA, m_Solver.simulationMaterial, 9);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___clearTexture_10;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_19 = V_0;
		NullCheck(L_19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = L_19->___stateA_2;
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_21 = __this->___m_Solver_29;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = L_21->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_18, L_20, L_22, ((int32_t)9), NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::TransformWorldVectorToUVSpace(UnityEngine.Vector3&,UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_TransformWorldVectorToUVSpace_m41523FEAECA65580126FB15954133E8E95970A37 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vector0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvRect1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Mathf.Abs(size.x) < FluxyUtils.epsilon || Mathf.Abs(size.y) < FluxyUtils.epsilon)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___size_6);
		float L_1 = L_0->___x_0;
		float L_2;
		L_2 = fabsf(L_1);
		if ((((float)L_2) < ((float)(9.99999975E-06f))))
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___size_6);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_5) < ((float)(9.99999975E-06f)))))
		{
			goto IL_0034;
		}
	}

IL_002e:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_6;
	}

IL_0034:
	{
		// var v = transform.InverseTransformVector(vector);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_7, L_9, NULL);
		V_0 = L_10;
		// v.x *= uvRect.z / size.x;
		float* L_11 = (&(&V_0)->___x_2);
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_14 = ___uvRect1;
		float L_15 = L_14->___z_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___size_6);
		float L_17 = L_16->___x_0;
		*((float*)L_12) = (float)((float)il2cpp_codegen_multiply(L_13, ((float)(L_15/L_17))));
		// v.y *= uvRect.w / size.y;
		float* L_18 = (&(&V_0)->___y_3);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_21 = ___uvRect1;
		float L_22 = L_21->___w_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___size_6);
		float L_24 = L_23->___y_1;
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, ((float)(L_22/L_24))));
		// return v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::TransformUVVectorToWorldSpace(UnityEngine.Vector3&,UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_TransformUVVectorToWorldSpace_m3637669118C0007145488C5E5C3B1842C675E7C1 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vector0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvRect1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Mathf.Abs(uvRect.z) < FluxyUtils.epsilon || Mathf.Abs(uvRect.w) < FluxyUtils.epsilon)
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___uvRect1;
		float L_1 = L_0->___z_3;
		float L_2;
		L_2 = fabsf(L_1);
		if ((((float)L_2) < ((float)(9.99999975E-06f))))
		{
			goto IL_0024;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = ___uvRect1;
		float L_4 = L_3->___w_4;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_5) < ((float)(9.99999975E-06f)))))
		{
			goto IL_002a;
		}
	}

IL_0024:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_6;
	}

IL_002a:
	{
		// var v = vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_7);
		V_0 = L_8;
		// v.x *= size.x / uvRect.z;
		float* L_9 = (&(&V_0)->___x_2);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___size_6);
		float L_13 = L_12->___x_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_14 = ___uvRect1;
		float L_15 = L_14->___z_3;
		*((float*)L_10) = (float)((float)il2cpp_codegen_multiply(L_11, ((float)(L_13/L_15))));
		// v.y *= size.y / uvRect.w;
		float* L_16 = (&(&V_0)->___y_3);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___size_6);
		float L_20 = L_19->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_21 = ___uvRect1;
		float L_22 = L_21->___w_4;
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, ((float)(L_20/L_22))));
		// return transform.TransformVector(v);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_23, L_24, NULL);
		return L_25;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::TransformWorldPointToUVSpace(UnityEngine.Vector3&,UnityEngine.Vector4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_TransformWorldPointToUVSpace_m67826EB44B4E4CB272BE90E27BE82642BFB06B77 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___point0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvRect1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var v = transform.InverseTransformPoint(point);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_1);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_2, NULL);
		V_0 = L_3;
		// v.x += size.x * 0.5f;
		float* L_4 = (&(&V_0)->___x_2);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___size_6);
		float L_8 = L_7->___x_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_8, (0.5f)))));
		// v.y += size.y * 0.5f;
		float* L_9 = (&(&V_0)->___y_3);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___size_6);
		float L_13 = L_12->___y_1;
		*((float*)L_10) = (float)((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_13, (0.5f)))));
		// v.x *= uvRect.z / size.x;
		float* L_14 = (&(&V_0)->___x_2);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_17 = ___uvRect1;
		float L_18 = L_17->___z_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___size_6);
		float L_20 = L_19->___x_0;
		*((float*)L_15) = (float)((float)il2cpp_codegen_multiply(L_16, ((float)(L_18/L_20))));
		// v.y *= uvRect.w / size.y;
		float* L_21 = (&(&V_0)->___y_3);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_24 = ___uvRect1;
		float L_25 = L_24->___w_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->___size_6);
		float L_27 = L_26->___y_1;
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply(L_23, ((float)(L_25/L_27))));
		// v.x += uvRect.x;
		float* L_28 = (&(&V_0)->___x_2);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_31 = ___uvRect1;
		float L_32 = L_31->___x_1;
		*((float*)L_29) = (float)((float)il2cpp_codegen_add(L_30, L_32));
		// v.y += uvRect.y;
		float* L_33 = (&(&V_0)->___y_3);
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_36 = ___uvRect1;
		float L_37 = L_36->___y_2;
		*((float*)L_34) = (float)((float)il2cpp_codegen_add(L_35, L_37));
		// return v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		return L_38;
	}
}
// System.Void Fluxy.FluxyContainer::UpdateTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_UpdateTransform_m67745FAB15598D6CD9A7E7592BE3340F87B287B3 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6380177CF575F7E727948E4333BEE58D7849455);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lookAt != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___lookAt_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// if (lookAtMode == LookAtMode.LookAt)
		int32_t L_2 = __this->___lookAtMode_7;
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		// transform.rotation = Quaternion.LookRotation(transform.position - lookAt.position, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___lookAt_8;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_8, L_9, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_10, NULL);
		goto IL_006e;
	}

IL_0048:
	{
		// transform.rotation = Quaternion.LookRotation(lookAt.forward, lookAt.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___lookAt_8;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___lookAt_8;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_13, L_15, NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_16, NULL);
	}

IL_006e:
	{
		// Shader.SetGlobalVector("_ContainerSize", size);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___size_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		L_18 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_17, NULL);
		Shader_SetGlobalVector_m885C9E39C787CA6F54E002C12E3D4280C353E438(_stringLiteralB6380177CF575F7E727948E4333BEE58D7849455, L_18, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector4 Fluxy.FluxyContainer::ProjectTarget(UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 FluxyContainer_ProjectTarget_mE1B26D9B027224CADBAF463617005EB35D8D549D (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___projectionSize1, float ___aspectRatio2, bool ___scaleWithDistance3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m64618916AFEC07957EE9290E125C22D0EC5469DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_2 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		// var origin = GetProjectionOrigin(targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = FluxyContainer_GetProjectionOrigin_mD52617575E78B61468727C050205E37CB1232819(__this, L_0, NULL);
		V_0 = L_1;
		// Ray ray = new Ray(origin, targetPosition - origin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_5, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_1), L_2, L_6, NULL);
		// if (TryGetComponent(out MeshCollider meshCollider) && meshCollider.enabled)
		bool L_7;
		L_7 = Component_TryGetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m64618916AFEC07957EE9290E125C22D0EC5469DD(__this, (&V_2), Component_TryGetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m64618916AFEC07957EE9290E125C22D0EC5469DD_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00e9;
		}
	}
	{
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_8 = V_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_8, NULL);
		if (!L_9)
		{
			goto IL_00e9;
		}
	}
	{
		// if (meshCollider.Raycast(ray, out RaycastHit hit, Mathf.Infinity))
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_10 = V_2;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_10, L_11, (&V_3), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_12)
		{
			goto IL_01d7;
		}
	}
	{
		// float scale = 1;
		V_4 = (1.0f);
		// if (scaleWithDistance)
		bool L_13 = ___scaleWithDistance3;
		if (!L_13)
		{
			goto IL_00ab;
		}
	}
	{
		// ray = new Ray(origin, (targetPosition + transform.right * 0.01f) - origin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, (0.00999999978f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_20, L_21, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_1), L_14, L_22, NULL);
		// if (meshCollider.Raycast(ray, out RaycastHit secondHit, Mathf.Infinity))
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_23 = V_2;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_23, L_24, (&V_5), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
		// scale = Vector3.Distance(hit.point, secondHit.point) / 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_5), NULL);
		float L_28;
		L_28 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_26, L_27, NULL);
		V_4 = ((float)(L_28/(0.00999999978f)));
	}

IL_00ab:
	{
		// return new Vector4(hit.textureCoord.x - 0.5f, hit.textureCoord.y - 0.5f, projectionSize.x * scale * aspectRatio, projectionSize.y * scale);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D((&V_3), NULL);
		float L_30 = L_29.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D((&V_3), NULL);
		float L_32 = L_31.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___projectionSize1;
		float L_34 = L_33.___x_0;
		float L_35 = V_4;
		float L_36 = ___aspectRatio2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___projectionSize1;
		float L_38 = L_37.___y_1;
		float L_39 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_40), ((float)il2cpp_codegen_subtract(L_30, (0.5f))), ((float)il2cpp_codegen_subtract(L_32, (0.5f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_34, L_35)), L_36)), ((float)il2cpp_codegen_multiply(L_38, L_39)), /*hidden argument*/NULL);
		return L_40;
	}

IL_00e9:
	{
		// Plane p = new Plane(transform.forward, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_41, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_6), L_42, L_44, NULL);
		// if (p.Raycast(ray, out float dist))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_45 = V_1;
		bool L_46;
		L_46 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_6), L_45, (&V_7), NULL);
		if (!L_46)
		{
			goto IL_01d7;
		}
	}
	{
		// var point = ray.GetPoint(dist);
		float L_47 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_1), L_47, NULL);
		V_8 = L_48;
		// var local = transform.InverseTransformPoint(point) / size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_8;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_49, L_50, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_51, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = __this->___size_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline(L_52, L_53, NULL);
		V_9 = L_54;
		// float scale = 1;
		V_10 = (1.0f);
		// if (scaleWithDistance)
		bool L_55 = ___scaleWithDistance3;
		if (!L_55)
		{
			goto IL_01af;
		}
	}
	{
		// ray = new Ray(origin, (targetPosition + transform.right) - origin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_57 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_58, L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_61, L_62, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_1), L_56, L_63, NULL);
		// if (p.Raycast(ray, out float dist2))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_64 = V_1;
		bool L_65;
		L_65 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_6), L_64, (&V_11), NULL);
		if (!L_65)
		{
			goto IL_01af;
		}
	}
	{
		// var point2 = ray.GetPoint(dist2);
		float L_66 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_1), L_66, NULL);
		V_12 = L_67;
		// var local2 = transform.InverseTransformPoint(point2) / size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_12;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_68, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_70, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = __this->___size_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline(L_71, L_72, NULL);
		V_13 = L_73;
		// scale = Vector2.Distance(local, local2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_13;
		float L_76;
		L_76 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_74, L_75, NULL);
		V_10 = L_76;
	}

IL_01af:
	{
		// return new Vector4(local.x, local.y, projectionSize.x * scale * aspectRatio, projectionSize.y * scale);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_9;
		float L_78 = L_77.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_9;
		float L_80 = L_79.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = ___projectionSize1;
		float L_82 = L_81.___x_0;
		float L_83 = V_10;
		float L_84 = ___aspectRatio2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = ___projectionSize1;
		float L_86 = L_85.___y_1;
		float L_87 = V_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_88), L_78, L_80, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_82, L_83)), L_84)), ((float)il2cpp_codegen_multiply(L_86, L_87)), /*hidden argument*/NULL);
		return L_88;
	}

IL_01d7:
	{
		// return Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89;
		L_89 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		return L_89;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::GetProjectionOrigin(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_GetProjectionOrigin_mD52617575E78B61468727C050205E37CB1232819 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___targetPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (projectFrom != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___projectFrom_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return projectFrom.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___projectFrom_9;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// return targetPosition + transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___targetPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::UpdateVelocityAndGetAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_UpdateVelocityAndGetAcceleration_mCB034ED31A86DBEDCCDDE55AE606A5066EAD5331 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Velocity = (transform.position - oldPosition) / Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___oldPosition_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_3, L_4, NULL);
		__this->___m_Velocity_30 = L_5;
		// Quaternion rotationDelta = transform.rotation * Quaternion.Inverse(oldRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___oldRotation_33;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_9, NULL);
		V_0 = L_10;
		// m_AngularVelocity = new Vector3(rotationDelta.x, rotationDelta.y, rotationDelta.z) * 2.0f / Time.deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		float L_12 = L_11.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_0;
		float L_14 = L_13.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_0;
		float L_16 = L_15.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_12, L_14, L_16, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_17, (2.0f), NULL);
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_18, L_19, NULL);
		__this->___m_AngularVelocity_31 = L_20;
		// return (m_Velocity - oldVelocity) / Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___m_Velocity_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___oldVelocity_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_21, L_22, NULL);
		float L_24;
		L_24 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_23, L_24, NULL);
		return L_25;
	}
}
// System.Void Fluxy.FluxyContainer::ResetVelocityAndAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_ResetVelocityAndAcceleration_mA080109975F824A79BCB3FC44F03200D97CC575B (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// oldVelocity = m_Velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Velocity_30;
		__this->___oldVelocity_34 = L_0;
		// oldRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		__this->___oldRotation_33 = L_2;
		// oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___oldPosition_32 = L_4;
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_LateUpdate_mF8A98EE72A7ED23011678C67880B200027B5861E (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// ResetVelocityAndAcceleration();
		FluxyContainer_ResetVelocityAndAcceleration_mA080109975F824A79BCB3FC44F03200D97CC575B(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyContainer::GetVelocityAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_GetVelocityAt_m4EEC348FBC06AAA4DDC62D279C139E79C15E7DDE (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (solver != null && solver.isReadable)
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_0;
		L_0 = FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_2;
		L_2 = FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3 = L_2->___isReadable_9;
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// var fb = solver.framebuffer;
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_4;
		L_4 = FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2_inline(__this, NULL);
		NullCheck(L_4);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_5;
		L_5 = FluxySolver_get_framebuffer_m7C5CD52E551AD83ADD6CAEBD05A149C9117CF66C(L_4, NULL);
		// if (fb != null)
		if (!L_5)
		{
			goto IL_007f;
		}
	}
	{
		// var rect = solver.GetUVRectForContainer(this);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_6;
		L_6 = FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2_inline(__this, NULL);
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = FluxySolver_GetUVRectForContainer_m32F5CBAA4FC4BDCF55B3F45670FB61BC4FB72C66(L_6, __this, NULL);
		V_0 = L_7;
		// var uv = TransformWorldPointToUVSpace(worldPosition, rect);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = FluxyContainer_TransformWorldPointToUVSpace_m67826EB44B4E4CB272BE90E27BE82642BFB06B77(__this, (&___worldPosition0), (&V_0), NULL);
		V_1 = L_8;
		// var color = solver.readbackTexture.GetPixelBilinear(uv.x, uv.y);
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_9;
		L_9 = FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2_inline(__this, NULL);
		NullCheck(L_9);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10;
		L_10 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14 = L_13.___y_3;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Texture2D_GetPixelBilinear_m6AE4AF4FD181C478DF0F2C5C329F22A263ABFF5C(L_10, L_12, L_14, NULL);
		V_2 = L_15;
		// return TransformUVVectorToWorldSpace(new Vector3(color.r, color.g, 0), rect);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_2;
		float L_17 = L_16.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_2;
		float L_19 = L_18.___g_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_17, L_19, (0.0f), /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = FluxyContainer_TransformUVVectorToWorldSpace_m3637669118C0007145488C5E5C3B1842C675E7C1(__this, (&V_3), (&V_0), NULL);
		return L_21;
	}

IL_007f:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_22;
	}
}
// System.Void Fluxy.FluxyContainer::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer_OnDrawGizmosSelected_m5CBB12CEBA15E6EE210AA9DF71F4D2DD26554069 (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (customMesh == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___customMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// Gizmos.matrix = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_2, NULL);
		Gizmos_set_matrix_m916F9A7A8ACC51F304BB5BB4536854A045EF844B(L_3, NULL);
		// Gizmos.DrawWireCube(Vector3.zero, size);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___size_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7(L_4, L_6, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxyContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyContainer__ctor_mF2CEA20F11AF0680FA8AD5C7647454E21E493B9F (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int subdivisions = Vector2Int.one;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		L_0 = Vector2Int_get_one_mF2EE0D4A57234324336A491DAB06305AB037C373_inline(NULL);
		__this->___subdivisions_5 = L_0;
		// public Vector2 size = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		__this->___size_6 = L_1;
		// public Vector2 normalTiling = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		__this->___normalTiling_13 = L_2;
		// public float normalScale = 1;
		__this->___normalScale_14 = (1.0f);
		// public float velocityScale = 1;
		__this->___velocityScale_17 = (1.0f);
		// public float accelerationScale = 1;
		__this->___accelerationScale_18 = (1.0f);
		// public Vector3 gravity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___gravity_19 = L_3;
		// public Vector3 externalForce = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___externalForce_20 = L_4;
		// public float pressure = 1;
		__this->___pressure_22 = (1.0f);
		// public float turbulence = 5;
		__this->___turbulence_24 = (5.0f);
		// public float buoyancy = 1;
		__this->___buoyancy_27 = (1.0f);
		// public Vector4 dissipation = Vector4.zero;     // rate at which state channels decrease.
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		__this->___dissipation_28 = L_5;
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
// UnityEngine.Vector4 Fluxy.FluxyContainer/BoundaryConditions::op_Implicit(Fluxy.FluxyContainer/BoundaryConditions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BoundaryConditions_op_Implicit_m96C0D19FE4E43FB467377BF4D36AE9B83DE56474 (BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB ___b0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	int32_t G_B9_0 = 0;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	float G_B12_3 = 0.0f;
	{
		// return new Vector4(b.horizontalBoundary == BoundaryType.Periodic?1:0,
		//                    b.verticalBoundary == BoundaryType.Periodic?1:0,
		//                    b.horizontalBoundary == BoundaryType.Solid? 1:0,
		//                    b.verticalBoundary == BoundaryType.Solid?1:0);
		BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB L_0 = ___b0;
		int32_t L_1 = L_0.___horizontalBoundary_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB L_2 = ___b0;
		int32_t L_3 = L_2.___verticalBoundary_1;
		G_B4_0 = ((float)G_B3_0);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B5_0 = ((float)G_B3_0);
			goto IL_001a;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_001b:
	{
		BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB L_4 = ___b0;
		int32_t L_5 = L_4.___horizontalBoundary_0;
		G_B7_0 = ((float)G_B6_0);
		G_B7_1 = G_B6_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B8_0 = ((float)G_B6_0);
			G_B8_1 = G_B6_1;
			goto IL_0028;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0029;
	}

IL_0028:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0029:
	{
		BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB L_6 = ___b0;
		int32_t L_7 = L_6.___verticalBoundary_1;
		G_B10_0 = ((float)G_B9_0);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			G_B11_0 = ((float)G_B9_0);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0036;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0037;
	}

IL_0036:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0037:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), G_B12_3, G_B12_2, G_B12_1, ((float)G_B12_0), /*hidden argument*/NULL);
		return L_8;
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
// UnityEngine.Vector4 Fluxy.FluxyContainer/EdgeFalloff::op_Implicit(Fluxy.FluxyContainer/EdgeFalloff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EdgeFalloff_op_Implicit_m5A7CB1C60C90E2A3883CF2FCE577BB57E41857A1 (EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B ___d0, const RuntimeMethod* method) 
{
	{
		// return new Vector4(d.densityEdgeWidth, d.densityFalloffRate, d.velocityEdgeWidth, d.velocityFalloffRate);
		EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B L_0 = ___d0;
		float L_1 = L_0.___densityEdgeWidth_0;
		EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B L_2 = ___d0;
		float L_3 = L_2.___densityFalloffRate_1;
		EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B L_4 = ___d0;
		float L_5 = L_4.___velocityEdgeWidth_2;
		EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B L_6 = ___d0;
		float L_7 = L_6.___velocityFalloffRate_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Fluxy.FluxySolver::add_OnStep(Fluxy.FluxySolver/SolverCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_add_OnStep_m731613771B2EEE5B699ACB4BEB0302571F993BE3 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* V_0 = NULL;
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* V_1 = NULL;
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* V_2 = NULL;
	{
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_0 = __this->___OnStep_35;
		V_0 = L_0;
	}

IL_0007:
	{
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_1 = V_0;
		V_1 = L_1;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_2 = V_1;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*)CastclassSealed((RuntimeObject*)L_4, SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243_il2cpp_TypeInfo_var));
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243** L_5 = (&__this->___OnStep_35);
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_6 = V_2;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_7 = V_1;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_8;
		L_8 = InterlockedCompareExchangeImpl<SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*>(L_5, L_6, L_7);
		V_0 = L_8;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_9 = V_0;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_10 = V_1;
		if ((!(((RuntimeObject*)(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*)L_9) == ((RuntimeObject*)(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Fluxy.FluxySolver::remove_OnStep(Fluxy.FluxySolver/SolverCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_remove_OnStep_m7189636D46B55899CC5061AB14F5E66EAF670385 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* V_0 = NULL;
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* V_1 = NULL;
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* V_2 = NULL;
	{
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_0 = __this->___OnStep_35;
		V_0 = L_0;
	}

IL_0007:
	{
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_1 = V_0;
		V_1 = L_1;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_2 = V_1;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*)CastclassSealed((RuntimeObject*)L_4, SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243_il2cpp_TypeInfo_var));
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243** L_5 = (&__this->___OnStep_35);
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_6 = V_2;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_7 = V_1;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_8;
		L_8 = InterlockedCompareExchangeImpl<SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*>(L_5, L_6, L_7);
		V_0 = L_8;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_9 = V_0;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_10 = V_1;
		if ((!(((RuntimeObject*)(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*)L_9) == ((RuntimeObject*)(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Fluxy.FluxyStorage/Framebuffer Fluxy.FluxySolver::get_framebuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* FluxySolver_get_framebuffer_m7C5CD52E551AD83ADD6CAEBD05A149C9117CF66C (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return storage != null ? storage.GetFramebuffer(framebufferID) : null; }
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_0 = __this->___storage_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*)NULL;
	}

IL_0010:
	{
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_2 = __this->___storage_5;
		int32_t L_3 = __this->___framebufferID_19;
		NullCheck(L_2);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_4;
		L_4 = FluxyStorage_GetFramebuffer_m0CE6BF9B51E3130DDF7D2050BDEC90673C852415(L_2, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Texture2D Fluxy.FluxySolver::get_readbackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	{
		// public Texture2D readbackTexture { get; private set; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___U3CreadbackTextureU3Ek__BackingField_36;
		return L_0;
	}
}
// System.Void Fluxy.FluxySolver::set_readbackTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_set_readbackTexture_m2163B4EE47AD6082614FE461B3AE7D560CE281A4 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	{
		// public Texture2D readbackTexture { get; private set; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___value0;
		__this->___U3CreadbackTextureU3Ek__BackingField_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreadbackTextureU3Ek__BackingField_36), (void*)L_0);
		return;
	}
}
// System.Void Fluxy.FluxySolver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_OnEnable_mC120806E84F0982DBE4E471260DDDC660BBDAC7F (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_mEDBDE6C58BAFDF702C9C393E43D334D03B6CC31D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lodGroup = GetComponent<LODGroup>();
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_0;
		L_0 = Component_GetComponent_TisLODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_mEDBDE6C58BAFDF702C9C393E43D334D03B6CC31D(__this, Component_GetComponent_TisLODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A_mEDBDE6C58BAFDF702C9C393E43D334D03B6CC31D_RuntimeMethod_var);
		__this->___lodGroup_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lodGroup_15), (void*)L_0);
		// visibleLOD = GetCurrentLOD(Camera.main);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		int32_t L_2;
		L_2 = FluxySolver_GetCurrentLOD_m4EBDEBE4DF09DDA1AA52D1E77A20E4377D36E91B(__this, L_1, NULL);
		__this->___visibleLOD_16 = L_2;
		// propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_3 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_3, NULL);
		__this->___propertyBlock_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propertyBlock_21), (void*)L_3);
		// UpdateFramebuffer();
		FluxySolver_UpdateFramebuffer_mE7126F0C3E923ABCD815B661653520D79FEA0508(__this, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_OnDisable_m6620684FF514F99D315C20FCA4DC77A15DBFCBB8 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	{
		// DisposeOfFramebuffer();
		FluxySolver_DisposeOfFramebuffer_m39BA98A3C4CDB09E4846F8D95E17B9B36DDB1488(__this, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_OnValidate_m3BE0BA23F6DB212236DA328A9D0445A6E2EDD24C (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	{
		// UpdateFramebuffer();
		FluxySolver_UpdateFramebuffer_mE7126F0C3E923ABCD815B661653520D79FEA0508(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Fluxy.FluxySolver::IsFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FluxySolver_IsFull_mCB9B1199E0BF2B6B72B3D4DFEF73CFD033FE69E8 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return containers.Count >= MAX_TILES - 1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_0 = __this->___containers_18;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_0, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Fluxy.FluxySolver::RegisterContainer(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FluxySolver_RegisterContainer_m1606A8D04613A6A3C046D608D8636414DB0D3171 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9EC82018F81FA1E5303C41C63215864C8EB6D6BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsFull())
		bool L_0;
		L_0 = FluxySolver_IsFull_mCB9B1199E0BF2B6B72B3D4DFEF73CFD033FE69E8(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (!containers.Contains(container))
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_1 = __this->___containers_18;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_2 = ___container0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1(L_1, L_2, List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// containers.Add(container);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_4 = __this->___containers_18;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_5 = ___container0;
		NullCheck(L_4);
		List_1_Add_m9EC82018F81FA1E5303C41C63215864C8EB6D6BB_inline(L_4, L_5, List_1_Add_m9EC82018F81FA1E5303C41C63215864C8EB6D6BB_RuntimeMethod_var);
		// tilesDirty = true;
		__this->___tilesDirty_20 = (bool)1;
	}

IL_002b:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Fluxy.FluxySolver::UnregisterContainer(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UnregisterContainer_m0A611B2B5042CF3C988B0C6D97FA9A87265AAB08 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mC9A808CE04E22E8E526B00E70BC1AED1637F2B98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (containers.Contains(container))
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_0 = __this->___containers_18;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_1 = ___container0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1(L_0, L_1, List_1_Contains_mD6C442C530FAD1215E6D3C229232FC38817554D1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// containers.Remove(container);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_3 = __this->___containers_18;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_4 = ___container0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mC9A808CE04E22E8E526B00E70BC1AED1637F2B98(L_3, L_4, List_1_Remove_mC9A808CE04E22E8E526B00E70BC1AED1637F2B98_RuntimeMethod_var);
		// tilesDirty = true;
		__this->___tilesDirty_20 = (bool)1;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Int32 Fluxy.FluxySolver::GetContainerID(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxySolver_GetContainerID_mCD22B990EEF80FACD2561A7C0E89DCC8214BC486 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return containers.IndexOf(container);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_0 = __this->___containers_18;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_1 = ___container0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21(L_0, L_1, List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.Vector4 Fluxy.FluxySolver::GetUVRectForContainer(Fluxy.FluxyContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 FluxySolver_GetUVRectForContainer_m32F5CBAA4FC4BDCF55B3F45670FB61BC4FB72C66 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = containers.IndexOf(container);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_0 = __this->___containers_18;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_1 = ___container0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21(L_0, L_1, List_1_IndexOf_m9DB8FE34D3948D264E34F7F364C1AB63CD179E21_RuntimeMethod_var);
		V_0 = L_2;
		// if (index >= 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// return rects[index + 1];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = __this->___rects_22;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_0020:
	{
		// return Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		return L_8;
	}
}
// System.Void Fluxy.FluxySolver::UpdateFramebuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateFramebuffer_mE7126F0C3E923ABCD815B661653520D79FEA0508 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* V_0 = NULL;
	Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* V_1 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (!visible)
		bool L_0 = __this->___visible_17;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// if (disposeWhenCulled)
		bool L_1 = __this->___disposeWhenCulled_8;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DisposeOfFramebuffer();
		FluxySolver_DisposeOfFramebuffer_m39BA98A3C4CDB09E4846F8D95E17B9B36DDB1488(__this, NULL);
		goto IL_008e;
	}

IL_0018:
	{
		// else return;
		return;
	}

IL_0019:
	{
		// else if (framebufferID < 0)
		int32_t L_2 = __this->___framebufferID_19;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// if (storage != null)
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_3 = __this->___storage_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// framebufferID = storage.RequestFramebuffer(desiredResolution / (visibleLOD + 1), densitySupersampling);
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_5 = __this->___storage_5;
		int32_t L_6 = __this->___desiredResolution_6;
		int32_t L_7 = __this->___visibleLOD_16;
		int32_t L_8 = __this->___densitySupersampling_7;
		NullCheck(L_5);
		int32_t L_9;
		L_9 = FluxyStorage_RequestFramebuffer_mD568BCC76830E926174E6166A9F17691394868BE(L_5, ((int32_t)(L_6/((int32_t)il2cpp_codegen_add(L_7, 1)))), L_8, NULL);
		__this->___framebufferID_19 = L_9;
		goto IL_008e;
	}

IL_0058:
	{
		// var fb = framebuffer;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_10;
		L_10 = FluxySolver_get_framebuffer_m7C5CD52E551AD83ADD6CAEBD05A149C9117CF66C(__this, NULL);
		V_1 = L_10;
		// if (fb != null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_11 = V_1;
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		// fb.desiredResolution = desiredResolution / (visibleLOD + 1);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_12 = V_1;
		int32_t L_13 = __this->___desiredResolution_6;
		int32_t L_14 = __this->___visibleLOD_16;
		NullCheck(L_12);
		L_12->___desiredResolution_5 = ((int32_t)(L_13/((int32_t)il2cpp_codegen_add(L_14, 1))));
		// fb.stateSupersampling = densitySupersampling;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_15 = V_1;
		int32_t L_16 = __this->___densitySupersampling_7;
		NullCheck(L_15);
		L_15->___stateSupersampling_6 = L_16;
		// storage.ResizeStorage();
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_17 = __this->___storage_5;
		NullCheck(L_17);
		FluxyStorage_ResizeStorage_m8D3525077EBD827D9B33792CF7A0B0EBEB3C9375(L_17, NULL);
	}

IL_008e:
	{
		// var b = framebuffer;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_18;
		L_18 = FluxySolver_get_framebuffer_m7C5CD52E551AD83ADD6CAEBD05A149C9117CF66C(__this, NULL);
		V_0 = L_18;
		// if (b != null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_19 = V_0;
		if (!L_19)
		{
			goto IL_010d;
		}
	}
	{
		// readbackTexture = new Texture2D(b.velocityA.width, b.velocityA.height, TextureFormat.RGBAHalf, false);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_20 = V_0;
		NullCheck(L_20);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = L_20->___velocityA_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_21);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_23 = V_0;
		NullCheck(L_23);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = L_23->___velocityA_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_26, L_22, L_25, ((int32_t)17), (bool)0, NULL);
		FluxySolver_set_readbackTexture_m2163B4EE47AD6082614FE461B3AE7D560CE281A4_inline(__this, L_26, NULL);
		// Color[] resetColorArray = readbackTexture.GetPixels();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27;
		L_27 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		NullCheck(L_27);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_28;
		L_28 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_27, NULL);
		V_2 = L_28;
		// for (int i = 0; i < resetColorArray.Length; i++)
		V_3 = 0;
		goto IL_00f0;
	}

IL_00cc:
	{
		// resetColorArray[i] = new Color(0,0,0,0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_29 = V_2;
		int32_t L_30 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_31), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_31);
		// for (int i = 0; i < resetColorArray.Length; i++)
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00f0:
	{
		// for (int i = 0; i < resetColorArray.Length; i++)
		int32_t L_33 = V_3;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_34 = V_2;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_00cc;
		}
	}
	{
		// readbackTexture.SetPixels(resetColorArray);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35;
		L_35 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_36 = V_2;
		NullCheck(L_35);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_35, L_36, NULL);
		// readbackTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37;
		L_37 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		NullCheck(L_37);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_37, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::DisposeOfFramebuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_DisposeOfFramebuffer_m39BA98A3C4CDB09E4846F8D95E17B9B36DDB1488 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (storage != null && framebufferID >= 0)
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_0 = __this->___storage_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = __this->___framebufferID_19;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// storage.DisposeFramebuffer(framebufferID);
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_3 = __this->___storage_5;
		int32_t L_4 = __this->___framebufferID_19;
		NullCheck(L_3);
		FluxyStorage_DisposeFramebuffer_m80E997092396F3E651072FDCF00759A6B68BA577(L_3, L_4, (bool)1, NULL);
		// framebufferID = -1;
		__this->___framebufferID_19 = (-1);
	}

IL_0030:
	{
		// Destroy(readbackTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// }
		return;
	}
}
// System.Int32 Fluxy.FluxySolver::GetCurrentLOD(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxySolver_GetCurrentLOD_m4EBDEBE4DF09DDA1AA52D1E77A20E4377D36E91B (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// visible = true;
		__this->___visible_17 = (bool)1;
		// if (lodGroup == null)
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_0 = __this->___lodGroup_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0017:
	{
		// var distance = (transform.position - cam.transform.position).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___cam0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_6, NULL);
		V_4 = L_7;
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		V_0 = L_8;
		// float size = 1;
		V_1 = (1.0f);
		// var relativeHeight = FluxyUtils.RelativeScreenHeight(cam, distance / QualitySettings.lodBias, size);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = ___cam0;
		float L_10 = V_0;
		float L_11;
		L_11 = QualitySettings_get_lodBias_m0DB63DEEF86BE1C091409BFAE8539F187886DA7B(NULL);
		float L_12 = V_1;
		float L_13;
		L_13 = FluxyUtils_RelativeScreenHeight_m31996CE2FC4ACD8615CCAE5755EC9216BCA1D710(L_9, ((float)(L_10/L_11)), L_12, NULL);
		V_2 = L_13;
		// var lods = lodGroup.GetLODs();
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_14 = __this->___lodGroup_15;
		NullCheck(L_14);
		LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842* L_15;
		L_15 = LODGroup_GetLODs_m46EE101B04CD6712165D7BD07B230A8AC3336F15(L_14, NULL);
		V_3 = L_15;
		// for (var i = 0; i < lods.Length; i++)
		V_5 = 0;
		goto IL_007b;
	}

IL_0062:
	{
		// if (relativeHeight >= lods[i].screenRelativeTransitionHeight)
		float L_16 = V_2;
		LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		float L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___screenRelativeTransitionHeight_0;
		if ((!(((float)L_16) >= ((float)L_19))))
		{
			goto IL_0075;
		}
	}
	{
		// return i;
		int32_t L_20 = V_5;
		return L_20;
	}

IL_0075:
	{
		// for (var i = 0; i < lods.Length; i++)
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		// for (var i = 0; i < lods.Length; i++)
		int32_t L_22 = V_5;
		LODU5BU5D_tA8DD59DF359B3A3CED4F230EDF0F584C7F6A2842* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		// visible = false;
		__this->___visible_17 = (bool)0;
		// return lodGroup.lodCount;
		LODGroup_tA4C4F98D3F698143BC7529146AB31A3D2EF24D9A* L_24 = __this->___lodGroup_15;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = LODGroup_get_lodCount_m96FCA4B8FDE68EB164627874A18863BFE44B3866(L_24, NULL);
		return L_25;
	}
}
// System.Void Fluxy.FluxySolver::UpdateLOD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateLOD_m6AD1ED3E5068A67407492023338A4596F40089C6 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int newLOD = GetCurrentLOD(Camera.main);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		int32_t L_1;
		L_1 = FluxySolver_GetCurrentLOD_m4EBDEBE4DF09DDA1AA52D1E77A20E4377D36E91B(__this, L_0, NULL);
		V_0 = L_1;
		// if (visibleLOD != newLOD)
		int32_t L_2 = __this->___visibleLOD_16;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0022;
		}
	}
	{
		// visibleLOD = newLOD;
		int32_t L_4 = V_0;
		__this->___visibleLOD_16 = L_4;
		// UpdateFramebuffer();
		FluxySolver_UpdateFramebuffer_mE7126F0C3E923ABCD815B661653520D79FEA0508(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::SimulationStep(Fluxy.FluxyStorage/Framebuffer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_SimulationStep_m3B11843A59F4134BDEA2BE346429E1B5FCF01329 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb0, float ___deltaTime1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268FBEAAF8CBA4E239A3AE3A35D76E38C6043292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB768596B99828C126004E8EDB7C975B230B6024A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC835D788CDC7B69BA4F951C6D4AEE2A5217BEA76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6315798FF47A5A5AB2AD03739B4783B2AD1305B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* G_B4_0 = NULL;
	SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* G_B3_0 = NULL;
	{
		// if (fb == null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_0 = ___fb0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// OnStep?.Invoke(this);
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_1 = __this->___OnStep_35;
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_0010:
	{
		NullCheck(G_B4_0);
		SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_inline(G_B4_0, __this, NULL);
	}

IL_0016:
	{
		// fb.velocityA.filterMode = FilterMode.Point;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_3 = ___fb0;
		NullCheck(L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = L_3->___velocityA_0;
		NullCheck(L_4);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_4, 0, NULL);
		// fb.stateA.filterMode = FilterMode.Point;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_5 = ___fb0;
		NullCheck(L_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = L_5->___stateA_2;
		NullCheck(L_6);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_6, 0, NULL);
		// simulationMaterial.SetFloat("_DeltaTime", deltaTime);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___simulationMaterial_10;
		float L_8 = ___deltaTime1;
		NullCheck(L_7);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_7, _stringLiteralB768596B99828C126004E8EDB7C975B230B6024A, L_8, NULL);
		// simulationMaterial.SetTexture("_Velocity", fb.velocityA);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___simulationMaterial_10;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_10 = ___fb0;
		NullCheck(L_10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = L_10->___velocityA_0;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteralC835D788CDC7B69BA4F951C6D4AEE2A5217BEA76, L_11, NULL);
		// simulationMaterial.SetTexture("_State", fb.stateB);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___simulationMaterial_10;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_13 = ___fb0;
		NullCheck(L_13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = L_13->___stateB_3;
		NullCheck(L_12);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_12, _stringLiteral268FBEAAF8CBA4E239A3AE3A35D76E38C6043292, L_14, NULL);
		// Graphics.Blit(fb.stateA, fb.stateB, simulationMaterial, 0);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_15 = ___fb0;
		NullCheck(L_15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = L_15->___stateA_2;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_17 = ___fb0;
		NullCheck(L_17);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = L_17->___stateB_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_16, L_18, L_19, 0, NULL);
		// Graphics.Blit(fb.velocityA, fb.velocityB, simulationMaterial, 1);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_20 = ___fb0;
		NullCheck(L_20);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = L_20->___velocityA_0;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_22 = ___fb0;
		NullCheck(L_22);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = L_22->___velocityB_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_21, L_23, L_24, 1, NULL);
		// Graphics.Blit(fb.stateB, fb.stateA, simulationMaterial, 2);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_25 = ___fb0;
		NullCheck(L_25);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = L_25->___stateB_3;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_27 = ___fb0;
		NullCheck(L_27);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = L_27->___stateA_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_26, L_28, L_29, 2, NULL);
		// Graphics.Blit(fb.velocityB, fb.velocityA, simulationMaterial, 3);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_30 = ___fb0;
		NullCheck(L_30);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = L_30->___velocityB_1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_32 = ___fb0;
		NullCheck(L_32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = L_32->___velocityA_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_31, L_33, L_34, 3, NULL);
		// Graphics.Blit(fb.stateA, fb.stateB, simulationMaterial, 4);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_35 = ___fb0;
		NullCheck(L_35);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = L_35->___stateA_2;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_37 = ___fb0;
		NullCheck(L_37);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = L_37->___stateB_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_36, L_38, L_39, 4, NULL);
		// fb.stateB.filterMode = FilterMode.Bilinear;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_40 = ___fb0;
		NullCheck(L_40);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = L_40->___stateB_3;
		NullCheck(L_41);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_41, 1, NULL);
		// UpdateExternalForces(fb.velocityA, fb.velocityB);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_42 = ___fb0;
		NullCheck(L_42);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = L_42->___velocityA_0;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_44 = ___fb0;
		NullCheck(L_44);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = L_44->___velocityB_1;
		FluxySolver_UpdateExternalForces_mAD0AF2420A330DCD4D08AE7F5206915BA70E449A(__this, L_43, L_45, NULL);
		// fb.stateB.filterMode = FilterMode.Point;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_46 = ___fb0;
		NullCheck(L_46);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = L_46->___stateB_3;
		NullCheck(L_47);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_47, 0, NULL);
		// Graphics.Blit(fb.velocityB, fb.velocityA, simulationMaterial, 5);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_48 = ___fb0;
		NullCheck(L_48);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = L_48->___velocityB_1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_50 = ___fb0;
		NullCheck(L_50);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = L_50->___velocityA_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_49, L_51, L_52, 5, NULL);
		// if (pressureSolver == PressureSolver.Separable)
		int32_t L_53 = __this->___pressureSolver_13;
		if (L_53)
		{
			goto IL_01ac;
		}
	}
	{
		// Graphics.Blit(fb.velocityA, fb.velocityB, simulationMaterial, 11);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_54 = ___fb0;
		NullCheck(L_54);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = L_54->___velocityA_0;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_56 = ___fb0;
		NullCheck(L_56);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = L_56->___velocityB_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = __this->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_55, L_57, L_58, ((int32_t)11), NULL);
		// simulationMaterial.SetVector("axis", Vector2.right);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = __this->___simulationMaterial_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_61;
		L_61 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_60, NULL);
		NullCheck(L_59);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_59, _stringLiteralD6315798FF47A5A5AB2AD03739B4783B2AD1305B, L_61, NULL);
		// Graphics.Blit(fb.velocityB, fb.velocityA, simulationMaterial, 6);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_62 = ___fb0;
		NullCheck(L_62);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_63 = L_62->___velocityB_1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_64 = ___fb0;
		NullCheck(L_64);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = L_64->___velocityA_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_63, L_65, L_66, 6, NULL);
		// simulationMaterial.SetVector("axis", Vector2.up);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___simulationMaterial_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69;
		L_69 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_68, NULL);
		NullCheck(L_67);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_67, _stringLiteralD6315798FF47A5A5AB2AD03739B4783B2AD1305B, L_69, NULL);
		// Graphics.Blit(fb.velocityA, fb.velocityB, simulationMaterial, 6);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_70 = ___fb0;
		NullCheck(L_70);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = L_70->___velocityA_0;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_72 = ___fb0;
		NullCheck(L_72);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_73 = L_72->___velocityB_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_71, L_73, L_74, 6, NULL);
		goto IL_0200;
	}

IL_01ac:
	{
		// for (int i = 0; i < pressureIterations; ++i)
		V_0 = 0;
		goto IL_01e6;
	}

IL_01b0:
	{
		// Graphics.Blit(fb.velocityA, fb.velocityB, simulationMaterial, 10);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_75 = ___fb0;
		NullCheck(L_75);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = L_75->___velocityA_0;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_77 = ___fb0;
		NullCheck(L_77);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = L_77->___velocityB_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79 = __this->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_76, L_78, L_79, ((int32_t)10), NULL);
		// Graphics.Blit(fb.velocityB, fb.velocityA, simulationMaterial, 10);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_80 = ___fb0;
		NullCheck(L_80);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = L_80->___velocityB_1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_82 = ___fb0;
		NullCheck(L_82);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83 = L_82->___velocityA_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84 = __this->___simulationMaterial_10;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_81, L_83, L_84, ((int32_t)10), NULL);
		// for (int i = 0; i < pressureIterations; ++i)
		int32_t L_85 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01e6:
	{
		// for (int i = 0; i < pressureIterations; ++i)
		int32_t L_86 = V_0;
		int32_t L_87 = __this->___pressureIterations_14;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_01b0;
		}
	}
	{
		// Graphics.Blit(fb.velocityA, fb.velocityB);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_88 = ___fb0;
		NullCheck(L_88);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_89 = L_88->___velocityA_0;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_90 = ___fb0;
		NullCheck(L_90);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_91 = L_90->___velocityB_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_89, L_91, NULL);
	}

IL_0200:
	{
		// Graphics.Blit(fb.velocityB, fb.velocityA, simulationMaterial, 7);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_92 = ___fb0;
		NullCheck(L_92);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_93 = L_92->___velocityB_1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_94 = ___fb0;
		NullCheck(L_94);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95 = L_94->___velocityA_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96 = __this->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_93, L_95, L_96, 7, NULL);
		// fb.velocityA.filterMode = FilterMode.Bilinear;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_97 = ___fb0;
		NullCheck(L_97);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = L_97->___velocityA_0;
		NullCheck(L_98);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_98, 1, NULL);
		// fb.stateA.filterMode = FilterMode.Bilinear;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_99 = ___fb0;
		NullCheck(L_99);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_100 = L_99->___stateA_2;
		NullCheck(L_100);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_100, 1, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::UpdateExternalForces(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateExternalForces_mAD0AF2420A330DCD4D08AE7F5206915BA70E449A (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFA3381ED789E2835D20CF624696D9F56600E99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DACD58E82787075000040C47C7C24A5ED002803);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A68B56B4D7A3A8E6F7B9C3043D9B8200D37714E);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// RenderTexture old = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0;
		L_0 = RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345(NULL);
		V_0 = L_0;
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___dest1;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_1, NULL);
		// GL.Clear(false, true, Color.clear);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_2, NULL);
		// simulationMaterial.SetTexture("_MainTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___simulationMaterial_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___source0;
		NullCheck(L_3);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_3, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_4, NULL);
		// for (int i = 0; i < containers.Count; ++i)
		V_1 = 0;
		goto IL_0127;
	}

IL_0030:
	{
		// int tile = i + 1;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// int c = indices[tile];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___indices_23;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// simulationMaterial.SetInt("_TileIndex", tile);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___simulationMaterial_10;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_10, _stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95, L_11, NULL);
		// simulationMaterial.SetFloat("_NormalScale", containers[c].normalScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___simulationMaterial_10;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_13 = __this->___containers_18;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_15;
		L_15 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_13, L_14, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16 = L_15->___normalScale_14;
		NullCheck(L_12);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_12, _stringLiteral9A68B56B4D7A3A8E6F7B9C3043D9B8200D37714E, L_16, NULL);
		// simulationMaterial.SetVector("_NormalTiling", containers[c].normalTiling);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___simulationMaterial_10;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_18 = __this->___containers_18;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_20;
		L_20 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_18, L_19, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = L_20->___normalTiling_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_21, NULL);
		NullCheck(L_17);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_17, _stringLiteral3DACD58E82787075000040C47C7C24A5ED002803, L_22, NULL);
		// simulationMaterial.SetTexture("_Normals", containers[c].surfaceNormals);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___simulationMaterial_10;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_24 = __this->___containers_18;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_26;
		L_26 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_24, L_25, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_26);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = L_26->___surfaceNormals_12;
		NullCheck(L_23);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_23, _stringLiteral2FFA3381ED789E2835D20CF624696D9F56600E99, L_27, NULL);
		// if (simulationMaterial.SetPass(12))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___simulationMaterial_10;
		NullCheck(L_28);
		bool L_29;
		L_29 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_28, ((int32_t)12), NULL);
		if (!L_29)
		{
			goto IL_0123;
		}
	}
	{
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// GL.LoadProjectionMatrix(Matrix4x4.Ortho(0, 1, 0, 1, -1, 1));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
		L_30 = Matrix4x4_Ortho_m2C3F7FDC23CFC7E6D59009362559FDC0B6A3DC25((0.0f), (1.0f), (0.0f), (1.0f), (-1.0f), (1.0f), NULL);
		GL_LoadProjectionMatrix_m50BB4BC12EC636964C60C0DBBC4D5777706B00E4(L_30, NULL);
		// Graphics.DrawMeshNow(containers[c].containerMesh, containers[c].transform.localToWorldMatrix);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_31 = __this->___containers_18;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_33;
		L_33 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_31, L_32, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_33);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_34;
		L_34 = FluxyContainer_get_containerMesh_m3C06F50E2303ECA98C3C3424CC7154C554F13AFA(L_33, NULL);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_35 = __this->___containers_18;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_37;
		L_37 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_35, L_36, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39;
		L_39 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawMeshNow_m38D27FF56329FF8CC920EF046CDB49124553BE25(L_34, L_39, NULL);
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
	}

IL_0123:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0127:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_41 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_42 = __this->___containers_18;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_42, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0030;
		}
	}
	{
		// RenderTexture.active = old;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_0;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_44, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::UpdateTileData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateTileData_m393FA993844732435BD24C60404EF80E6BC39D9C (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1464440687AC8C032A17B21145AE2932181DDB);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		// if (tilesDirty)
		bool L_0 = __this->___tilesDirty_20;
		if (!L_0)
		{
			goto IL_01f8;
		}
	}
	{
		// rects[0] = new Vector4(-1, -1, 3, 3);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = __this->___rects_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_2), (-1.0f), (-1.0f), (3.0f), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_2);
		// for (int i = 0; i < containers.Count; ++i)
		V_2 = 0;
		goto IL_0098;
	}

IL_0034:
	{
		// rects[i+1] = new Vector4(0, 0, containers[i].size.x * 1024, containers[i].size.y * 1024);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = __this->___rects_22;
		int32_t L_4 = V_2;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_5 = __this->___containers_18;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_7;
		L_7 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_5, L_6, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&L_7->___size_6);
		float L_9 = L_8->___x_0;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_10 = __this->___containers_18;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_12;
		L_12 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_10, L_11, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&L_12->___size_6);
		float L_14 = L_13->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_15), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_9, (1024.0f))), ((float)il2cpp_codegen_multiply(L_14, (1024.0f))), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_15);
		// indices[i+1] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___indices_23;
		int32_t L_17 = V_2;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (int32_t)L_18);
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0098:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_20 = V_2;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_21 = __this->___containers_18;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_21, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0034;
		}
	}
	{
		// var boundsSize = RectPacking.Pack(rects, indices, 1, containers.Count, 0);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_23 = __this->___rects_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___indices_23;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_25 = __this->___containers_18;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_25, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectPacking_Pack_mBD78886B59BC1CB9FAAB436D6DCCDE59F62EB9ED(L_23, L_24, 1, L_26, 0, NULL);
		V_0 = L_27;
		// float size = Mathf.Max(boundsSize.x, boundsSize.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_0;
		float L_31 = L_30.___y_1;
		float L_32;
		L_32 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_29, L_31, NULL);
		V_1 = L_32;
		// for (int i = 0; i < containers.Count; ++i)
		V_3 = 0;
		goto IL_01d0;
	}

IL_00de:
	{
		// rects[i + 1] /= size;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = __this->___rects_22;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_34, 1)))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_35);
		float L_37 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38;
		L_38 = Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline(L_36, L_37, NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_35 = L_38;
		// float res = FluxyStorage.minFramebufferSize;
		V_4 = (32.0f);
		// rects[i + 1].x = Mathf.FloorToInt(rects[i + 1].x * res) / res;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_39 = __this->___rects_22;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_41 = __this->___rects_22;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		float L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 1)))))->___x_1;
		float L_44 = V_4;
		int32_t L_45;
		L_45 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_43, L_44)), NULL);
		float L_46 = V_4;
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, 1)))))->___x_1 = ((float)(((float)L_45)/L_46));
		// rects[i + 1].y = Mathf.FloorToInt(rects[i + 1].y * res) / res;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_47 = __this->___rects_22;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_49 = __this->___rects_22;
		int32_t L_50 = V_3;
		NullCheck(L_49);
		float L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 1)))))->___y_2;
		float L_52 = V_4;
		int32_t L_53;
		L_53 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_51, L_52)), NULL);
		float L_54 = V_4;
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 1)))))->___y_2 = ((float)(((float)L_53)/L_54));
		// rects[i + 1].z = Mathf.FloorToInt(rects[i + 1].z * res) / res;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_55 = __this->___rects_22;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_57 = __this->___rects_22;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		float L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 1)))))->___z_3;
		float L_60 = V_4;
		int32_t L_61;
		L_61 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_59, L_60)), NULL);
		float L_62 = V_4;
		((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_56, 1)))))->___z_3 = ((float)(((float)L_61)/L_62));
		// rects[i + 1].w = Mathf.FloorToInt(rects[i + 1].w * res) / res;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_63 = __this->___rects_22;
		int32_t L_64 = V_3;
		NullCheck(L_63);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_65 = __this->___rects_22;
		int32_t L_66 = V_3;
		NullCheck(L_65);
		float L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_66, 1)))))->___w_4;
		float L_68 = V_4;
		int32_t L_69;
		L_69 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_67, L_68)), NULL);
		float L_70 = V_4;
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 1)))))->___w_4 = ((float)(((float)L_69)/L_70));
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_01d0:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_72 = V_3;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_73 = __this->___containers_18;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_73, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_00de;
		}
	}
	{
		// Shader.SetGlobalVectorArray("_TileData", rects);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_75 = __this->___rects_22;
		Shader_SetGlobalVectorArray_mA17EBE19C8992C84E67AEEF315F7A1A8C3EA8B97(_stringLiteral9B1464440687AC8C032A17B21145AE2932181DDB, L_75, NULL);
		// tilesDirty = false;
		__this->___tilesDirty_20 = (bool)0;
	}

IL_01f8:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::UpdateContainerTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateContainerTransforms_mB0D00A9CF552CEE7B4BD19053607D7B4FDD5EF53 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < containers.Count; ++i)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// containers[i].UpdateTransform();
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_0 = __this->___containers_18;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_2;
		L_2 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_0, L_1, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(10 /* System.Void Fluxy.FluxyContainer::UpdateTransform() */, L_2);
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_4 = V_0;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_5 = __this->___containers_18;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_5, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::UpdateContainers(Fluxy.FluxyStorage/Framebuffer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateContainers_mF117ED8ACCBCCB08890414E88AF7AEB3FDA6AF8F (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb0, float ___deltaTime1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B427821EA68EA870B2AAE3979AD28753A28F82D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E1C4822070726EEF0A293019FE9EE0B336FF856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4161E0A39A3148ED3708A2BE4F66E18EC901740E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47D99E498D0B0EC5E9D376989CC81FD31A3F8331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D3CD1F9B1834143988C677FBC96E4C0D8206E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647D0C3A21D734DBF2B11FDAE5A30EC0BF6E38CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF4FD144BC6CB636FC433CB5AA888D9AFEB5C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC835D788CDC7B69BA4F951C6D4AEE2A5217BEA76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAB0DA7A55B08660269138398A7073ACD568FBAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7D7113FB1B05E776E1F6195BC6408A8C80D23D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFD60C99D01711E5D4CDB07D98EB9E9E35D43BA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (fb == null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_0 = ___fb0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// for (int i = 0; i < containers.Count; ++i)
		V_0 = 0;
		goto IL_02b3;
	}

IL_000b:
	{
		// int tile = i + 1;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// int c = indices[tile];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___indices_23;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// simulationMaterial.SetInt("_TileIndex", tile);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___simulationMaterial_10;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_6, _stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95, L_7, NULL);
		// Graphics.Blit(null, fb.tileID, simulationMaterial, 8);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_8 = ___fb0;
		NullCheck(L_8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = L_8->___tileID_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_9, L_10, 8, NULL);
		// dissipation[tile] = containers[c].dissipation;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = __this->___dissipation_26;
		int32_t L_12 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_13 = __this->___containers_18;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_15;
		L_15 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_13, L_14, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_15);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = L_15->___dissipation_28;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_16);
		// turbulence[tile] = containers[c].turbulence;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->___turbulence_29;
		int32_t L_18 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_19 = __this->___containers_18;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_21;
		L_21 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_19, L_20, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_21);
		float L_22 = L_21->___turbulence_24;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (float)L_22);
		// adhesion[tile] = containers[c].adhesion;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->___adhesion_30;
		int32_t L_24 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_25 = __this->___containers_18;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_27;
		L_27 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_25, L_26, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_27);
		float L_28 = L_27->___adhesion_25;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (float)L_28);
		// surfaceTension[tile] = containers[c].surfaceTension;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___surfaceTension_31;
		int32_t L_30 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_31 = __this->___containers_18;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_33;
		L_33 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_31, L_32, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_33);
		float L_34 = L_33->___surfaceTension_26;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (float)L_34);
		// pressure[tile] = containers[c].pressure;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___pressure_27;
		int32_t L_36 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_37 = __this->___containers_18;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_39;
		L_39 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_37, L_38, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_39);
		float L_40 = L_39->___pressure_22;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (float)L_40);
		// viscosity[tile] = Mathf.Pow(1 - Mathf.Clamp01(containers[c].viscosity), deltaTime);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = __this->___viscosity_28;
		int32_t L_42 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_43 = __this->___containers_18;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_45;
		L_45 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_43, L_44, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_45);
		float L_46 = L_45->___viscosity_23;
		float L_47;
		L_47 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_46, NULL);
		float L_48 = ___deltaTime1;
		float L_49;
		L_49 = powf(((float)il2cpp_codegen_subtract((1.0f), L_47)), L_48);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (float)L_49);
		// wrapmode[tile] = containers[c].boundaries;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_50 = __this->___wrapmode_32;
		int32_t L_51 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_52 = __this->___containers_18;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_54;
		L_54 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_52, L_53, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_54);
		BoundaryConditions_t48A2D69FB83A91F75494A0CABA5A019233F05AEB L_55 = L_54->___boundaries_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_56;
		L_56 = BoundaryConditions_op_Implicit_m96C0D19FE4E43FB467377BF4D36AE9B83DE56474(L_55, NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_56);
		// densityFalloff[tile] = containers[c].edgeFalloff;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_57 = __this->___densityFalloff_33;
		int32_t L_58 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_59 = __this->___containers_18;
		int32_t L_60 = V_2;
		NullCheck(L_59);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_61;
		L_61 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_59, L_60, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_61);
		EdgeFalloff_t84CCE02F0FBCD811A5223268276C052A6F3FE50B L_62 = L_61->___edgeFalloff_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_63;
		L_63 = EdgeFalloff_op_Implicit_m5A7CB1C60C90E2A3883CF2FCE577BB57E41857A1(L_62, NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_63);
		// var acceleration = containers[c].UpdateVelocityAndGetAcceleration();
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_64 = __this->___containers_18;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_66;
		L_66 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_64, L_65, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = FluxyContainer_UpdateVelocityAndGetAcceleration_mCB034ED31A86DBEDCCDDE55AE606A5066EAD5331(L_66, NULL);
		V_3 = L_67;
		// externalForce[tile] = containers[c].gravity + containers[c].externalForce - acceleration * containers[c].accelerationScale;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_68 = __this->___externalForce_24;
		int32_t L_69 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_70 = __this->___containers_18;
		int32_t L_71 = V_2;
		NullCheck(L_70);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_72;
		L_72 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_70, L_71, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72->___gravity_19;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_74 = __this->___containers_18;
		int32_t L_75 = V_2;
		NullCheck(L_74);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_76;
		L_76 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_74, L_75, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = L_76->___externalForce_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_73, L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_3;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_80 = __this->___containers_18;
		int32_t L_81 = V_2;
		NullCheck(L_80);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_82;
		L_82 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_80, L_81, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_82);
		float L_83 = L_82->___accelerationScale_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_79, L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_78, L_84, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_86;
		L_86 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_85, NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_86);
		// buoyancy[tile] = containers[c].TransformWorldVectorToUVSpace(Vector3.up, rects[tile]) * containers[c].buoyancy;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_87 = __this->___buoyancy_25;
		int32_t L_88 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_89 = __this->___containers_18;
		int32_t L_90 = V_2;
		NullCheck(L_89);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_91;
		L_91 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_89, L_90, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_5 = L_92;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_93 = __this->___rects_22;
		int32_t L_94 = V_1;
		NullCheck(L_93);
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = FluxyContainer_TransformWorldVectorToUVSpace_m41523FEAECA65580126FB15954133E8E95970A37(L_91, (&V_5), ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94))), NULL);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_96 = __this->___containers_18;
		int32_t L_97 = V_2;
		NullCheck(L_96);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_98;
		L_98 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_96, L_97, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_98);
		float L_99 = L_98->___buoyancy_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_95, L_99, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_101;
		L_101 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_100, NULL);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_101);
		// offsets[tile] = containers[c].TransformWorldVectorToUVSpace(containers[c].velocity * deltaTime, rects[tile]) * (1 - containers[c].velocityScale);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_102 = __this->___offsets_34;
		int32_t L_103 = V_1;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_104 = __this->___containers_18;
		int32_t L_105 = V_2;
		NullCheck(L_104);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_106;
		L_106 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_104, L_105, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_107 = __this->___containers_18;
		int32_t L_108 = V_2;
		NullCheck(L_107);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_109;
		L_109 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_107, L_108, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = FluxyContainer_get_velocity_mDC273E5096077DC213EB1220FE1B90423D977D3E_inline(L_109, NULL);
		float L_111 = ___deltaTime1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_110, L_111, NULL);
		V_5 = L_112;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_113 = __this->___rects_22;
		int32_t L_114 = V_1;
		NullCheck(L_113);
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = FluxyContainer_TransformWorldVectorToUVSpace_m41523FEAECA65580126FB15954133E8E95970A37(L_106, (&V_5), ((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_114))), NULL);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_116 = __this->___containers_18;
		int32_t L_117 = V_2;
		NullCheck(L_116);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_118;
		L_118 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_116, L_117, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_118);
		float L_119 = L_118->___velocityScale_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_115, ((float)il2cpp_codegen_subtract((1.0f), L_119)), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_121;
		L_121 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_120, NULL);
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_121);
		// if (containers[c].TryGetComponent(out Renderer renderer))
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_122 = __this->___containers_18;
		int32_t L_123 = V_2;
		NullCheck(L_122);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_124;
		L_124 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_122, L_123, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_124);
		bool L_125;
		L_125 = Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3(L_124, (&V_4), Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3_RuntimeMethod_var);
		if (!L_125)
		{
			goto IL_02af;
		}
	}
	{
		// renderer.GetPropertyBlock(propertyBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_126 = V_4;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_127 = __this->___propertyBlock_21;
		NullCheck(L_126);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_126, L_127, NULL);
		// propertyBlock.SetInt("_TileIndex", tile);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_128 = __this->___propertyBlock_21;
		int32_t L_129 = V_1;
		NullCheck(L_128);
		MaterialPropertyBlock_SetInt_m5C415E420E7C21154F1B034C6141C7D094CF40F9(L_128, _stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95, L_129, NULL);
		// propertyBlock.SetTexture("_MainTex", fb.stateA);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_130 = __this->___propertyBlock_21;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_131 = ___fb0;
		NullCheck(L_131);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = L_131->___stateA_2;
		NullCheck(L_130);
		MaterialPropertyBlock_SetTexture_mB802D9FA760800EA0AB78F5CE229F5F8108F7178(L_130, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_132, NULL);
		// propertyBlock.SetTexture("_Velocity", fb.velocityA);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_133 = __this->___propertyBlock_21;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_134 = ___fb0;
		NullCheck(L_134);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_135 = L_134->___velocityA_0;
		NullCheck(L_133);
		MaterialPropertyBlock_SetTexture_mB802D9FA760800EA0AB78F5CE229F5F8108F7178(L_133, _stringLiteralC835D788CDC7B69BA4F951C6D4AEE2A5217BEA76, L_135, NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_136 = V_4;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_137 = __this->___propertyBlock_21;
		NullCheck(L_136);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_136, L_137, NULL);
	}

IL_02af:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_138 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_02b3:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_139 = V_0;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_140 = __this->___containers_18;
		NullCheck(L_140);
		int32_t L_141;
		L_141 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_140, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		if ((((int32_t)L_139) < ((int32_t)L_141)))
		{
			goto IL_000b;
		}
	}
	{
		// simulationMaterial.SetFloatArray("_Pressure", pressure);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142 = __this->___simulationMaterial_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_143 = __this->___pressure_27;
		NullCheck(L_142);
		Material_SetFloatArray_m5A579B1AF94A2ACCD013EBE6F46651FB2C386041(L_142, _stringLiteral7CF4FD144BC6CB636FC433CB5AA888D9AFEB5C68, L_143, NULL);
		// simulationMaterial.SetFloatArray("_Viscosity", viscosity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144 = __this->___simulationMaterial_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_145 = __this->___viscosity_28;
		NullCheck(L_144);
		Material_SetFloatArray_m5A579B1AF94A2ACCD013EBE6F46651FB2C386041(L_144, _stringLiteral4161E0A39A3148ED3708A2BE4F66E18EC901740E, L_145, NULL);
		// simulationMaterial.SetFloatArray("_VortConf", turbulence);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146 = __this->___simulationMaterial_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_147 = __this->___turbulence_29;
		NullCheck(L_146);
		Material_SetFloatArray_m5A579B1AF94A2ACCD013EBE6F46651FB2C386041(L_146, _stringLiteralFBFD60C99D01711E5D4CDB07D98EB9E9E35D43BA, L_147, NULL);
		// simulationMaterial.SetFloatArray("_Adhesion", adhesion);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148 = __this->___simulationMaterial_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_149 = __this->___adhesion_30;
		NullCheck(L_148);
		Material_SetFloatArray_m5A579B1AF94A2ACCD013EBE6F46651FB2C386041(L_148, _stringLiteral647D0C3A21D734DBF2B11FDAE5A30EC0BF6E38CB, L_149, NULL);
		// simulationMaterial.SetFloatArray("_SurfaceTension", surfaceTension);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150 = __this->___simulationMaterial_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_151 = __this->___surfaceTension_31;
		NullCheck(L_150);
		Material_SetFloatArray_m5A579B1AF94A2ACCD013EBE6F46651FB2C386041(L_150, _stringLiteral47D99E498D0B0EC5E9D376989CC81FD31A3F8331, L_151, NULL);
		// simulationMaterial.SetVectorArray("_Dissipation", dissipation);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152 = __this->___simulationMaterial_10;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_153 = __this->___dissipation_26;
		NullCheck(L_152);
		Material_SetVectorArray_mF95A113AD4508490F0F8749EF36D4DFEE6E83D6E(L_152, _stringLiteral509D3CD1F9B1834143988C677FBC96E4C0D8206E, L_153, NULL);
		// simulationMaterial.SetVectorArray("_ExternalForce", externalForce);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154 = __this->___simulationMaterial_10;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_155 = __this->___externalForce_24;
		NullCheck(L_154);
		Material_SetVectorArray_mF95A113AD4508490F0F8749EF36D4DFEE6E83D6E(L_154, _stringLiteral3E1C4822070726EEF0A293019FE9EE0B336FF856, L_155, NULL);
		// simulationMaterial.SetVectorArray("_Buoyancy", buoyancy);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156 = __this->___simulationMaterial_10;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_157 = __this->___buoyancy_25;
		NullCheck(L_156);
		Material_SetVectorArray_mF95A113AD4508490F0F8749EF36D4DFEE6E83D6E(L_156, _stringLiteralED7D7113FB1B05E776E1F6195BC6408A8C80D23D, L_157, NULL);
		// simulationMaterial.SetVectorArray("_WrapMode", wrapmode);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_158 = __this->___simulationMaterial_10;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_159 = __this->___wrapmode_32;
		NullCheck(L_158);
		Material_SetVectorArray_mF95A113AD4508490F0F8749EF36D4DFEE6E83D6E(L_158, _stringLiteral3B427821EA68EA870B2AAE3979AD28753A28F82D, L_159, NULL);
		// simulationMaterial.SetVectorArray("_EdgeFalloff", densityFalloff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160 = __this->___simulationMaterial_10;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_161 = __this->___densityFalloff_33;
		NullCheck(L_160);
		Material_SetVectorArray_mF95A113AD4508490F0F8749EF36D4DFEE6E83D6E(L_160, _stringLiteralCAB0DA7A55B08660269138398A7073ACD568FBAB, L_161, NULL);
		// simulationMaterial.SetVectorArray("_Offsets", offsets);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162 = __this->___simulationMaterial_10;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_163 = __this->___offsets_34;
		NullCheck(L_162);
		Material_SetVectorArray_mF95A113AD4508490F0F8749EF36D4DFEE6E83D6E(L_162, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_163, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::Splat(Fluxy.FluxyStorage/Framebuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_Splat_m29A24E2830D2D920AC412465BBACBB3C315E400E (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisFluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078_mFE5515364CAA29F8BD1035F2DCCEC32D501562E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5958CCD0401A1455BADA383AE28BEE616942BD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078* V_3 = NULL;
	int32_t V_4 = 0;
	FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// if (fb == null || simulationMaterial == null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_0 = ___fb0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// Shader.SetGlobalTexture("_TileID", fb.tileID);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_3 = ___fb0;
		NullCheck(L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = L_3->___tileID_4;
		Shader_SetGlobalTexture_mABB6E994E67D083BEBE142B4CC8FA77137C2D021(_stringLiteral6F5958CCD0401A1455BADA383AE28BEE616942BD, L_4, NULL);
		// for (int i = 0; i < containers.Count; ++i)
		V_0 = 0;
		goto IL_010e;
	}

IL_0029:
	{
		// int tile = i + 1;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// int c = indices[tile];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___indices_23;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// for (int j = 0; j < containers[c].targets.Length; ++j)
		V_4 = 0;
		goto IL_0091;
	}

IL_003b:
	{
		// if (containers[c].targets[j] != null)
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_10 = __this->___containers_18;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_12;
		L_12 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_10, L_11, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_12);
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_13 = L_12->___targets_21;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		// containers[c].targets[j].Splat(containers[c], fb, tile, rects[tile]);
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_18 = __this->___containers_18;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_20;
		L_20 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_18, L_19, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_20);
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_21 = L_20->___targets_21;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_25 = __this->___containers_18;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_27;
		L_27 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_25, L_26, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_28 = ___fb0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_29 = __this->___rects_22;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		NullCheck(L_24);
		VirtualActionInvoker4< FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, int32_t*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(4 /* System.Void Fluxy.FluxyTarget::Splat(Fluxy.FluxyContainer,Fluxy.FluxyStorage/Framebuffer,System.Int32& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Vector4& modreq(System.Runtime.InteropServices.InAttribute)) */, L_24, L_27, L_28, (&V_1), ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))));
	}

IL_008b:
	{
		// for (int j = 0; j < containers[c].targets.Length; ++j)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0091:
	{
		// for (int j = 0; j < containers[c].targets.Length; ++j)
		int32_t L_32 = V_4;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_33 = __this->___containers_18;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_35;
		L_35 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_33, L_34, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_35);
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_36 = L_35->___targets_21;
		NullCheck(L_36);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		// if (containers[c].TryGetComponent(out FluxyTargetProvider provider))
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_37 = __this->___containers_18;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_39;
		L_39 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_37, L_38, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		NullCheck(L_39);
		bool L_40;
		L_40 = Component_TryGetComponent_TisFluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078_mFE5515364CAA29F8BD1035F2DCCEC32D501562E0(L_39, (&V_3), Component_TryGetComponent_TisFluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078_mFE5515364CAA29F8BD1035F2DCCEC32D501562E0_RuntimeMethod_var);
		if (!L_40)
		{
			goto IL_010a;
		}
	}
	{
		// var targets = provider.GetTargets(out int targetCount);
		FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078* L_41 = V_3;
		NullCheck(L_41);
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_42;
		L_42 = VirtualFuncInvoker1< FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9*, int32_t* >::Invoke(5 /* Fluxy.FluxyTarget[] Fluxy.FluxyTargetProvider::GetTargets(System.Int32&) */, L_41, (&V_6));
		V_5 = L_42;
		// for (int j = 0; j < targetCount; ++j)
		V_7 = 0;
		goto IL_0104;
	}

IL_00cc:
	{
		// if (targets[j] != null)
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_43 = V_5;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_00fe;
		}
	}
	{
		// targets[j].Splat(containers[c], fb, tile, rects[tile]);
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_48 = V_5;
		int32_t L_49 = V_7;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_52 = __this->___containers_18;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_54;
		L_54 = List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D(L_52, L_53, List_1_get_Item_m62D99A887819824C1E7469601E1C52B5C78ABB7D_RuntimeMethod_var);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_55 = ___fb0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_56 = __this->___rects_22;
		int32_t L_57 = V_1;
		NullCheck(L_56);
		NullCheck(L_51);
		VirtualActionInvoker4< FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, int32_t*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(4 /* System.Void Fluxy.FluxyTarget::Splat(Fluxy.FluxyContainer,Fluxy.FluxyStorage/Framebuffer,System.Int32& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Vector4& modreq(System.Runtime.InteropServices.InAttribute)) */, L_51, L_54, L_55, (&V_1), ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57))));
	}

IL_00fe:
	{
		// for (int j = 0; j < targetCount; ++j)
		int32_t L_58 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0104:
	{
		// for (int j = 0; j < targetCount; ++j)
		int32_t L_59 = V_7;
		int32_t L_60 = V_6;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_00cc;
		}
	}

IL_010a:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_010e:
	{
		// for (int i = 0; i < containers.Count; ++i)
		int32_t L_62 = V_0;
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_63 = __this->___containers_18;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_inline(L_63, List_1_get_Count_mADAE919740119037009CE82C286B55B81004DC33_RuntimeMethod_var);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::Readback(Fluxy.FluxyStorage/Framebuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_Readback_m3379A1BE2AC8A0056C86EE7BCBA2AAB169D7439F (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FluxySolver_U3CReadbackU3Eb__60_0_m397E712BCB484FF9C4245781B12AC920AC333313_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (readbackTexture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0;
		L_0 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// AsyncGPUReadback.Request(fb.velocityA, 0, TextureFormat.RGBAHalf, (AsyncGPUReadbackRequest request) =>
		// {
		//     if (request.hasError)
		//         Debug.LogError("GPU readback error.");
		//     else if (readbackTexture != null)
		//     {
		//         readbackTexture.LoadRawTextureData(request.GetData<float>());
		//         readbackTexture.Apply();
		//     }
		// });
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_2 = ___fb0;
		NullCheck(L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = L_2->___velocityA_0;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_4 = (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*)il2cpp_codegen_object_new(Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777(L_4, __this, (intptr_t)((void*)FluxySolver_U3CReadbackU3Eb__60_0_m397E712BCB484FF9C4245781B12AC920AC333313_RuntimeMethod_var), NULL);
		AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 L_5;
		L_5 = AsyncGPUReadback_Request_mFF2155AC423B19101CCD710F0FA146795CA70773(L_3, 0, ((int32_t)17), L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::UpdateSolver(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_UpdateSolver_mB884A84F02A27C47E3536DAA9A4E8FA284B327F3 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if (storage != null && deltaTime > 0)
		FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* L_0 = __this->___storage_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_009d;
		}
	}
	{
		float L_2 = ___deltaTime0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		// UpdateLOD();
		FluxySolver_UpdateLOD_m6AD1ED3E5068A67407492023338A4596F40089C6(__this, NULL);
		// UpdateTileData();
		FluxySolver_UpdateTileData_m393FA993844732435BD24C60404EF80E6BC39D9C(__this, NULL);
		// UpdateContainerTransforms();
		FluxySolver_UpdateContainerTransforms_mB0D00A9CF552CEE7B4BD19053607D7B4FDD5EF53(__this, NULL);
		// if (visible && simulationMaterial != null)
		bool L_3 = __this->___visible_17;
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___simulationMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009d;
		}
	}
	{
		// var fb = framebuffer;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_6;
		L_6 = FluxySolver_get_framebuffer_m7C5CD52E551AD83ADD6CAEBD05A149C9117CF66C(__this, NULL);
		V_0 = L_6;
		// Splat(fb);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_7 = V_0;
		FluxySolver_Splat_m29A24E2830D2D920AC412465BBACBB3C315E400E(__this, L_7, NULL);
		// int steps = 0;
		V_1 = 0;
		goto IL_0078;
	}

IL_0056:
	{
		// float timestep = Mathf.Min(deltaTime, maxTimestep);
		float L_8 = ___deltaTime0;
		float L_9 = __this->___maxTimestep_11;
		float L_10;
		L_10 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_8, L_9, NULL);
		V_2 = L_10;
		// deltaTime -= timestep;
		float L_11 = ___deltaTime0;
		float L_12 = V_2;
		___deltaTime0 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// UpdateContainers(fb, timestep); // TODO: can do it once per frame? take it out here, see if offsets are affected (infinite pool scene)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_13 = V_0;
		float L_14 = V_2;
		FluxySolver_UpdateContainers_mF117ED8ACCBCCB08890414E88AF7AEB3FDA6AF8F(__this, L_13, L_14, NULL);
		// SimulationStep(fb, timestep);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_15 = V_0;
		float L_16 = V_2;
		VirtualActionInvoker2< Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, float >::Invoke(4 /* System.Void Fluxy.FluxySolver::SimulationStep(Fluxy.FluxyStorage/Framebuffer,System.Single) */, __this, L_15, L_16);
	}

IL_0078:
	{
		// while (deltaTime > 0 && steps++ < maxSteps)
		float L_17 = ___deltaTime0;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		float L_20 = __this->___maxSteps_12;
		if ((((float)((float)L_19)) < ((float)L_20)))
		{
			goto IL_0056;
		}
	}

IL_008e:
	{
		// if (isReadable)
		bool L_21 = __this->___isReadable_9;
		if (!L_21)
		{
			goto IL_009d;
		}
	}
	{
		// Readback(fb);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_22 = V_0;
		FluxySolver_Readback_m3379A1BE2AC8A0056C86EE7BCBA2AAB169D7439F(__this, L_22, NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_LateUpdate_m1D2BE4D9B04B198F4146F4FC1E3F6D1E68C0C41C (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	{
		// UpdateSolver(Time.deltaTime);
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		FluxySolver_UpdateSolver_mB884A84F02A27C47E3536DAA9A4E8FA284B327F3(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxySolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver__ctor_m52E1518009585F5A02EC780A5FF0059032F87DAD (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB4D12A254786DB5ED4D5A3E78395402B087FB063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int desiredResolution = 128;
		__this->___desiredResolution_6 = ((int32_t)128);
		// public int densitySupersampling = 2;
		__this->___densitySupersampling_7 = 2;
		// public float maxTimestep = 0.008f;
		__this->___maxTimestep_11 = (0.00800000038f);
		// public float maxSteps = 4;
		__this->___maxSteps_12 = (4.0f);
		// public int pressureIterations = 3;
		__this->___pressureIterations_14 = 3;
		// private bool visible = true;
		__this->___visible_17 = (bool)1;
		// private List<FluxyContainer> containers = new List<FluxyContainer>();
		List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98* L_0 = (List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98*)il2cpp_codegen_object_new(List_1_tA680430A077915E89C611A83461AB8EE9D3E0E98_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB4D12A254786DB5ED4D5A3E78395402B087FB063(L_0, List_1__ctor_mB4D12A254786DB5ED4D5A3E78395402B087FB063_RuntimeMethod_var);
		__this->___containers_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___containers_18), (void*)L_0);
		// private int framebufferID = -1;
		__this->___framebufferID_19 = (-1);
		// private Vector4[] rects = new Vector4[MAX_TILES];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___rects_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rects_22), (void*)L_1);
		// private int[] indices = new int[MAX_TILES];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___indices_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indices_23), (void*)L_2);
		// private Vector4[] externalForce = new Vector4[MAX_TILES];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___externalForce_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___externalForce_24), (void*)L_3);
		// private Vector4[] buoyancy = new Vector4[MAX_TILES];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___buoyancy_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buoyancy_25), (void*)L_4);
		// private Vector4[] dissipation = new Vector4[MAX_TILES];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___dissipation_26 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dissipation_26), (void*)L_5);
		// private float[] pressure = new float[MAX_TILES];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___pressure_27 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressure_27), (void*)L_6);
		// private float[] viscosity = new float[MAX_TILES];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___viscosity_28 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___viscosity_28), (void*)L_7);
		// private float[] turbulence = new float[MAX_TILES];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___turbulence_29 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turbulence_29), (void*)L_8);
		// private float[] adhesion = new float[MAX_TILES];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___adhesion_30 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adhesion_30), (void*)L_9);
		// private float[] surfaceTension = new float[MAX_TILES];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___surfaceTension_31 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___surfaceTension_31), (void*)L_10);
		// private Vector4[] wrapmode = new Vector4[MAX_TILES];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___wrapmode_32 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wrapmode_32), (void*)L_11);
		// private Vector4[] densityFalloff = new Vector4[MAX_TILES];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___densityFalloff_33 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___densityFalloff_33), (void*)L_12);
		// private Vector4[] offsets = new Vector4[MAX_TILES];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->___offsets_34 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___offsets_34), (void*)L_13);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Fluxy.FluxySolver::<Readback>b__60_0(UnityEngine.Rendering.AsyncGPUReadbackRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxySolver_U3CReadbackU3Eb__60_0_m397E712BCB484FF9C4245781B12AC920AC333313 (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncGPUReadbackRequest_GetData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCD520E10A2FF9A6B23B92761C1E60AE9793DC1C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_LoadRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2C546B83A6466CCBD56499581F3A7041257CE976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0EFBF63A763874A5B2EA57E0CEC328970F51C19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (request.hasError)
		bool L_0;
		L_0 = AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5((&___request0), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("GPU readback error.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralD0EFBF63A763874A5B2EA57E0CEC328970F51C19, NULL);
		return;
	}

IL_0014:
	{
		// else if (readbackTexture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// readbackTexture.LoadRawTextureData(request.GetData<float>());
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_4;
		L_4 = AsyncGPUReadbackRequest_GetData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCD520E10A2FF9A6B23B92761C1E60AE9793DC1C9((&___request0), 0, AsyncGPUReadbackRequest_GetData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCD520E10A2FF9A6B23B92761C1E60AE9793DC1C9_RuntimeMethod_var);
		NullCheck(L_3);
		Texture2D_LoadRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2C546B83A6466CCBD56499581F3A7041257CE976(L_3, L_4, Texture2D_LoadRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2C546B83A6466CCBD56499581F3A7041257CE976_RuntimeMethod_var);
		// readbackTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline(__this, NULL);
		NullCheck(L_5);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_5, NULL);
	}

IL_0040:
	{
		// });
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
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_Multicast(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* currentDelegate = reinterpret_cast<SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___solver0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_Open(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___solver0, method);
}
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenStaticInvoker(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* >::Invoke(__this->___method_ptr_0, method, NULL, ___solver0);
}
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_ClosedStaticInvoker(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___solver0);
}
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenVirtual(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___solver0);
}
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenInterface(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___solver0);
}
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenGenericVirtual(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___solver0);
}
void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenGenericInterface(SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___solver0);
}
// System.Void Fluxy.FluxySolver/SolverCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverCallback__ctor_m4F776E68A8E9C16285AECD7A339E45F7E6C74282 (SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_Multicast;
}
// System.Void Fluxy.FluxySolver/SolverCallback::Invoke(Fluxy.FluxySolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9 (SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___solver0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fluxy.FluxySolver/SolverCallback::BeginInvoke(Fluxy.FluxySolver,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverCallback_BeginInvoke_mB8E6940F55B5F27E9C83123C6F3959399D670E63 (SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___solver0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Fluxy.FluxySolver/SolverCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverCallback_EndInvoke_m522400F6DEF5357B6CE23AFD58F8B026EDD8B185 (SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Fluxy.FluxyStorage::RequestFramebuffer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_RequestFramebuffer_mD568BCC76830E926174E6166A9F17691394868BE (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___desiredResolution0, int32_t ___stateSupersampling1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE6CD7442B1B644E5C65B906C579DEA3CDB7DD48C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Framebuffer fb = new Framebuffer(desiredResolution, stateSupersampling);
		int32_t L_0 = ___desiredResolution0;
		int32_t L_1 = ___stateSupersampling1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_2 = (Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*)il2cpp_codegen_object_new(Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Framebuffer__ctor_mA4412BE8B0E1345D378FDEDC70BC6050E5907E03(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// int id = 0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		// if (framebuffers[id] == null) break;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_3 = __this->___framebuffers_9;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_5;
		L_5 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_3, L_4, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// for (; id < framebuffers.Count; ++id)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (; id < framebuffers.Count; ++id)
		int32_t L_7 = V_1;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_8 = __this->___framebuffers_9;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_inline(L_8, List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}

IL_002c:
	{
		// if (id == framebuffers.Count)
		int32_t L_10 = V_1;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_11 = __this->___framebuffers_9;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_inline(L_11, List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0048;
		}
	}
	{
		// framebuffers.Add(fb);
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_13 = __this->___framebuffers_9;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_14 = V_0;
		NullCheck(L_13);
		List_1_Add_mE6CD7442B1B644E5C65B906C579DEA3CDB7DD48C_inline(L_13, L_14, List_1_Add_mE6CD7442B1B644E5C65B906C579DEA3CDB7DD48C_RuntimeMethod_var);
		goto IL_0055;
	}

IL_0048:
	{
		// framebuffers[id] = fb;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_15 = __this->___framebuffers_9;
		int32_t L_16 = V_1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_17 = V_0;
		NullCheck(L_15);
		List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5(L_15, L_16, L_17, List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5_RuntimeMethod_var);
	}

IL_0055:
	{
		// ResizeStorage();
		FluxyStorage_ResizeStorage_m8D3525077EBD827D9B33792CF7A0B0EBEB3C9375(__this, NULL);
		// return id;
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void Fluxy.FluxyStorage::DisposeFramebuffer(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyStorage_DisposeFramebuffer_m80E997092396F3E651072FDCF00759A6B68BA577 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___framebufferID0, bool ___expand1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* V_0 = NULL;
	{
		// if (framebufferID >= 0 && framebufferID < framebuffers.Count)
		int32_t L_0 = ___framebufferID0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_1 = ___framebufferID0;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_2 = __this->___framebuffers_9;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_inline(L_2, List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0064;
		}
	}
	{
		// var fb = framebuffers[framebufferID];
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_4 = __this->___framebuffers_9;
		int32_t L_5 = ___framebufferID0;
		NullCheck(L_4);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_6;
		L_6 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_4, L_5, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		V_0 = L_6;
		// if (fb != null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(fb.velocityA);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_8 = V_0;
		NullCheck(L_8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = L_8->___velocityA_0;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_9, NULL);
		// RenderTexture.ReleaseTemporary(fb.velocityB);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_10 = V_0;
		NullCheck(L_10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = L_10->___velocityB_1;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_11, NULL);
		// RenderTexture.ReleaseTemporary(fb.stateA);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_12 = V_0;
		NullCheck(L_12);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = L_12->___stateA_2;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_13, NULL);
		// RenderTexture.ReleaseTemporary(fb.stateB);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_14 = V_0;
		NullCheck(L_14);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = L_14->___stateB_3;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_15, NULL);
		// framebuffers[framebufferID] = null;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_16 = __this->___framebuffers_9;
		int32_t L_17 = ___framebufferID0;
		NullCheck(L_16);
		List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5(L_16, L_17, (Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*)NULL, List_1_set_Item_m02E5104B3AB54713DE1E37DE02C1C1BAD750FBA5_RuntimeMethod_var);
		// if (expand)
		bool L_18 = ___expand1;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		// ResizeStorage();
		FluxyStorage_ResizeStorage_m8D3525077EBD827D9B33792CF7A0B0EBEB3C9375(__this, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Int32 Fluxy.FluxyStorage::PrevPowerTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_PrevPowerTwo_mB11AE884310CD53D4C7D4DD2BA55BE462AA30D88 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		// if (x == 0)
		int32_t L_0 = ___x0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0005:
	{
		// x |= (x >> 1);
		int32_t L_1 = ___x0;
		int32_t L_2 = ___x0;
		___x0 = ((int32_t)(L_1|((int32_t)(L_2>>1))));
		// x |= (x >> 2);
		int32_t L_3 = ___x0;
		int32_t L_4 = ___x0;
		___x0 = ((int32_t)(L_3|((int32_t)(L_4>>2))));
		// x |= (x >> 4);
		int32_t L_5 = ___x0;
		int32_t L_6 = ___x0;
		___x0 = ((int32_t)(L_5|((int32_t)(L_6>>4))));
		// x |= (x >> 8);
		int32_t L_7 = ___x0;
		int32_t L_8 = ___x0;
		___x0 = ((int32_t)(L_7|((int32_t)(L_8>>8))));
		// x |= (x >> 16);
		int32_t L_9 = ___x0;
		int32_t L_10 = ___x0;
		___x0 = ((int32_t)(L_9|((int32_t)(L_10>>((int32_t)16)))));
		// return x - (x >> 1);
		int32_t L_11 = ___x0;
		int32_t L_12 = ___x0;
		return ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>1))));
	}
}
// System.Void Fluxy.FluxyStorage::ResizeStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyStorage_ResizeStorage_m8D3525077EBD827D9B33792CF7A0B0EBEB3C9375 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// int densityPixelSize = GetBytesPerPixel(densityPrecision);
		int32_t L_0 = __this->___densityPrecision_7;
		int32_t L_1;
		L_1 = FluxyStorage_GetBytesPerPixel_m56B2226E4603068A225CF172172D8E5158910526(__this, L_0, NULL);
		V_0 = L_1;
		// int velocityPixelSize = GetBytesPerPixel(velocityPrecision);
		int32_t L_2 = __this->___velocityPrecision_8;
		int32_t L_3;
		L_3 = FluxyStorage_GetBytesPerPixel_m56B2226E4603068A225CF172172D8E5158910526(__this, L_2, NULL);
		V_1 = L_3;
		// float pixelBudget = (memoryBudget * bytesPerMbyte) / (float)(2 * (densityPixelSize + velocityPixelSize));
		int32_t L_4 = __this->___memoryBudget_6;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = ((float)(((float)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)1048576))))/((float)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(L_5, L_6)))))));
		// float totalRes = 0;
		V_3 = (0.0f);
		// for (int i = 0; i < framebuffers.Count; ++i)
		V_4 = 0;
		goto IL_0065;
	}

IL_003a:
	{
		// if (framebuffers[i] != null)
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_7 = __this->___framebuffers_9;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_9;
		L_9 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_7, L_8, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// totalRes += framebuffers[i].desiredResolution;
		float L_10 = V_3;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_11 = __this->___framebuffers_9;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_13;
		L_13 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_11, L_12, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = L_13->___desiredResolution_5;
		V_3 = ((float)il2cpp_codegen_add(L_10, ((float)L_14)));
	}

IL_005f:
	{
		// for (int i = 0; i < framebuffers.Count; ++i)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0065:
	{
		// for (int i = 0; i < framebuffers.Count; ++i)
		int32_t L_16 = V_4;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_17 = __this->___framebuffers_9;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_inline(L_17, List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_003a;
		}
	}
	{
		// for (int i = 0; i < framebuffers.Count; ++i)
		V_5 = 0;
		goto IL_00eb;
	}

IL_0079:
	{
		// if (framebuffers[i] != null)
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_19 = __this->___framebuffers_9;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_21;
		L_21 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_19, L_20, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00e5;
		}
	}
	{
		// float weight = framebuffers[i].desiredResolution / totalRes;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_22 = __this->___framebuffers_9;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_24;
		L_24 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_22, L_23, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25 = L_24->___desiredResolution_5;
		float L_26 = V_3;
		V_6 = ((float)(((float)L_25)/L_26));
		// int maxResolution = Mathf.FloorToInt(Mathf.Sqrt(pixelBudget * weight));
		float L_27 = V_2;
		float L_28 = V_6;
		float L_29;
		L_29 = sqrtf(((float)il2cpp_codegen_multiply(L_27, L_28)));
		int32_t L_30;
		L_30 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_29, NULL);
		V_7 = L_30;
		// int resolution = Mathf.Min(framebuffers[i].desiredResolution, maxResolution);
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_31 = __this->___framebuffers_9;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_33;
		L_33 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_31, L_32, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		NullCheck(L_33);
		int32_t L_34 = L_33->___desiredResolution_5;
		int32_t L_35 = V_7;
		int32_t L_36;
		L_36 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_34, L_35, NULL);
		V_8 = L_36;
		// int quantizedRes = Mathf.Max(minFramebufferSize, PrevPowerTwo(resolution));
		int32_t L_37 = V_8;
		int32_t L_38;
		L_38 = FluxyStorage_PrevPowerTwo_mB11AE884310CD53D4C7D4DD2BA55BE462AA30D88(__this, L_37, NULL);
		int32_t L_39;
		L_39 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)32), L_38, NULL);
		V_9 = L_39;
		// ReallocateFramebuffer(i, quantizedRes);
		int32_t L_40 = V_5;
		int32_t L_41 = V_9;
		FluxyStorage_ReallocateFramebuffer_m0B65567E16D8565A443BD2139838BFCEB3852488(__this, L_40, L_41, NULL);
	}

IL_00e5:
	{
		// for (int i = 0; i < framebuffers.Count; ++i)
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00eb:
	{
		// for (int i = 0; i < framebuffers.Count; ++i)
		int32_t L_43 = V_5;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_44 = __this->___framebuffers_9;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_inline(L_44, List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0079;
		}
	}
	{
		// }
		return;
	}
}
// Fluxy.FluxyStorage/Framebuffer Fluxy.FluxyStorage::GetFramebuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* FluxyStorage_GetFramebuffer_m0CE6BF9B51E3130DDF7D2050BDEC90673C852415 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___framebufferID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (framebufferID >= 0 && framebufferID < framebuffers.Count)
		int32_t L_0 = ___framebufferID0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___framebufferID0;
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_2 = __this->___framebuffers_9;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_inline(L_2, List_1_get_Count_m3A84A22677762BF9D06B9E675346EE7ED82AE587_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		// return framebuffers[framebufferID];
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_4 = __this->___framebuffers_9;
		int32_t L_5 = ___framebufferID0;
		NullCheck(L_4);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_6;
		L_6 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_4, L_5, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		return L_6;
	}

IL_001f:
	{
		// return null;
		return (Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*)NULL;
	}
}
// UnityEngine.RenderTextureFormat Fluxy.FluxyStorage::GetRenderTextureFormat(Fluxy.FluxyStorage/FluidTexturePrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_GetRenderTextureFormat_m63EBA17A4DC84E81FF0D9C05C935170D84F1B583 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___precision0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___precision0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_002e;
	}

IL_0014:
	{
		// if (SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBFloat))
		bool L_1;
		L_1 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(((int32_t)11), NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return RenderTextureFormat.ARGBFloat;
		return (int32_t)(((int32_t)11));
	}

IL_0020:
	{
		// return RenderTextureFormat.Default;
		return (int32_t)(7);
	}

IL_0022:
	{
		// if (SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf))
		bool L_2;
		L_2 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(2, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return RenderTextureFormat.ARGBHalf;
		return (int32_t)(2);
	}

IL_002c:
	{
		// return RenderTextureFormat.Default;
		return (int32_t)(7);
	}

IL_002e:
	{
		// return RenderTextureFormat.Default;
		return (int32_t)(7);
	}
}
// System.Int32 Fluxy.FluxyStorage::GetBytesPerPixel(Fluxy.FluxyStorage/FluidTexturePrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FluxyStorage_GetBytesPerPixel_m56B2226E4603068A225CF172172D8E5158910526 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___precision0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___precision0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_002e;
	}

IL_0014:
	{
		// if (SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBFloat))
		bool L_1;
		L_1 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(((int32_t)11), NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return 16;
		return ((int32_t)16);
	}

IL_0020:
	{
		// return 4;
		return 4;
	}

IL_0022:
	{
		// if (SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf))
		bool L_2;
		L_2 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(2, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return 8;
		return 8;
	}

IL_002c:
	{
		// return 4;
		return 4;
	}

IL_002e:
	{
		// return 4;
		return 4;
	}
}
// System.Void Fluxy.FluxyStorage::ReallocateFramebuffer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyStorage_ReallocateFramebuffer_m0B65567E16D8565A443BD2139838BFCEB3852488 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, int32_t ___id0, int32_t ___resolution1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	{
		// var fb = framebuffers[id];
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_0 = __this->___framebuffers_9;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_2;
		L_2 = List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90(L_0, L_1, List_1_get_Item_mD3B29E7D509902BD2E82D0597156FD3600446B90_RuntimeMethod_var);
		V_0 = L_2;
		// if (fb.stateA != null && fb.stateA.width == resolution * fb.stateSupersampling)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_3 = V_0;
		NullCheck(L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = L_3->___stateA_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_6 = V_0;
		NullCheck(L_6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = L_6->___stateA_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		int32_t L_9 = ___resolution1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___stateSupersampling_6;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_9, L_11))))))
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// var densityFormat = GetRenderTextureFormat(densityPrecision);
		int32_t L_12 = __this->___densityPrecision_7;
		int32_t L_13;
		L_13 = FluxyStorage_GetRenderTextureFormat_m63EBA17A4DC84E81FF0D9C05C935170D84F1B583(__this, L_12, NULL);
		V_1 = L_13;
		// var velocityFormat = GetRenderTextureFormat(velocityPrecision);
		int32_t L_14 = __this->___velocityPrecision_8;
		int32_t L_15;
		L_15 = FluxyStorage_GetRenderTextureFormat_m63EBA17A4DC84E81FF0D9C05C935170D84F1B583(__this, L_14, NULL);
		V_2 = L_15;
		// var velocityA = RenderTexture.GetTemporary(resolution, resolution, 0, velocityFormat);
		int32_t L_16 = ___resolution1;
		int32_t L_17 = ___resolution1;
		int32_t L_18 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19;
		L_19 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_16, L_17, 0, L_18, NULL);
		V_3 = L_19;
		// var velocityB = RenderTexture.GetTemporary(resolution, resolution, 0, velocityFormat);
		int32_t L_20 = ___resolution1;
		int32_t L_21 = ___resolution1;
		int32_t L_22 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23;
		L_23 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_20, L_21, 0, L_22, NULL);
		V_4 = L_23;
		// var stateA = RenderTexture.GetTemporary(resolution * fb.stateSupersampling, resolution * fb.stateSupersampling, 0, densityFormat);
		int32_t L_24 = ___resolution1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___stateSupersampling_6;
		int32_t L_27 = ___resolution1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___stateSupersampling_6;
		int32_t L_30 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31;
		L_31 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(((int32_t)il2cpp_codegen_multiply(L_24, L_26)), ((int32_t)il2cpp_codegen_multiply(L_27, L_29)), 0, L_30, NULL);
		V_5 = L_31;
		// var stateB = RenderTexture.GetTemporary(resolution * fb.stateSupersampling, resolution * fb.stateSupersampling, 0, densityFormat);
		int32_t L_32 = ___resolution1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->___stateSupersampling_6;
		int32_t L_35 = ___resolution1;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = L_36->___stateSupersampling_6;
		int32_t L_38 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39;
		L_39 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(((int32_t)il2cpp_codegen_multiply(L_32, L_34)), ((int32_t)il2cpp_codegen_multiply(L_35, L_37)), 0, L_38, NULL);
		V_6 = L_39;
		// var tileID = RenderTexture.GetTemporary(resolution, resolution, 0, RenderTextureFormat.RHalf);
		int32_t L_40 = ___resolution1;
		int32_t L_41 = ___resolution1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42;
		L_42 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_40, L_41, 0, ((int32_t)15), NULL);
		V_7 = L_42;
		// velocityA.filterMode = FilterMode.Point;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_3;
		NullCheck(L_43);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_43, 0, NULL);
		// velocityB.filterMode = FilterMode.Point;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_4;
		NullCheck(L_44);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_44, 0, NULL);
		// stateA.filterMode = FilterMode.Point;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_5;
		NullCheck(L_45);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_45, 0, NULL);
		// stateB.filterMode = FilterMode.Point;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_6;
		NullCheck(L_46);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_46, 0, NULL);
		// tileID.filterMode = FilterMode.Point;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_7;
		NullCheck(L_47);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_47, 0, NULL);
		// if (fb.velocityA != null)
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_48 = V_0;
		NullCheck(L_48);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = L_48->___velocityA_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_00fb;
		}
	}
	{
		// Graphics.Blit(fb.velocityA, velocityA);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_51 = V_0;
		NullCheck(L_51);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = L_51->___velocityA_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_52, L_53, NULL);
		// Graphics.Blit(fb.stateA, stateA);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_54 = V_0;
		NullCheck(L_54);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = L_54->___stateA_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = V_5;
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_55, L_56, NULL);
		// Graphics.Blit(fb.tileID, tileID);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_57 = V_0;
		NullCheck(L_57);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58 = L_57->___tileID_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = V_7;
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_58, L_59, NULL);
		goto IL_013d;
	}

IL_00fb:
	{
		// var previousActive = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60;
		L_60 = RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345(NULL);
		// RenderTexture.active = velocityA;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_3;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_61, NULL);
		// GL.Clear(false, true, Color.clear);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_62;
		L_62 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_62, NULL);
		// RenderTexture.active = stateA;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_63 = V_5;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_63, NULL);
		// GL.Clear(false, true, Color.clear);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64;
		L_64 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_64, NULL);
		// RenderTexture.active = tileID;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = V_7;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_65, NULL);
		// GL.Clear(false, true, Color.clear);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_66, NULL);
		// RenderTexture.active = previousActive;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_60, NULL);
	}

IL_013d:
	{
		// RenderTexture.ReleaseTemporary(fb.velocityA);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_67 = V_0;
		NullCheck(L_67);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68 = L_67->___velocityA_0;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_68, NULL);
		// RenderTexture.ReleaseTemporary(fb.velocityB);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_69 = V_0;
		NullCheck(L_69);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_70 = L_69->___velocityB_1;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_70, NULL);
		// RenderTexture.ReleaseTemporary(fb.stateA);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_71 = V_0;
		NullCheck(L_71);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_72 = L_71->___stateA_2;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_72, NULL);
		// RenderTexture.ReleaseTemporary(fb.stateB);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_73 = V_0;
		NullCheck(L_73);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74 = L_73->___stateB_3;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_74, NULL);
		// RenderTexture.ReleaseTemporary(fb.tileID);
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_75 = V_0;
		NullCheck(L_75);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = L_75->___tileID_4;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_76, NULL);
		// fb.velocityA = velocityA;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_77 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = V_3;
		NullCheck(L_77);
		L_77->___velocityA_0 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&L_77->___velocityA_0), (void*)L_78);
		// fb.velocityB = velocityB;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_79 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = V_4;
		NullCheck(L_79);
		L_79->___velocityB_1 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&L_79->___velocityB_1), (void*)L_80);
		// fb.stateA = stateA;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_81 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = V_5;
		NullCheck(L_81);
		L_81->___stateA_2 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&L_81->___stateA_2), (void*)L_82);
		// fb.stateB = stateB;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_83 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = V_6;
		NullCheck(L_83);
		L_83->___stateB_3 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&L_83->___stateB_3), (void*)L_84);
		// fb.tileID = tileID;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_85 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = V_7;
		NullCheck(L_85);
		L_85->___tileID_4 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&L_85->___tileID_4), (void*)L_86);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyStorage__ctor_m8D46DAE4555900452D4C0D0042EAA589D2A730B0 (FluxyStorage_t0C3B344544013CB708C6BAE49043BBD738FD1E5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m79B4FDD274D98AB95B99EEAFB057AE717CE6CF57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int memoryBudget = 32;
		__this->___memoryBudget_6 = ((int32_t)32);
		// public FluidTexturePrecision densityPrecision = FluidTexturePrecision.Half;
		__this->___densityPrecision_7 = 1;
		// public FluidTexturePrecision velocityPrecision = FluidTexturePrecision.Half;
		__this->___velocityPrecision_8 = 1;
		// public List<Framebuffer> framebuffers = new List<Framebuffer>();
		List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5* L_0 = (List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5*)il2cpp_codegen_object_new(List_1_tBFFF7A6FA0F1334DCC0A3BA612BA6E74E0BFFED5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m79B4FDD274D98AB95B99EEAFB057AE717CE6CF57(L_0, List_1__ctor_m79B4FDD274D98AB95B99EEAFB057AE717CE6CF57_RuntimeMethod_var);
		__this->___framebuffers_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___framebuffers_9), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Fluxy.FluxyStorage/Framebuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Framebuffer__ctor_mA4412BE8B0E1345D378FDEDC70BC6050E5907E03 (Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* __this, int32_t ___desiredResolution0, int32_t ___stateSupersampling1, const RuntimeMethod* method) 
{
	{
		// public int desiredResolution = 256;
		__this->___desiredResolution_5 = ((int32_t)256);
		// public int stateSupersampling = 1;
		__this->___stateSupersampling_6 = 1;
		// public Framebuffer(int desiredResolution, int stateSupersampling = 1)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.desiredResolution = desiredResolution;
		int32_t L_0 = ___desiredResolution0;
		__this->___desiredResolution_5 = L_0;
		// this.stateSupersampling = Mathf.Max(1, stateSupersampling);
		int32_t L_1 = ___stateSupersampling1;
		int32_t L_2;
		L_2 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(1, L_1, NULL);
		__this->___stateSupersampling_6 = L_2;
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
// System.Void Fluxy.FluxyTarget::add_OnSplat(Fluxy.FluxyTarget/SplatCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_add_OnSplat_m3519AC81B8EF00B578C0F50318A4233B3F21A21E (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* V_0 = NULL;
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* V_1 = NULL;
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* V_2 = NULL;
	{
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_0 = __this->___OnSplat_35;
		V_0 = L_0;
	}

IL_0007:
	{
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_1 = V_0;
		V_1 = L_1;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_2 = V_1;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*)CastclassSealed((RuntimeObject*)L_4, SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A_il2cpp_TypeInfo_var));
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A** L_5 = (&__this->___OnSplat_35);
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_6 = V_2;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_7 = V_1;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_8;
		L_8 = InterlockedCompareExchangeImpl<SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*>(L_5, L_6, L_7);
		V_0 = L_8;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_9 = V_0;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_10 = V_1;
		if ((!(((RuntimeObject*)(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*)L_9) == ((RuntimeObject*)(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Fluxy.FluxyTarget::remove_OnSplat(Fluxy.FluxyTarget/SplatCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_remove_OnSplat_m34509805F644BD3A703D31CBDFD1C5C8DE11878B (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* V_0 = NULL;
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* V_1 = NULL;
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* V_2 = NULL;
	{
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_0 = __this->___OnSplat_35;
		V_0 = L_0;
	}

IL_0007:
	{
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_1 = V_0;
		V_1 = L_1;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_2 = V_1;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*)CastclassSealed((RuntimeObject*)L_4, SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A_il2cpp_TypeInfo_var));
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A** L_5 = (&__this->___OnSplat_35);
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_6 = V_2;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_7 = V_1;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_8;
		L_8 = InterlockedCompareExchangeImpl<SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*>(L_5, L_6, L_7);
		V_0 = L_8;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_9 = V_0;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_10 = V_1;
		if ((!(((RuntimeObject*)(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*)L_9) == ((RuntimeObject*)(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyTarget::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyTarget_get_velocity_mDFACD8CDE76B3088A792AB2951EA836EE61620A0 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	{
		// get { return (transform.position - oldPosition) / Time.deltaTime; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___oldPosition_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_3, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Fluxy.FluxyTarget::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyTarget_get_angularVelocity_m9603A8359A558A84BE331803F560EF82B86295B9 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion rotationDelta = transform.rotation * Quaternion.Inverse(oldRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___oldRotation_31;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// return new Vector3(rotationDelta.x, rotationDelta.y, rotationDelta.z) * 2.0f / Time.deltaTime;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		float L_6 = L_5.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		float L_8 = L_7.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		float L_10 = L_9.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_6, L_8, L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_11, (2.0f), NULL);
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_12, L_13, NULL);
		return L_14;
	}
}
// System.Void Fluxy.FluxyTarget::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_OnEnable_m14064FF569DD6F6F886183C404FA1ECEB6C3C848 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	{
		// SetOldState();
		FluxyTarget_SetOldState_m10DE250A0B4B227A99A9B931DAC28F858E88F28B(__this, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_Update_m66C3DE2B5E0EA878152945B14524A7309F170286 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	{
		// if (rateOverTime > 0)
		float L_0 = __this->___rateOverTime_6;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// timeAccumulator += Time.deltaTime * rateOverTime;
		float L_1 = __this->___timeAccumulator_32;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_3 = __this->___rateOverTime_6;
		__this->___timeAccumulator_32 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// timeSplats = Mathf.FloorToInt(timeAccumulator);
		float L_4 = __this->___timeAccumulator_32;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_4, NULL);
		__this->___timeSplats_34 = L_5;
		// timeAccumulator -= timeSplats;
		float L_6 = __this->___timeAccumulator_32;
		int32_t L_7 = __this->___timeSplats_34;
		__this->___timeAccumulator_32 = ((float)il2cpp_codegen_subtract(L_6, ((float)L_7)));
		return;
	}

IL_004c:
	{
		// timeAccumulator = 0;
		__this->___timeAccumulator_32 = (0.0f);
		// timeSplats = 0;
		__this->___timeSplats_34 = 0;
		// }
		return;
	}
}
// System.Void Fluxy.FluxyTarget::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_LateUpdate_mCA6DB32E1A8059A3C248A521D05ECAA71D532191 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	{
		// SetOldState();
		FluxyTarget_SetOldState_m10DE250A0B4B227A99A9B931DAC28F858E88F28B(__this, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyTarget::SetOldState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_SetOldState_m10DE250A0B4B227A99A9B931DAC28F858E88F28B (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	{
		// oldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___oldPosition_30 = L_1;
		// oldRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->___oldRotation_31 = L_3;
		// }
		return;
	}
}
// System.Single Fluxy.FluxyTarget::GetAspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FluxyTarget_GetAspectRatio_m19555497AD4ABD36E20F8DA9D4EE3825A4985FC2 (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (densityTexture != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___densityTexture_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// return densityTexture.width / (float)densityTexture.height;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = __this->___densityTexture_25;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = __this->___densityTexture_25;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		return ((float)(((float)L_3)/((float)L_5)));
	}

IL_0028:
	{
		// else if (velocityTexture != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->___velocityTexture_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// return velocityTexture.width / (float)velocityTexture.height;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = __this->___velocityTexture_18;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = __this->___velocityTexture_18;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		return ((float)(((float)L_9)/((float)L_11)));
	}

IL_0050:
	{
		// else return 1;
		return (1.0f);
	}
}
// System.Void Fluxy.FluxyTarget::Splat(Fluxy.FluxyContainer,Fluxy.FluxyStorage/Framebuffer,System.Int32& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Vector4& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget_Splat_m4D946277056868B186EAAD3ED4DF1F5F5DD2BD2C (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container0, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb1, int32_t* ___tileIndex2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0909531A7FAC205ABFB091488045C4DEB42A381B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43999CE96C0E92E900C457A26365CDA7A4B90A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94CB2375BA8D88D3DAEA9045641C4D463AAA21E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3A00AEC2690E02C6990AA7ABF32E6A078CE45B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC835D788CDC7B69BA4F951C6D4AEE2A5217BEA76);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_19;
	memset((&V_19), 0, sizeof(V_19));
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* G_B17_0 = NULL;
	SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* G_B16_0 = NULL;
	{
		// if (splatMaterial != null && isActiveAndEnabled)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___splatMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_03f5;
		}
	}
	{
		bool L_2;
		L_2 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (!L_2)
		{
			goto IL_03f5;
		}
	}
	{
		// Quaternion worldToContainerR = Quaternion.Inverse(container.transform.rotation);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_3 = ___container0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_5, NULL);
		V_0 = L_6;
		// Vector3 relativeVelocity = container.TransformWorldVectorToUVSpace(velocity - container.velocity * container.velocityScale, rect);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_7 = ___container0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = FluxyTarget_get_velocity_mDFACD8CDE76B3088A792AB2951EA836EE61620A0(__this, NULL);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_9 = ___container0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = FluxyContainer_get_velocity_mDC273E5096077DC213EB1220FE1B90423D977D3E_inline(L_9, NULL);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_11 = ___container0;
		NullCheck(L_11);
		float L_12 = L_11->___velocityScale_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_13, NULL);
		V_8 = L_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_15 = ___rect3;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = FluxyContainer_TransformWorldVectorToUVSpace_m41523FEAECA65580126FB15954133E8E95970A37(L_7, (&V_8), L_15, NULL);
		V_1 = L_16;
		// float relativeAngularVel = container.TransformWorldVectorToUVSpace(angularVelocity, rect).z -
		//                            container.TransformWorldVectorToUVSpace(container.angularVelocity, rect).z * container.velocityScale;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_17 = ___container0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = FluxyTarget_get_angularVelocity_m9603A8359A558A84BE331803F560EF82B86295B9(__this, NULL);
		V_8 = L_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_19 = ___rect3;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = FluxyContainer_TransformWorldVectorToUVSpace_m41523FEAECA65580126FB15954133E8E95970A37(L_17, (&V_8), L_19, NULL);
		float L_21 = L_20.___z_4;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_22 = ___container0;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_23 = ___container0;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = FluxyContainer_get_angularVelocity_m2E3BA4F1D578664A3B194E49762A357C866EBC2E_inline(L_23, NULL);
		V_9 = L_24;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_25 = ___rect3;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = FluxyContainer_TransformWorldVectorToUVSpace_m41523FEAECA65580126FB15954133E8E95970A37(L_22, (&V_9), L_25, NULL);
		float L_27 = L_26.___z_4;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_28 = ___container0;
		NullCheck(L_28);
		float L_29 = L_28->___velocityScale_17;
		V_2 = ((float)il2cpp_codegen_subtract(L_21, ((float)il2cpp_codegen_multiply(L_27, L_29))));
		// float speed = relativeVelocity.magnitude;
		float L_30;
		L_30 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_3 = L_30;
		// if (speed > FluxyUtils.epsilon)
		float L_31 = V_3;
		if ((!(((float)L_31) > ((float)(9.99999975E-06f)))))
		{
			goto IL_00b8;
		}
	}
	{
		// relativeVelocity /= speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		float L_33 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_32, L_33, NULL);
		V_1 = L_34;
		// relativeVelocity *= Mathf.Min(speed, maxRelativeVelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = V_3;
		float L_37 = __this->___maxRelativeVelocity_19;
		float L_38;
		L_38 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_35, L_38, NULL);
		V_1 = L_39;
	}

IL_00b8:
	{
		// Vector4 vel = Vector3.Scale(relativeVelocity, velocityScale) + force;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___velocityScale_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___force_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_42, L_43, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45;
		L_45 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_44, NULL);
		V_4 = L_45;
		// vel.w = velocityWeight;
		float L_46 = __this->___velocityWeight_17;
		(&V_4)->___w_4 = L_46;
		// relativeAngularVel = Mathf.Clamp(relativeAngularVel, -maxRelativeAngularVelocity, maxRelativeAngularVelocity) * angularVelocityScale;
		float L_47 = V_2;
		float L_48 = __this->___maxRelativeAngularVelocity_21;
		float L_49 = __this->___maxRelativeAngularVelocity_21;
		float L_50;
		L_50 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_47, ((-L_48)), L_49, NULL);
		float L_51 = __this->___angularVelocityScale_22;
		V_2 = ((float)il2cpp_codegen_multiply(L_50, L_51));
		// splatMaterial.SetInt("_TileIndex", tileIndex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___splatMaterial_4;
		int32_t* L_53 = ___tileIndex2;
		int32_t L_54 = *((int32_t*)L_53);
		NullCheck(L_52);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_52, _stringLiteral614B9DA89AE5B7B4C938ADC253877AF567A07C95, L_54, NULL);
		// splatMaterial.SetInt("_SrcBlend", (int)srcBlend);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = __this->___splatMaterial_4;
		int32_t L_56 = __this->___srcBlend_26;
		NullCheck(L_55);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_55, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, L_56, NULL);
		// splatMaterial.SetInt("_DstBlend", (int)dstBlend);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = __this->___splatMaterial_4;
		int32_t L_58 = __this->___dstBlend_27;
		NullCheck(L_57);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_57, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, L_58, NULL);
		// splatMaterial.SetInt("_BlendOp", (int)blendOp);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = __this->___splatMaterial_4;
		int32_t L_60 = __this->___blendOp_28;
		NullCheck(L_59);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_59, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, L_60, NULL);
		// float aspectRatio = GetAspectRatio();
		float L_61;
		L_61 = FluxyTarget_GetAspectRatio_m19555497AD4ABD36E20F8DA9D4EE3825A4985FC2(__this, NULL);
		V_5 = L_61;
		// if (rateOverDistance > 0)
		float L_62 = __this->___rateOverDistance_7;
		if ((!(((float)L_62) > ((float)(0.0f)))))
		{
			goto IL_01b0;
		}
	}
	{
		// distanceAccumulator += Vector3.Distance(transform.position, oldPosition) * rateOverDistance;
		float L_63 = __this->___distanceAccumulator_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = __this->___oldPosition_30;
		float L_67;
		L_67 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_65, L_66, NULL);
		float L_68 = __this->___rateOverDistance_7;
		__this->___distanceAccumulator_33 = ((float)il2cpp_codegen_add(L_63, ((float)il2cpp_codegen_multiply(L_67, L_68))));
		// distanceSplats = Mathf.FloorToInt(distanceAccumulator);
		float L_69 = __this->___distanceAccumulator_33;
		int32_t L_70;
		L_70 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_69, NULL);
		V_6 = L_70;
		// distanceAccumulator -= distanceSplats;
		float L_71 = __this->___distanceAccumulator_33;
		int32_t L_72 = V_6;
		__this->___distanceAccumulator_33 = ((float)il2cpp_codegen_subtract(L_71, ((float)L_72)));
		goto IL_01be;
	}

IL_01b0:
	{
		// distanceAccumulator = 0;
		__this->___distanceAccumulator_33 = (0.0f);
		// distanceSplats = 0;
		V_6 = 0;
	}

IL_01be:
	{
		// int totalSplats = rateOverSteps + timeSplats + distanceSplats;
		int32_t L_73 = __this->___rateOverSteps_5;
		int32_t L_74 = __this->___timeSplats_34;
		int32_t L_75 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		// for (int i = 1; i <= totalSplats; ++i)
		V_10 = 1;
		goto IL_03d7;
	}

IL_01d8:
	{
		// float interpolationFactor = i / (float)totalSplats;
		int32_t L_76 = V_10;
		int32_t L_77 = V_7;
		V_11 = ((float)(((float)L_76)/((float)L_77)));
		// Vector4 randomOffset = (Vector4)Random.insideUnitCircle * positionRandomness;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = Random_get_insideUnitCircle_mB05E074D2463729E20EC637F10CFEE90FC587E51(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79;
		L_79 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_78, NULL);
		float L_80 = __this->___positionRandomness_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81;
		L_81 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_79, L_80, NULL);
		V_12 = L_81;
		// float randomScale = Random.Range(-scaleRandomness, scaleRandomness) * 0.5f;
		float L_82 = __this->___scaleRandomness_16;
		float L_83 = __this->___scaleRandomness_16;
		float L_84;
		L_84 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_82)), L_83, NULL);
		V_13 = ((float)il2cpp_codegen_multiply(L_84, (0.5f)));
		// float randomRotation = Random.Range(-rotationRandomness, rotationRandomness) * Mathf.PI;
		float L_85 = __this->___rotationRandomness_13;
		float L_86 = __this->___rotationRandomness_13;
		float L_87;
		L_87 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_85)), L_86, NULL);
		V_14 = ((float)il2cpp_codegen_multiply(L_87, (3.14159274f)));
		// float orientation = rotation;
		float L_88 = __this->___rotation_12;
		V_15 = L_88;
		// if (!overrideRotation)
		bool L_89 = __this->___overrideRotation_11;
		if (L_89)
		{
			goto IL_026b;
		}
	}
	{
		// orientation = -(worldToContainerR * Quaternion.Lerp(oldRotation, transform.rotation, interpolationFactor)).eulerAngles.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_90 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91 = __this->___oldRotation_31;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_92);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_92, NULL);
		float L_94 = V_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95;
		L_95 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_91, L_93, L_94, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_96;
		L_96 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_90, L_95, NULL);
		V_18 = L_96;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_18), NULL);
		float L_98 = L_97.___z_4;
		V_15 = ((-L_98));
	}

IL_026b:
	{
		// splatMaterial.SetFloat("_SplatRotation", orientation * Mathf.Deg2Rad + randomRotation);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99 = __this->___splatMaterial_4;
		float L_100 = V_15;
		float L_101 = V_14;
		NullCheck(L_99);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_99, _stringLiteralC3A00AEC2690E02C6990AA7ABF32E6A078CE45B4, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_100, (0.0174532924f))), L_101)), NULL);
		// Vector2 projectionSize = scale + new Vector2(randomScale, randomScale);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = __this->___scale_15;
		float L_103 = V_13;
		float L_104 = V_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_105), L_103, L_104, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106;
		L_106 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_102, L_105, NULL);
		V_16 = L_106;
		// if (overridePosition)
		bool L_107 = __this->___overridePosition_8;
		if (!L_107)
		{
			goto IL_02d4;
		}
	}
	{
		// projection = new Vector4(position.x, position.y, projectionSize.x * aspectRatio, projectionSize.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_108 = (&__this->___position_9);
		float L_109 = L_108->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_110 = (&__this->___position_9);
		float L_111 = L_110->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = V_16;
		float L_113 = L_112.___x_0;
		float L_114 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115 = V_16;
		float L_116 = L_115.___y_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_17), L_109, L_111, ((float)il2cpp_codegen_multiply(L_113, L_114)), L_116, NULL);
		goto IL_0302;
	}

IL_02d4:
	{
		// Vector3 targetPos = Vector3.Lerp(oldPosition, transform.position, interpolationFactor);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = __this->___oldPosition_30;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_118, NULL);
		float L_120 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_117, L_119, L_120, NULL);
		V_19 = L_121;
		// projection = container.ProjectTarget(targetPos, projectionSize, aspectRatio, scaleWithDistance);
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_122 = ___container0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123 = V_16;
		float L_124 = V_5;
		bool L_125 = __this->___scaleWithDistance_14;
		NullCheck(L_122);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_126;
		L_126 = VirtualFuncInvoker4< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, bool >::Invoke(11 /* UnityEngine.Vector4 Fluxy.FluxyContainer::ProjectTarget(UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Vector2,System.Single,System.Boolean) */, L_122, (&V_19), L_123, L_124, L_125);
		V_17 = L_126;
	}

IL_0302:
	{
		// splatMaterial.SetVector("_SplatTransform", projection + randomOffset);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127 = __this->___splatMaterial_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_128 = V_17;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_129 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_130;
		L_130 = Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline(L_128, L_129, NULL);
		NullCheck(L_127);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_127, _stringLiteral94CB2375BA8D88D3DAEA9045641C4D463AAA21E1, L_130, NULL);
		// splatMaterial.SetVector("_SplatWeights", new Color(color.r,color.g,color.b,color.a * densityWeight));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131 = __this->___splatMaterial_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_132 = (&__this->___color_29);
		float L_133 = L_132->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_134 = (&__this->___color_29);
		float L_135 = L_134->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_136 = (&__this->___color_29);
		float L_137 = L_136->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_138 = (&__this->___color_29);
		float L_139 = L_138->___a_3;
		float L_140 = __this->___densityWeight_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141;
		memset((&L_141), 0, sizeof(L_141));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_141), L_133, L_135, L_137, ((float)il2cpp_codegen_multiply(L_139, L_140)), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_142;
		L_142 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_141, NULL);
		NullCheck(L_131);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_131, _stringLiteral0909531A7FAC205ABFB091488045C4DEB42A381B, L_142, NULL);
		// Graphics.Blit(densityTexture, fb.stateA, splatMaterial, 0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_143 = __this->___densityTexture_25;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_144 = ___fb1;
		NullCheck(L_144);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_145 = L_144->___stateA_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146 = __this->___splatMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_143, L_145, L_146, 0, NULL);
		// splatMaterial.SetFloat("_AngularVelocity", relativeAngularVel);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_147 = __this->___splatMaterial_4;
		float L_148 = V_2;
		NullCheck(L_147);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_147, _stringLiteral43999CE96C0E92E900C457A26365CDA7A4B90A46, L_148, NULL);
		// splatMaterial.SetVector("_SplatWeights", vel);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149 = __this->___splatMaterial_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_150 = V_4;
		NullCheck(L_149);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_149, _stringLiteral0909531A7FAC205ABFB091488045C4DEB42A381B, L_150, NULL);
		// splatMaterial.SetTexture("_Velocity", velocityTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151 = __this->___splatMaterial_4;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_152 = __this->___velocityTexture_18;
		NullCheck(L_151);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_151, _stringLiteralC835D788CDC7B69BA4F951C6D4AEE2A5217BEA76, L_152, NULL);
		// Graphics.Blit(densityTexture, fb.velocityA, splatMaterial, 1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_153 = __this->___densityTexture_25;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_154 = ___fb1;
		NullCheck(L_154);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_155 = L_154->___velocityA_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156 = __this->___splatMaterial_4;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_153, L_155, L_156, 1, NULL);
		// for (int i = 1; i <= totalSplats; ++i)
		int32_t L_157 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_157, 1));
	}

IL_03d7:
	{
		// for (int i = 1; i <= totalSplats; ++i)
		int32_t L_158 = V_10;
		int32_t L_159 = V_7;
		if ((((int32_t)L_158) <= ((int32_t)L_159)))
		{
			goto IL_01d8;
		}
	}
	{
		// OnSplat?.Invoke(this, container, fb, rect);
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_160 = __this->___OnSplat_35;
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* L_161 = L_160;
		G_B16_0 = L_161;
		if (L_161)
		{
			G_B17_0 = L_161;
			goto IL_03eb;
		}
	}
	{
		return;
	}

IL_03eb:
	{
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_162 = ___container0;
		Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* L_163 = ___fb1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_164 = ___rect3;
		NullCheck(G_B17_0);
		SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_inline(G_B17_0, __this, L_162, L_163, L_164, NULL);
	}

IL_03f5:
	{
		// }
		return;
	}
}
// System.Void Fluxy.FluxyTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTarget__ctor_m92A80D53E08352DF7A559C692CF1D87CC5D6A37A (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* __this, const RuntimeMethod* method) 
{
	{
		// public int rateOverSteps = 1;
		__this->___rateOverSteps_5 = 1;
		// public Vector2 position = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___position_9 = L_0;
		// public bool overrideRotation = true;
		__this->___overrideRotation_11 = (bool)1;
		// public bool scaleWithDistance = true;
		__this->___scaleWithDistance_14 = (bool)1;
		// public Vector2 scale = new Vector2(0.1f,0.1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		__this->___scale_15 = L_1;
		// public float velocityWeight = 1;
		__this->___velocityWeight_17 = (1.0f);
		// public float maxRelativeVelocity = 8;
		__this->___maxRelativeVelocity_19 = (8.0f);
		// public Vector3 velocityScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		__this->___velocityScale_20 = L_2;
		// public float maxRelativeAngularVelocity = 12;
		__this->___maxRelativeAngularVelocity_21 = (12.0f);
		// public float angularVelocityScale = 1;
		__this->___angularVelocityScale_22 = (1.0f);
		// public Vector3 force = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___force_23 = L_3;
		// public float densityWeight = 1;
		__this->___densityWeight_24 = (1.0f);
		// public BlendMode srcBlend = BlendMode.SrcAlpha;
		__this->___srcBlend_26 = 5;
		// public BlendMode dstBlend = BlendMode.OneMinusSrcAlpha;
		__this->___dstBlend_27 = ((int32_t)10);
		// public Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___color_29 = L_4;
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
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_Multicast(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* currentDelegate = reinterpret_cast<SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___target0, ___container1, ___fb2, ___rect3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_Open(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___target0, ___container1, ___fb2, ___rect3, method);
}
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenStaticInvoker(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(__this->___method_ptr_0, method, NULL, ___target0, ___container1, ___fb2, ___rect3);
}
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_ClosedStaticInvoker(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___target0, ___container1, ___fb2, ___rect3);
}
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenVirtual(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	VirtualActionInvoker3< FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(il2cpp_codegen_method_get_slot(method), ___target0, ___container1, ___fb2, ___rect3);
}
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenInterface(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	InterfaceActionInvoker3< FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___target0, ___container1, ___fb2, ___rect3);
}
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenGenericVirtual(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker3< FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(method, ___target0, ___container1, ___fb2, ___rect3);
}
void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenGenericInterface(SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker3< FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(method, ___target0, ___container1, ___fb2, ___rect3);
}
// System.Void Fluxy.FluxyTarget/SplatCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplatCallback__ctor_mCE44692BF83326ED9F4C6F0221EFC2C45B64D6CF (SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_Multicast;
}
// System.Void Fluxy.FluxyTarget/SplatCallback::Invoke(Fluxy.FluxyTarget,Fluxy.FluxyContainer,Fluxy.FluxyStorage/Framebuffer,UnityEngine.Vector4& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24 (SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___target0, ___container1, ___fb2, ___rect3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fluxy.FluxyTarget/SplatCallback::BeginInvoke(Fluxy.FluxyTarget,Fluxy.FluxyContainer,Fluxy.FluxyStorage/Framebuffer,UnityEngine.Vector4& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplatCallback_BeginInvoke_m2F81EBE9BBDC98B98765431FC2FE360ED909CC2F (SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___target0;
	__d_args[1] = ___container1;
	__d_args[2] = ___fb2;
	__d_args[3] = Box(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var, &*___rect3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Fluxy.FluxyTarget/SplatCallback::EndInvoke(UnityEngine.Vector4& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplatCallback_EndInvoke_mD5D56D6C907BBE2CAD76647840D4E84E51AC010A (SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Fluxy.FluxyUtils::RelativeScreenHeight(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FluxyUtils_RelativeScreenHeight_m31996CE2FC4ACD8615CCAE5755EC9216BCA1D710 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___distance1, float ___size2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (camera.orthographic)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return size * 0.5F / camera.orthographicSize;
		float L_2 = ___size2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___camera0;
		NullCheck(L_3);
		float L_4;
		L_4 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_3, NULL);
		return ((float)(((float)il2cpp_codegen_multiply(L_2, (0.5f)))/L_4));
	}

IL_0017:
	{
		// var halfAngle = Mathf.Tan(Mathf.Deg2Rad * camera.fieldOfView * 0.5F);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___camera0;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_5, NULL);
		float L_7;
		L_7 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0174532924f), L_6)), (0.5f))));
		V_0 = L_7;
		// var relativeHeight = size * 0.5F / (distance * halfAngle);
		float L_8 = ___size2;
		float L_9 = ___distance1;
		float L_10 = V_0;
		// return relativeHeight;
		return ((float)(((float)il2cpp_codegen_multiply(L_8, (0.5f)))/((float)il2cpp_codegen_multiply(L_9, L_10))));
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
// UnityEngine.Vector2 Fluxy.RectPacking::Pack(UnityEngine.Vector4[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectPacking_Pack_mBD78886B59BC1CB9FAAB436D6DCCDE59F62EB9ED (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___rects0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices1, int32_t ___first2, int32_t ___length3, int32_t ___margin4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD041D8580AA4B4DB2DC848A4603EC68F497E1C4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDDBE889687B9137E363F432AF5965FAA9F5DDD9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF3B04374ADA9F52D7C2B8274E50BFF139BA053D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m136832F1BF1C2F06560274F781669A55CDB351C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m76192A0E049F507EF693F0599892A3B5E58D46A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* V_4 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_9;
	memset((&V_9), 0, sizeof(V_9));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// var comparer = new RectComparer();
		RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9* L_0 = (RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9*)il2cpp_codegen_object_new(RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RectComparer__ctor_m6D22810C9096305A5132B708C9D9C3D8FEF9488D(L_0, NULL);
		V_0 = L_0;
		// System.Array.Sort(rects, indices, first, length, comparer);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___rects0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___indices1;
		int32_t L_3 = ___first2;
		int32_t L_4 = ___length3;
		RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9* L_5 = V_0;
		Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD041D8580AA4B4DB2DC848A4603EC68F497E1C4B(L_1, L_2, L_3, L_4, L_5, Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD041D8580AA4B4DB2DC848A4603EC68F497E1C4B_RuntimeMethod_var);
		// System.Array.Sort(rects, first, length, comparer);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___rects0;
		int32_t L_7 = ___first2;
		int32_t L_8 = ___length3;
		RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9* L_9 = V_0;
		Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDDBE889687B9137E363F432AF5965FAA9F5DDD9A(L_6, L_7, L_8, L_9, Array_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDDBE889687B9137E363F432AF5965FAA9F5DDD9A_RuntimeMethod_var);
		// float area = 0;
		V_1 = (0.0f);
		// float maxWidth = 0;
		V_2 = (0.0f);
		// for (int i = first; i < first + length; ++i)
		int32_t L_10 = ___first2;
		V_6 = L_10;
		goto IL_006e;
	}

IL_002a:
	{
		// area += (rects[i].z + margin) * (rects[i].w + margin);
		float L_11 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___rects0;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___z_3;
		int32_t L_15 = ___margin4;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___rects0;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___w_4;
		int32_t L_19 = ___margin4;
		V_1 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_14, ((float)L_15))), ((float)il2cpp_codegen_add(L_18, ((float)L_19)))))));
		// maxWidth = Mathf.Max(maxWidth, rects[i].z + margin);
		float L_20 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___rects0;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		float L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___z_3;
		int32_t L_24 = ___margin4;
		float L_25;
		L_25 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_20, ((float)il2cpp_codegen_add(L_23, ((float)L_24))), NULL);
		V_2 = L_25;
		// for (int i = first; i < first + length; ++i)
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006e:
	{
		// for (int i = first; i < first + length; ++i)
		int32_t L_27 = V_6;
		int32_t L_28 = ___first2;
		int32_t L_29 = ___length3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29)))))
		{
			goto IL_002a;
		}
	}
	{
		// float startWidth = Mathf.Max(Mathf.Ceil(Mathf.Sqrt(area / 0.95f)), maxWidth);
		float L_30 = V_1;
		float L_31;
		L_31 = sqrtf(((float)(L_30/(0.949999988f))));
		float L_32;
		L_32 = ceilf(L_31);
		float L_33 = V_2;
		float L_34;
		L_34 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_32, L_33, NULL);
		V_3 = L_34;
		// List<Rect> spaces = new List<Rect> { new Rect(0, 0, startWidth, Mathf.Infinity) };
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_35 = (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*)il2cpp_codegen_object_new(List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		List_1__ctor_m136832F1BF1C2F06560274F781669A55CDB351C2(L_35, List_1__ctor_m136832F1BF1C2F06560274F781669A55CDB351C2_RuntimeMethod_var);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_36 = L_35;
		float L_37 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_38;
		memset((&L_38), 0, sizeof(L_38));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_38), (0.0f), (0.0f), L_37, (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_inline(L_36, L_38, List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_RuntimeMethod_var);
		V_4 = L_36;
		// var boundsSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_5 = L_39;
		// for (int i = first; i < first + length; ++i)
		int32_t L_40 = ___first2;
		V_7 = L_40;
		goto IL_0336;
	}

IL_00be:
	{
		// for (int s = spaces.Count - 1; s >= 0; --s)
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_41 = V_4;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_inline(L_41, List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_RuntimeMethod_var);
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		goto IL_02c4;
	}

IL_00ce:
	{
		// var space = spaces[s];
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_43 = V_4;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_45;
		L_45 = List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60(L_43, L_44, List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_RuntimeMethod_var);
		V_9 = L_45;
		// if (rects[i].z + margin > space.width || rects[i].w + margin > space.height) continue;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_46 = ___rects0;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		float L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___z_3;
		int32_t L_49 = ___margin4;
		float L_50;
		L_50 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_9), NULL);
		if ((((float)((float)il2cpp_codegen_add(L_48, ((float)L_49)))) > ((float)L_50)))
		{
			goto IL_02be;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_51 = ___rects0;
		int32_t L_52 = V_7;
		NullCheck(L_51);
		float L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___w_4;
		int32_t L_54 = ___margin4;
		float L_55;
		L_55 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_9), NULL);
		if ((((float)((float)il2cpp_codegen_add(L_53, ((float)L_54)))) > ((float)L_55)))
		{
			goto IL_02be;
		}
	}
	{
		// rects[i].x = spaces[s].x + margin;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_56 = ___rects0;
		int32_t L_57 = V_7;
		NullCheck(L_56);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_58 = V_4;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_60;
		L_60 = List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60(L_58, L_59, List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_RuntimeMethod_var);
		V_10 = L_60;
		float L_61;
		L_61 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_10), NULL);
		int32_t L_62 = ___margin4;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___x_1 = ((float)il2cpp_codegen_add(L_61, ((float)L_62)));
		// rects[i].y = spaces[s].y + margin;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_63 = ___rects0;
		int32_t L_64 = V_7;
		NullCheck(L_63);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_65 = V_4;
		int32_t L_66 = V_8;
		NullCheck(L_65);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_67;
		L_67 = List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60(L_65, L_66, List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_RuntimeMethod_var);
		V_10 = L_67;
		float L_68;
		L_68 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_10), NULL);
		int32_t L_69 = ___margin4;
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___y_2 = ((float)il2cpp_codegen_add(L_68, ((float)L_69)));
		// if ((int)rects[i].z + margin == (int)space.width && (int)rects[i].w + margin == (int)space.height)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_70 = ___rects0;
		int32_t L_71 = V_7;
		NullCheck(L_70);
		float L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___z_3;
		int32_t L_73 = ___margin4;
		float L_74;
		L_74 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_9), NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_72), L_73))) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_74)))))
		{
			goto IL_01b6;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_75 = ___rects0;
		int32_t L_76 = V_7;
		NullCheck(L_75);
		float L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___w_4;
		int32_t L_78 = ___margin4;
		float L_79;
		L_79 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_9), NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_77), L_78))) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_79)))))
		{
			goto IL_01b6;
		}
	}
	{
		// space = spaces[spaces.Count - 1];
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_80 = V_4;
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_81 = V_4;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_inline(L_81, List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_RuntimeMethod_var);
		NullCheck(L_80);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_83;
		L_83 = List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60(L_80, ((int32_t)il2cpp_codegen_subtract(L_82, 1)), List_1_get_Item_mB1D1E058732458D8005DC13FBF4FD887F67C8C60_RuntimeMethod_var);
		V_9 = L_83;
		// spaces.RemoveAt(spaces.Count - 1);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_84 = V_4;
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_85 = V_4;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_inline(L_85, List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_RuntimeMethod_var);
		NullCheck(L_84);
		List_1_RemoveAt_mF3B04374ADA9F52D7C2B8274E50BFF139BA053D7(L_84, ((int32_t)il2cpp_codegen_subtract(L_86, 1)), List_1_RemoveAt_mF3B04374ADA9F52D7C2B8274E50BFF139BA053D7_RuntimeMethod_var);
		goto IL_02a6;
	}

IL_01b6:
	{
		// else if ((int)rects[i].w + margin == (int)space.height)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_87 = ___rects0;
		int32_t L_88 = V_7;
		NullCheck(L_87);
		float L_89 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)))->___w_4;
		int32_t L_90 = ___margin4;
		float L_91;
		L_91 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_9), NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_89), L_90))) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_91)))))
		{
			goto IL_01f5;
		}
	}
	{
		// space.xMin += rects[i].z + margin;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_92 = (&V_9);
		float L_93;
		L_93 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_92, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_94 = ___rects0;
		int32_t L_95 = V_7;
		NullCheck(L_94);
		float L_96 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95)))->___z_3;
		int32_t L_97 = ___margin4;
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19(L_92, ((float)il2cpp_codegen_add(L_93, ((float)il2cpp_codegen_add(L_96, ((float)L_97))))), NULL);
		goto IL_02a6;
	}

IL_01f5:
	{
		// else if ((int)rects[i].z + margin == (int)space.width)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_98 = ___rects0;
		int32_t L_99 = V_7;
		NullCheck(L_98);
		float L_100 = ((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99)))->___z_3;
		int32_t L_101 = ___margin4;
		float L_102;
		L_102 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_9), NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_100), L_101))) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_102)))))
		{
			goto IL_0231;
		}
	}
	{
		// space.yMin += rects[i].w + margin;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_103 = (&V_9);
		float L_104;
		L_104 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_103, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_105 = ___rects0;
		int32_t L_106 = V_7;
		NullCheck(L_105);
		float L_107 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)))->___w_4;
		int32_t L_108 = ___margin4;
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE(L_103, ((float)il2cpp_codegen_add(L_104, ((float)il2cpp_codegen_add(L_107, ((float)L_108))))), NULL);
		goto IL_02a6;
	}

IL_0231:
	{
		// spaces.Add(new Rect(space.x + rects[i].z + margin,
		//                     space.y,
		//                     space.width - rects[i].z - margin,
		//                     rects[i].w + margin));
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_109 = V_4;
		float L_110;
		L_110 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_9), NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_111 = ___rects0;
		int32_t L_112 = V_7;
		NullCheck(L_111);
		float L_113 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))->___z_3;
		int32_t L_114 = ___margin4;
		float L_115;
		L_115 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_9), NULL);
		float L_116;
		L_116 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_9), NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_117 = ___rects0;
		int32_t L_118 = V_7;
		NullCheck(L_117);
		float L_119 = ((L_117)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_118)))->___z_3;
		int32_t L_120 = ___margin4;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_121 = ___rects0;
		int32_t L_122 = V_7;
		NullCheck(L_121);
		float L_123 = ((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_122)))->___w_4;
		int32_t L_124 = ___margin4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_125;
		memset((&L_125), 0, sizeof(L_125));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_125), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_110, L_113)), ((float)L_114))), L_115, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_116, L_119)), ((float)L_120))), ((float)il2cpp_codegen_add(L_123, ((float)L_124))), /*hidden argument*/NULL);
		NullCheck(L_109);
		List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_inline(L_109, L_125, List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_RuntimeMethod_var);
		// space.yMin += rects[i].w + margin;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_126 = (&V_9);
		float L_127;
		L_127 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_126, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_128 = ___rects0;
		int32_t L_129 = V_7;
		NullCheck(L_128);
		float L_130 = ((L_128)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_129)))->___w_4;
		int32_t L_131 = ___margin4;
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE(L_126, ((float)il2cpp_codegen_add(L_127, ((float)il2cpp_codegen_add(L_130, ((float)L_131))))), NULL);
	}

IL_02a6:
	{
		// if (s < spaces.Count)
		int32_t L_132 = V_8;
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_133 = V_4;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_inline(L_133, List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_RuntimeMethod_var);
		if ((((int32_t)L_132) >= ((int32_t)L_134)))
		{
			goto IL_02cc;
		}
	}
	{
		// spaces[s] = space;
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_135 = V_4;
		int32_t L_136 = V_8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_137 = V_9;
		NullCheck(L_135);
		List_1_set_Item_m76192A0E049F507EF693F0599892A3B5E58D46A1(L_135, L_136, L_137, List_1_set_Item_m76192A0E049F507EF693F0599892A3B5E58D46A1_RuntimeMethod_var);
		// break;
		goto IL_02cc;
	}

IL_02be:
	{
		// for (int s = spaces.Count - 1; s >= 0; --s)
		int32_t L_138 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_02c4:
	{
		// for (int s = spaces.Count - 1; s >= 0; --s)
		int32_t L_139 = V_8;
		if ((((int32_t)L_139) >= ((int32_t)0)))
		{
			goto IL_00ce;
		}
	}

IL_02cc:
	{
		// boundsSize.x = Mathf.Max(boundsSize.x, rects[i].x + rects[i].z + margin);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_140 = V_5;
		float L_141 = L_140.___x_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_142 = ___rects0;
		int32_t L_143 = V_7;
		NullCheck(L_142);
		float L_144 = ((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_143)))->___x_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_145 = ___rects0;
		int32_t L_146 = V_7;
		NullCheck(L_145);
		float L_147 = ((L_145)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_146)))->___z_3;
		int32_t L_148 = ___margin4;
		float L_149;
		L_149 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_141, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_144, L_147)), ((float)L_148))), NULL);
		(&V_5)->___x_0 = L_149;
		// boundsSize.y = Mathf.Max(boundsSize.y, rects[i].y + rects[i].w + margin);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_150 = V_5;
		float L_151 = L_150.___y_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_152 = ___rects0;
		int32_t L_153 = V_7;
		NullCheck(L_152);
		float L_154 = ((L_152)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_153)))->___y_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_155 = ___rects0;
		int32_t L_156 = V_7;
		NullCheck(L_155);
		float L_157 = ((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_156)))->___w_4;
		int32_t L_158 = ___margin4;
		float L_159;
		L_159 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_151, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_154, L_157)), ((float)L_158))), NULL);
		(&V_5)->___y_1 = L_159;
		// for (int i = first; i < first + length; ++i)
		int32_t L_160 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_160, 1));
	}

IL_0336:
	{
		// for (int i = first; i < first + length; ++i)
		int32_t L_161 = V_7;
		int32_t L_162 = ___first2;
		int32_t L_163 = ___length3;
		if ((((int32_t)L_161) < ((int32_t)((int32_t)il2cpp_codegen_add(L_162, L_163)))))
		{
			goto IL_00be;
		}
	}
	{
		// return boundsSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_164 = V_5;
		return L_164;
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
// System.Int32 Fluxy.RectPacking/RectComparer::Compare(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectComparer_Compare_mF11EF3F14117C091AC5F1ED30E92B1E81CDF6151 (RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int h = b.w.CompareTo(a.w);
		float* L_0 = (&(&___b1)->___w_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___a0;
		float L_2 = L_1.___w_4;
		int32_t L_3;
		L_3 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_0, L_2, NULL);
		V_0 = L_3;
		// if (h == 0) return b.z.CompareTo(a.z);
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if (h == 0) return b.z.CompareTo(a.z);
		float* L_5 = (&(&___b1)->___z_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		int32_t L_8;
		L_8 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_5, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		// return h;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void Fluxy.RectPacking/RectComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectComparer__ctor_m6D22810C9096305A5132B708C9D9C3D8FEF9488D (RectComparer_t3AB347DAAF5515BE8D1D8D0318AE11B5CC641AA9* __this, const RuntimeMethod* method) 
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
// System.Void Fluxy.FluxyTargetDetector::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTargetDetector_OnValidate_mFE3207A50E9C59860CAEAB933D4A9977A76C271B (FluxyTargetDetector_t803C22F696689E1E21081FD80008236D31E5EFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Array.Resize(ref colliders, maxTargets);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_0 = (&__this->___colliders_7);
		int32_t L_1 = __this->___maxTargets_5;
		Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE(L_0, L_1, Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE_RuntimeMethod_var);
		// Array.Resize(ref targets, maxTargets);
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9** L_2 = (&__this->___targets_8);
		int32_t L_3 = __this->___maxTargets_5;
		Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D(L_2, L_3, Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyTargetDetector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTargetDetector_Awake_m8F536732E99810AB78D959DAABCAA83113CE7B6A (FluxyTargetDetector_t803C22F696689E1E21081FD80008236D31E5EFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Array.Resize(ref colliders, maxTargets);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_0 = (&__this->___colliders_7);
		int32_t L_1 = __this->___maxTargets_5;
		Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE(L_0, L_1, Array_Resize_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mD0014B7BBBCDCC447B29FE7E39E2792001263EFE_RuntimeMethod_var);
		// Array.Resize(ref targets, maxTargets);
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9** L_2 = (&__this->___targets_8);
		int32_t L_3 = __this->___maxTargets_5;
		Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D(L_2, L_3, Array_Resize_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mF614D50885A5371FADB9549A86FFBD923821132D_RuntimeMethod_var);
		// }
		return;
	}
}
// Fluxy.FluxyTarget[] Fluxy.FluxyTargetDetector::GetTargets(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* FluxyTargetDetector_GetTargets_m3BD22AB881A9FA95B8AD110EF007261F02782FB0 (FluxyTargetDetector_t803C22F696689E1E21081FD80008236D31E5EFF5* __this, int32_t* ___targetCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_m8FDCBDEA2A41D9956AEA0433E018586E1E359AE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// targetCount = Physics.OverlapBoxNonAlloc(transform.position, size * 0.5f, colliders, Quaternion.identity, layers);
		int32_t* L_0 = ___targetCount0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.5f), NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5 = __this->___colliders_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7 = __this->___layers_6;
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_7, NULL);
		int32_t L_9;
		L_9 = Physics_OverlapBoxNonAlloc_m86ADE49B7A30F04397ED05D063D3AC2A2757B45D(L_2, L_4, L_5, L_6, L_8, NULL);
		*((int32_t*)L_0) = (int32_t)L_9;
		// for (int i = 0; i < targetCount; ++i)
		V_0 = 0;
		goto IL_005a;
	}

IL_003c:
	{
		// colliders[i].TryGetComponent(out targets[i]);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10 = __this->___colliders_7;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_14 = __this->___targets_8;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		NullCheck(L_13);
		bool L_16;
		L_16 = Component_TryGetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_m8FDCBDEA2A41D9956AEA0433E018586E1E359AE6(L_13, ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), Component_TryGetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_m8FDCBDEA2A41D9956AEA0433E018586E1E359AE6_RuntimeMethod_var);
		// for (int i = 0; i < targetCount; ++i)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < targetCount; ++i)
		int32_t L_18 = V_0;
		int32_t* L_19 = ___targetCount0;
		int32_t L_20 = *((int32_t*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_003c;
		}
	}
	{
		// return targets;
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_21 = __this->___targets_8;
		return L_21;
	}
}
// System.Void Fluxy.FluxyTargetDetector::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTargetDetector_OnDrawGizmosSelected_m3EA8F8BE473FC2770E1556D8A1013CEDCD033201 (FluxyTargetDetector_t803C22F696689E1E21081FD80008236D31E5EFF5* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = new Color(0.5f,0.8f,1,0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.800000012f), (1.0f), (0.5f), /*hidden argument*/NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_0, NULL);
		// Gizmos.DrawWireCube(transform.position, size);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___size_4;
		Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Fluxy.FluxyTargetDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTargetDetector__ctor_m9AF47FD89BB41A1850A55C5F75960BDBC13BE3AC (FluxyTargetDetector_t803C22F696689E1E21081FD80008236D31E5EFF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 size = new Vector3(0.5f, 0.5f, 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___size_4 = L_0;
		// public int maxTargets = 4;
		__this->___maxTargets_5 = 4;
		// public LayerMask layers = ~0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___layers_6 = L_1;
		// private Collider[] colliders = new Collider[0];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___colliders_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colliders_7), (void*)L_2);
		// private FluxyTarget[] targets = new FluxyTarget[0];
		FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9* L_3 = (FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9*)(FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9*)SZArrayNew(FluxyTargetU5BU5D_tCE1B7FB6E44E3F7D6AE0CCCE99C3F84D7FC184D9_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___targets_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targets_8), (void*)L_3);
		FluxyTargetProvider__ctor_mD591978039E62C95BA855B1BA58042E19413E657(__this, NULL);
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
// System.Void Fluxy.FluxyTargetProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyTargetProvider__ctor_mD591978039E62C95BA855B1BA58042E19413E657 (FluxyTargetProvider_t0F4C16ADB0BDAF113DD65044FF86E86F9B043078* __this, const RuntimeMethod* method) 
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
// System.Void FluxySamples.AdvectRigidbody::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvectRigidbody_Awake_m646F549AE5C5B1E31D8F222A26BD68F35F7E4252 (AdvectRigidbody_t97298DDF577AB5DBCF36D60921717BA47C7E4DCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void FluxySamples.AdvectRigidbody::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvectRigidbody_FixedUpdate_mF72D7B74D632D3B60C70DAA01993CD31EE743A9E (AdvectRigidbody_t97298DDF577AB5DBCF36D60921717BA47C7E4DCB* __this, const RuntimeMethod* method) 
{
	{
		// rb.velocity = container.GetVelocityAt(rb.position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_5;
		FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* L_1 = __this->___container_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_2, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = FluxyContainer_GetVelocityAt_m4EEC348FBC06AAA4DDC62D279C139E79C15E7DDE(L_1, L_3, NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.AdvectRigidbody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvectRigidbody__ctor_m0E4F24F5499088B65D101ECCCA82DAC18849D9C5 (AdvectRigidbody_t97298DDF577AB5DBCF36D60921717BA47C7E4DCB* __this, const RuntimeMethod* method) 
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
// System.Void FluxySamples.FluxyCharacter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_Start_m16D19C528705DCFA83BA230F23850BBD8361C723 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Physics.IgnoreLayerCollision(LayerMask.NameToLayer("Default"),LayerMask.NameToLayer("Ignore Raycast"),true);
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		int32_t L_1;
		L_1 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6, NULL);
		Physics_IgnoreLayerCollision_m56FED505BFFA2732B04CC4710F35E863FFB406AC(L_0, L_1, (bool)1, NULL);
		// m_Animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___m_Animator_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Animator_13), (void*)L_2);
		// m_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_Rigidbody_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbody_12), (void*)L_3);
		// m_Capsule = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4;
		L_4 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___m_Capsule_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Capsule_22), (void*)L_4);
		// m_CapsuleHeight = m_Capsule.height;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_5 = __this->___m_Capsule_22;
		NullCheck(L_5);
		float L_6;
		L_6 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_5, NULL);
		__this->___m_CapsuleHeight_20 = L_6;
		// m_CapsuleCenter = m_Capsule.center;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___m_Capsule_22;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_7, NULL);
		__this->___m_CapsuleCenter_21 = L_8;
		// m_Rigidbody.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___m_Rigidbody_12;
		NullCheck(L_9);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_9, ((int32_t)112), NULL);
		// m_OrigGroundCheckDistance = m_GroundCheckDistance;
		float L_10 = __this->___m_GroundCheckDistance_11;
		__this->___m_OrigGroundCheckDistance_15 = L_10;
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_Move_m3F6A7BA02D6A2E9D41AED55E8DE4E74795200608 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method) 
{
	{
		// if (move.magnitude > 1f) move.Normalize();
		float L_0;
		L_0 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___move0), NULL);
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		// if (move.magnitude > 1f) move.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&___move0), NULL);
	}

IL_0015:
	{
		// move = transform.InverseTransformDirection(move);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___move0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_1, L_2, NULL);
		___move0 = L_3;
		// CheckGroundStatus();
		FluxyCharacter_CheckGroundStatus_m424F203F886DB8686CC3DB62857087BEDB0BE564(__this, NULL);
		// move = Vector3.ProjectOnPlane(move, m_GroundNormal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___move0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___m_GroundNormal_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_4, L_5, NULL);
		___move0 = L_6;
		// m_TurnAmount = Mathf.Atan2(move.x, move.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___move0;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___move0;
		float L_10 = L_9.___z_4;
		float L_11;
		L_11 = atan2f(L_8, L_10);
		__this->___m_TurnAmount_17 = L_11;
		// m_ForwardAmount = move.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___move0;
		float L_13 = L_12.___z_4;
		__this->___m_ForwardAmount_18 = L_13;
		// ApplyExtraTurnRotation();
		FluxyCharacter_ApplyExtraTurnRotation_mE1EAEF22D06FAF7CD7DA4BA453635833FA27E9FA(__this, NULL);
		// if (m_IsGrounded)
		bool L_14 = __this->___m_IsGrounded_14;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		// HandleGroundedMovement(crouch, jump);
		bool L_15 = ___crouch1;
		bool L_16 = ___jump2;
		FluxyCharacter_HandleGroundedMovement_m844EAC4330FAAE23EC18C0B9D0E592D1C306D71D(__this, L_15, L_16, NULL);
		goto IL_0078;
	}

IL_0072:
	{
		// HandleAirborneMovement();
		FluxyCharacter_HandleAirborneMovement_m507D7114F7FED861302B5C0CDAA3E65367CF7AFA(__this, NULL);
	}

IL_0078:
	{
		// ScaleCapsuleForCrouching(crouch);
		bool L_17 = ___crouch1;
		FluxyCharacter_ScaleCapsuleForCrouching_m32EF1CD6E53ED8B56A682B82DA0F99B00B17C5B6(__this, L_17, NULL);
		// PreventStandingInLowHeadroom();
		FluxyCharacter_PreventStandingInLowHeadroom_m266F53FB36AEC85E1FC206C8413CE529E030FE11(__this, NULL);
		// UpdateAnimator(move);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___move0;
		FluxyCharacter_UpdateAnimator_mD3D50826A91FB6754F3F1374945A7A03C3E5F6F5(__this, L_18, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::ScaleCapsuleForCrouching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_ScaleCapsuleForCrouching_m32EF1CD6E53ED8B56A682B82DA0F99B00B17C5B6 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, bool ___crouch0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (m_IsGrounded && crouch)
		bool L_0 = __this->___m_IsGrounded_14;
		bool L_1 = ___crouch0;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_0057;
		}
	}
	{
		// if (m_Crouching) return;
		bool L_2 = __this->___m_Crouching_23;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_Crouching) return;
		return;
	}

IL_0013:
	{
		// m_Capsule.height = m_Capsule.height / 2f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3 = __this->___m_Capsule_22;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___m_Capsule_22;
		NullCheck(L_4);
		float L_5;
		L_5 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_4, NULL);
		NullCheck(L_3);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_3, ((float)(L_5/(2.0f))), NULL);
		// m_Capsule.center = m_Capsule.center / 2f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6 = __this->___m_Capsule_22;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___m_Capsule_22;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_8, (2.0f), NULL);
		NullCheck(L_6);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_6, L_9, NULL);
		// m_Crouching = true;
		__this->___m_Crouching_23 = (bool)1;
		return;
	}

IL_0057:
	{
		// Ray crouchRay = new Ray(m_Rigidbody.position + Vector3.up * m_Capsule.radius * k_Half, Vector3.up);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___m_Rigidbody_12;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_13 = __this->___m_Capsule_22;
		NullCheck(L_13);
		float L_14;
		L_14 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_11, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_19), L_17, L_18, /*hidden argument*/NULL);
		// float crouchRayLength = m_CapsuleHeight - m_Capsule.radius * k_Half;
		float L_20 = __this->___m_CapsuleHeight_20;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_21 = __this->___m_Capsule_22;
		NullCheck(L_21);
		float L_22;
		L_22 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_21, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_20, ((float)il2cpp_codegen_multiply(L_22, (0.5f)))));
		// if (Physics.SphereCast(crouchRay, m_Capsule.radius * k_Half, crouchRayLength, ~Physics.IgnoreRaycastLayer, QueryTriggerInteraction.Ignore))
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_23 = __this->___m_Capsule_22;
		NullCheck(L_23);
		float L_24;
		L_24 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_23, NULL);
		float L_25 = V_0;
		bool L_26;
		L_26 = Physics_SphereCast_m2CE6BCAF0D0587AE29B6103280B337CDC3B5D5A8(L_19, ((float)il2cpp_codegen_multiply(L_24, (0.5f))), L_25, ((int32_t)-5), 1, NULL);
		if (!L_26)
		{
			goto IL_00cd;
		}
	}
	{
		// m_Crouching = true;
		__this->___m_Crouching_23 = (bool)1;
		// return;
		return;
	}

IL_00cd:
	{
		// m_Capsule.height = m_CapsuleHeight;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_27 = __this->___m_Capsule_22;
		float L_28 = __this->___m_CapsuleHeight_20;
		NullCheck(L_27);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_27, L_28, NULL);
		// m_Capsule.center = m_CapsuleCenter;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_29 = __this->___m_Capsule_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___m_CapsuleCenter_21;
		NullCheck(L_29);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_29, L_30, NULL);
		// m_Crouching = false;
		__this->___m_Crouching_23 = (bool)0;
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::PreventStandingInLowHeadroom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_PreventStandingInLowHeadroom_m266F53FB36AEC85E1FC206C8413CE529E030FE11 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (!m_Crouching)
		bool L_0 = __this->___m_Crouching_23;
		if (L_0)
		{
			goto IL_007d;
		}
	}
	{
		// Ray crouchRay = new Ray(m_Rigidbody.position + Vector3.up * m_Capsule.radius * k_Half, Vector3.up);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___m_Rigidbody_12;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___m_Capsule_22;
		NullCheck(L_4);
		float L_5;
		L_5 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_10), L_8, L_9, /*hidden argument*/NULL);
		// float crouchRayLength = m_CapsuleHeight - m_Capsule.radius * k_Half;
		float L_11 = __this->___m_CapsuleHeight_20;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = __this->___m_Capsule_22;
		NullCheck(L_12);
		float L_13;
		L_13 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_12, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_11, ((float)il2cpp_codegen_multiply(L_13, (0.5f)))));
		// if (Physics.SphereCast(crouchRay, m_Capsule.radius * k_Half, crouchRayLength, ~Physics.IgnoreRaycastLayer, QueryTriggerInteraction.Ignore))
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_14 = __this->___m_Capsule_22;
		NullCheck(L_14);
		float L_15;
		L_15 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_14, NULL);
		float L_16 = V_0;
		bool L_17;
		L_17 = Physics_SphereCast_m2CE6BCAF0D0587AE29B6103280B337CDC3B5D5A8(L_10, ((float)il2cpp_codegen_multiply(L_15, (0.5f))), L_16, ((int32_t)-5), 1, NULL);
		if (!L_17)
		{
			goto IL_007d;
		}
	}
	{
		// m_Crouching = true;
		__this->___m_Crouching_23 = (bool)1;
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::UpdateAnimator(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_UpdateAnimator_mD3D50826A91FB6754F3F1374945A7A03C3E5F6F5 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral073636784DA1EA12164998BEE384713657E4BE14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral288B53F014E2C53296CBC94785B0521CC621D509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B5_0 = 0;
	{
		// m_Animator.SetFloat("Forward", m_ForwardAmount, 0.1f, Time.deltaTime);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_Animator_13;
		float L_1 = __this->___m_ForwardAmount_18;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0(L_0, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, L_1, (0.100000001f), L_2, NULL);
		// m_Animator.SetFloat("Turn", m_TurnAmount, 0.1f, Time.deltaTime);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___m_Animator_13;
		float L_4 = __this->___m_TurnAmount_17;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_3);
		Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0(L_3, _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8, L_4, (0.100000001f), L_5, NULL);
		// m_Animator.SetBool("Crouch", m_Crouching);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___m_Animator_13;
		bool L_7 = __this->___m_Crouching_23;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral288B53F014E2C53296CBC94785B0521CC621D509, L_7, NULL);
		// m_Animator.SetBool("OnGround", m_IsGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___m_Animator_13;
		bool L_9 = __this->___m_IsGrounded_14;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6, L_9, NULL);
		// if (!m_IsGrounded)
		bool L_10 = __this->___m_IsGrounded_14;
		if (L_10)
		{
			goto IL_0094;
		}
	}
	{
		// m_Animator.SetFloat("Jump", m_Rigidbody.velocity.y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___m_Animator_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___m_Rigidbody_12;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_12, NULL);
		float L_14 = L_13.___y_3;
		NullCheck(L_11);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_11, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, L_14, NULL);
	}

IL_0094:
	{
		// float runCycle =
		//     Mathf.Repeat(
		//         m_Animator.GetCurrentAnimatorStateInfo(0).normalizedTime + m_RunCycleLegOffset, 1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___m_Animator_13;
		NullCheck(L_15);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_16;
		L_16 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_15, 0, NULL);
		V_1 = L_16;
		float L_17;
		L_17 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_1), NULL);
		float L_18 = __this->___m_RunCycleLegOffset_8;
		float L_19;
		L_19 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_add(L_17, L_18)), (1.0f), NULL);
		// float jumpLeg = (runCycle < k_Half ? 1 : -1) * m_ForwardAmount;
		if ((((float)L_19) < ((float)(0.5f))))
		{
			goto IL_00c3;
		}
	}
	{
		G_B5_0 = (-1);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B5_0 = 1;
	}

IL_00c4:
	{
		float L_20 = __this->___m_ForwardAmount_18;
		V_0 = ((float)il2cpp_codegen_multiply(((float)G_B5_0), L_20));
		// if (m_IsGrounded)
		bool L_21 = __this->___m_IsGrounded_14;
		if (!L_21)
		{
			goto IL_00e6;
		}
	}
	{
		// m_Animator.SetFloat("JumpLeg", jumpLeg);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___m_Animator_13;
		float L_23 = V_0;
		NullCheck(L_22);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_22, _stringLiteral073636784DA1EA12164998BEE384713657E4BE14, L_23, NULL);
	}

IL_00e6:
	{
		// if (m_IsGrounded && move.magnitude > 0)
		bool L_24 = __this->___m_IsGrounded_14;
		if (!L_24)
		{
			goto IL_010e;
		}
	}
	{
		float L_25;
		L_25 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___move0), NULL);
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_010e;
		}
	}
	{
		// m_Animator.speed = m_AnimSpeedMultiplier;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___m_Animator_13;
		float L_27 = __this->___m_AnimSpeedMultiplier_10;
		NullCheck(L_26);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_26, L_27, NULL);
		return;
	}

IL_010e:
	{
		// m_Animator.speed = 1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___m_Animator_13;
		NullCheck(L_28);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_28, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::HandleAirborneMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_HandleAirborneMovement_m507D7114F7FED861302B5C0CDAA3E65367CF7AFA (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* G_B2_0 = NULL;
	FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* G_B3_1 = NULL;
	{
		// Vector3 extraGravityForce = (Physics.gravity * m_GravityMultiplier) - Physics.gravity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_1 = __this->___m_GravityMultiplier_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// m_Rigidbody.AddForce(extraGravityForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_5, L_6, NULL);
		// m_GroundCheckDistance = m_Rigidbody.velocity.y < 0 ? m_OrigGroundCheckDistance : 0.01f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___m_Rigidbody_12;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		float L_9 = L_8.___y_3;
		G_B1_0 = __this;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_0046;
		}
	}
	{
		G_B3_0 = (0.00999999978f);
		G_B3_1 = G_B1_0;
		goto IL_004c;
	}

IL_0046:
	{
		float L_10 = __this->___m_OrigGroundCheckDistance_15;
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_004c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_GroundCheckDistance_11 = G_B3_0;
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_HandleGroundedMovement_m844EAC4330FAAE23EC18C0B9D0E592D1C306D71D (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, bool ___crouch0, bool ___jump1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (jump && !crouch && m_Animator.GetCurrentAnimatorStateInfo(0).IsName("Grounded"))
		bool L_0 = ___jump1;
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		bool L_1 = ___crouch0;
		if (L_1)
		{
			goto IL_0075;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_Animator_13;
		NullCheck(L_2);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_3;
		L_3 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_2, 0, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, NULL);
		if (!L_4)
		{
			goto IL_0075;
		}
	}
	{
		// m_Rigidbody.velocity = new Vector3(m_Rigidbody.velocity.x, m_JumpPower, m_Rigidbody.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___m_Rigidbody_12;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___m_Rigidbody_12;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = __this->___m_JumpPower_6;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___m_Rigidbody_12;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_8, L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_13, NULL);
		// m_IsGrounded = false;
		__this->___m_IsGrounded_14 = (bool)0;
		// m_Animator.applyRootMotion = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___m_Animator_13;
		NullCheck(L_14);
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_14, (bool)0, NULL);
		// m_GroundCheckDistance = 0.1f;
		__this->___m_GroundCheckDistance_11 = (0.100000001f);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::ApplyExtraTurnRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_ApplyExtraTurnRotation_mE1EAEF22D06FAF7CD7DA4BA453635833FA27E9FA (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float turnSpeed = Mathf.Lerp(m_StationaryTurnSpeed, m_MovingTurnSpeed, m_ForwardAmount);
		float L_0 = __this->___m_StationaryTurnSpeed_5;
		float L_1 = __this->___m_MovingTurnSpeed_4;
		float L_2 = __this->___m_ForwardAmount_18;
		float L_3;
		L_3 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// transform.Rotate(0, m_TurnAmount * turnSpeed * Time.deltaTime, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = __this->___m_TurnAmount_17;
		float L_6 = V_0;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_4);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_4, (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7)), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::OnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_OnAnimatorMove_m7F6B238EC67A3034595A4F16D5E07B41E3C370BF (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_IsGrounded)
		bool L_0 = __this->___m_IsGrounded_14;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// Vector3 v = (m_Animator.deltaPosition * m_MoveSpeedMultiplier) / Time.deltaTime;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___m_Animator_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606(L_1, NULL);
		float L_3 = __this->___m_MoveSpeedMultiplier_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// v.y = m_Rigidbody.velocity.y;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___m_Rigidbody_12;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		float L_9 = L_8.___y_3;
		(&V_0)->___y_3 = L_9;
		// m_Rigidbody.velocity = v;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		NullCheck(L_10);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_10, L_11, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::CheckGroundStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter_CheckGroundStatus_m424F203F886DB8686CC3DB62857087BEDB0BE564 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.Raycast(transform.position + (Vector3.up * 0.1f), Vector3.down, out hitInfo, m_GroundCheckDistance,~Physics.IgnoreRaycastLayer))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_6 = __this->___m_GroundCheckDistance_11;
		bool L_7;
		L_7 = Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49(L_4, L_5, (&V_0), L_6, ((int32_t)-5), NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// m_GroundNormal = hitInfo.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		__this->___m_GroundNormal_19 = L_8;
		// m_IsGrounded = true;
		__this->___m_IsGrounded_14 = (bool)1;
		// m_Animator.applyRootMotion = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___m_Animator_13;
		NullCheck(L_9);
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_9, (bool)1, NULL);
		return;
	}

IL_0056:
	{
		// m_IsGrounded = false;
		__this->___m_IsGrounded_14 = (bool)0;
		// m_GroundNormal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___m_GroundNormal_19 = L_10;
		// m_Animator.applyRootMotion = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___m_Animator_13;
		NullCheck(L_11);
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.FluxyCharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FluxyCharacter__ctor_m8AF3D524061627AD104A7B4E6AAD0B5113050C97 (FluxyCharacter_t9E0C71D6BC0FFCD32672682F72F089707316AA9B* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float m_MovingTurnSpeed = 360;
		__this->___m_MovingTurnSpeed_4 = (360.0f);
		// [SerializeField] float m_StationaryTurnSpeed = 180;
		__this->___m_StationaryTurnSpeed_5 = (180.0f);
		// [SerializeField] float m_JumpPower = 12f;
		__this->___m_JumpPower_6 = (12.0f);
		// [Range(1f, 4f)][SerializeField] float m_GravityMultiplier = 2f;
		__this->___m_GravityMultiplier_7 = (2.0f);
		// [SerializeField] float m_RunCycleLegOffset = 0.2f; //specific to the character in sample assets, will need to be modified to work with others
		__this->___m_RunCycleLegOffset_8 = (0.200000003f);
		// [SerializeField] float m_MoveSpeedMultiplier = 1f;
		__this->___m_MoveSpeedMultiplier_9 = (1.0f);
		// [SerializeField] float m_AnimSpeedMultiplier = 1f;
		__this->___m_AnimSpeedMultiplier_10 = (1.0f);
		// [SerializeField] float m_GroundCheckDistance = 0.1f;
		__this->___m_GroundCheckDistance_11 = (0.100000001f);
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
// System.Void FluxySamples.FirstPersonLauncher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonLauncher_Update_mAFF913982F8E5195ACFC711A156FDAB714B8C950 (FirstPersonLauncher_tBA58DB76F938AD026A153D31B28BF603C7879652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		V_0 = L_3;
		// GameObject projectile = Instantiate(prefab, ray.origin, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___prefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Rigidbody rb = projectile.GetComponent<Rigidbody>();
		NullCheck(L_7);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_7, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_1 = L_8;
		// if (rb != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = V_1;
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// rb.velocity = ray.direction * power;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		float L_13 = __this->___power_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_11, L_14, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void FluxySamples.FirstPersonLauncher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonLauncher__ctor_mBC47CCCCA2BB0ADA79FDAC0BEFC0ABBAB95841CB (FirstPersonLauncher_tBA58DB76F938AD026A153D31B28BF603C7879652* __this, const RuntimeMethod* method) 
{
	{
		// public float power = 2;
		__this->___power_5 = (2.0f);
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
// System.Void FluxySamples.LookAroundCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAroundCamera_Awake_mFE9724A629A5CEA294109B02D72C08EEB3F15A84 (LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_0);
		// currentShot = new CameraShot(transform.position, transform.rotation, transform.up, cam.fieldOfView);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cam_4;
		NullCheck(L_7);
		float L_8;
		L_8 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_7, NULL);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E L_9;
		memset((&L_9), 0, sizeof(L_9));
		CameraShot__ctor_m6C705120312943EEFF41A7659CC83451EBC2B7D3((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		__this->___currentShot_5 = L_9;
		// }
		return;
	}
}
// System.Void FluxySamples.LookAroundCamera::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAroundCamera_LookAt_mBDC3E51A081D0C5F097B5699CE1AADD6B7038BDE (LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up1, const RuntimeMethod* method) 
{
	{
		// currentShot.up = up;
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_0 = (&__this->___currentShot_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___up1;
		L_0->___up_2 = L_1;
		// currentShot.rotation = Quaternion.LookRotation(position - currentShot.position, currentShot.up);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_2 = (&__this->___currentShot_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_4 = (&__this->___currentShot_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_5, NULL);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_7 = (&__this->___currentShot_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___up_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_6, L_8, NULL);
		L_2->___rotation_1 = L_9;
		// }
		return;
	}
}
// System.Void FluxySamples.LookAroundCamera::UpdateShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAroundCamera_UpdateShot_m987F07352199447A6BDF129534606B225A65FA96 (LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector3.Lerp(transform.position, currentShot.position, translationResponse * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_3 = (&__this->___currentShot_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___position_0;
		float L_5 = __this->___translationResponse_8;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_2, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_7, NULL);
		// transform.rotation = Quaternion.Slerp(transform.rotation, currentShot.rotation, rotationResponse * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_11 = (&__this->___currentShot_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11->___rotation_1;
		float L_13 = __this->___rotationResponse_9;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_10, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_15, NULL);
		// cam.fieldOfView = Mathf.Lerp(cam.fieldOfView, currentShot.fieldOfView, fovResponse * Time.deltaTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->___cam_4;
		NullCheck(L_17);
		float L_18;
		L_18 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_17, NULL);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_19 = (&__this->___currentShot_5);
		float L_20 = L_19->___fieldOfView_3;
		float L_21 = __this->___fovResponse_10;
		float L_22;
		L_22 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_23;
		L_23 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_18, L_20, ((float)il2cpp_codegen_multiply(L_21, L_22)), NULL);
		NullCheck(L_16);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_16, L_23, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.LookAroundCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAroundCamera_LateUpdate_mA449F53EDE587F205D977CEC9D69D7108CE3E763 (LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 delta = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.W))
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)119), NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// delta += cam.transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_5, NULL);
		V_0 = L_6;
	}

IL_0026:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_7;
		L_7 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// delta -= cam.transform.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cam_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_11, NULL);
		V_0 = L_12;
	}

IL_0046:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_13;
		L_13 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)115), NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// delta -= cam.transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___cam_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_14, L_17, NULL);
		V_0 = L_18;
	}

IL_0066:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_19;
		L_19 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_19)
		{
			goto IL_0086;
		}
	}
	{
		// delta += cam.transform.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___cam_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_23, NULL);
		V_0 = L_24;
	}

IL_0086:
	{
		// currentShot.position += delta * Time.deltaTime * movementSpeed;
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_25 = (&__this->___currentShot_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&L_25->___position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30;
		L_30 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_29, L_30, NULL);
		float L_32 = __this->___movementSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_28, L_33, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_27 = L_34;
		// if (Input.GetKey(KeyCode.Mouse0))
		bool L_35;
		L_35 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)323), NULL);
		if (!L_35)
		{
			goto IL_013e;
		}
	}
	{
		// float deltaX = Input.GetAxis("Mouse X") * rotationSpeed;
		float L_36;
		L_36 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_37 = __this->___rotationSpeed_7;
		V_1 = ((float)il2cpp_codegen_multiply(L_36, L_37));
		// float deltaY = Input.GetAxis("Mouse Y") * rotationSpeed;
		float L_38;
		L_38 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_39 = __this->___rotationSpeed_7;
		V_2 = ((float)il2cpp_codegen_multiply(L_38, L_39));
		// Quaternion fwd = currentShot.rotation * Quaternion.AngleAxis(deltaX, Vector3.up) * Quaternion.AngleAxis(deltaY, -Vector3.right);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_40 = (&__this->___currentShot_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = L_40->___rotation_1;
		float L_42 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_42, L_43, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_41, L_44, NULL);
		float L_46 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_47, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_46, L_48, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_45, L_49, NULL);
		V_3 = L_50;
		// LookAt(currentShot.position + fwd * Vector3.forward, Vector3.up);
		CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* L_51 = (&__this->___currentShot_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = L_51->___position_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_53, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_52, L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		LookAroundCamera_LookAt_mBDC3E51A081D0C5F097B5699CE1AADD6B7038BDE(__this, L_56, L_57, NULL);
	}

IL_013e:
	{
		// UpdateShot();
		LookAroundCamera_UpdateShot_m987F07352199447A6BDF129534606B225A65FA96(__this, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.LookAroundCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAroundCamera__ctor_m776AB98B41DEA5473372627660C60AF49BC1FC0C (LookAroundCamera_t7C85E473EE2215D55A22D632B7DAB762436308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float movementSpeed = 5;
		__this->___movementSpeed_6 = (5.0f);
		// public float rotationSpeed = 8;
		__this->___rotationSpeed_7 = (8.0f);
		// public float translationResponse = 10;
		__this->___translationResponse_8 = (10.0f);
		// public float rotationResponse = 10;
		__this->___rotationResponse_9 = (10.0f);
		// public float fovResponse = 10;
		__this->___fovResponse_10 = (10.0f);
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
// System.Void FluxySamples.LookAroundCamera/CameraShot::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShot__ctor_m6C705120312943EEFF41A7659CC83451EBC2B7D3 (CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, float ___fieldOfView3, const RuntimeMethod* method) 
{
	{
		// this.position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		__this->___position_0 = L_0;
		// this.rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		__this->___rotation_1 = L_1;
		// this.up = up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___up2;
		__this->___up_2 = L_2;
		// this.fieldOfView = fieldOfView;
		float L_3 = ___fieldOfView3;
		__this->___fieldOfView_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CameraShot__ctor_m6C705120312943EEFF41A7659CC83451EBC2B7D3_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, float ___fieldOfView3, const RuntimeMethod* method)
{
	CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraShot_t399ACDE7C00016A84659055FC7DB9117CACBA22E*>(__this + _offset);
	CameraShot__ctor_m6C705120312943EEFF41A7659CC83451EBC2B7D3(_thisAdjusted, ___position0, ___rotation1, ___up2, ___fieldOfView3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FluxySamples.MouseInteraction::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInteraction_Awake_mBCBDF5D16B6C76FEB25DB5DEACA179553FE792B8 (MouseInteraction_tC3D7C9232F51FD49871AEB49B7D2914F440761B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = GetComponent<FluxyTarget>();
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_0;
		L_0 = Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F(__this, Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void FluxySamples.MouseInteraction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInteraction_Update_mF76BA26D8D3639BF9AE20B6969FCC7B0D51E608D (MouseInteraction_tC3D7C9232F51FD49871AEB49B7D2914F440761B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Camera.main == null) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (Camera.main == null) return;
		return;
	}

IL_000e:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		// target.color = Random.ColorHSV(0, 1, 0.6f, 1, 1, 1, 1, 1);
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_3 = __this->___target_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Random_ColorHSV_mA18D11E5B3661E5503C17C4A8FF521AF8B45F1D5((0.0f), (1.0f), (0.600000024f), (1.0f), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		NullCheck(L_3);
		L_3->___color_29 = L_4;
	}

IL_004e:
	{
		// if (Input.GetMouseButton(0))
		bool L_5;
		L_5 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_5)
		{
			goto IL_0091;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_6);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_6, L_7, NULL);
		V_0 = L_8;
		// transform.position = ray.origin + ray.direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		// target.enabled = true;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_13 = __this->___target_4;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		return;
	}

IL_0091:
	{
		// target.enabled = false;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_14 = __this->___target_4;
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.MouseInteraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInteraction__ctor_m73FB5A9877CD3DC65C99C3FEFEB9539049A99510 (MouseInteraction_tC3D7C9232F51FD49871AEB49B7D2914F440761B1* __this, const RuntimeMethod* method) 
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
// System.Void FluxySamples.MoveAndRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAndRotate_Start_m5301458E437BF6786AD47736745AAB76C2B96ACF (MoveAndRotate_tE07D42C07F13AC213F6B27C7F4B464697DD27890* __this, const RuntimeMethod* method) 
{
	{
		// m_LastRealTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___m_LastRealTime_7 = L_0;
		// }
		return;
	}
}
// System.Void FluxySamples.MoveAndRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAndRotate_Update_m47F38E6FDFA5F0AA28C68F98CDA4BF3C932AA487 (MoveAndRotate_tE07D42C07F13AC213F6B27C7F4B464697DD27890* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float deltaTime = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		// if (ignoreTimescale)
		bool L_1 = __this->___ignoreTimescale_6;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// deltaTime = (Time.realtimeSinceStartup - m_LastRealTime);
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		float L_3 = __this->___m_LastRealTime_7;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// m_LastRealTime = Time.realtimeSinceStartup;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___m_LastRealTime_7 = L_4;
	}

IL_0026:
	{
		// transform.Translate(moveUnitsPerSecond.value*deltaTime, moveUnitsPerSecond.space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275* L_6 = __this->___moveUnitsPerSecond_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___value_0;
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275* L_10 = __this->___moveUnitsPerSecond_4;
		NullCheck(L_10);
		int32_t L_11 = L_10->___space_1;
		NullCheck(L_5);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_5, L_9, L_11, NULL);
		// transform.Rotate(rotateDegreesPerSecond.value*deltaTime, rotateDegreesPerSecond.space);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275* L_13 = __this->___rotateDegreesPerSecond_5;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___value_0;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275* L_17 = __this->___rotateDegreesPerSecond_5;
		NullCheck(L_17);
		int32_t L_18 = L_17->___space_1;
		NullCheck(L_12);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_12, L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.MoveAndRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAndRotate__ctor_m82AB6F60520E8712287CF5C394EF7C8E6B582C92 (MoveAndRotate_tE07D42C07F13AC213F6B27C7F4B464697DD27890* __this, const RuntimeMethod* method) 
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
// System.Void FluxySamples.MoveAndRotate/Vector3andSpace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3andSpace__ctor_m6BCAC38A247B40F0471AE7863506954E2B19E444 (Vector3andSpace_tC4CEC951577CF127B87DA42F1A06A1D99D166275* __this, const RuntimeMethod* method) 
{
	{
		// public Space space = Space.Self;
		__this->___space_1 = 1;
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
// System.Void FluxySamples.RotateWithKeys::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithKeys_Update_m64AB91A6B35AD03B167D407F6EAE365614CD6105 (RotateWithKeys_t0278F74DB2C337F531FC7536C8FA8F911D9EFC43* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// angularAccel = Time.deltaTime * -speed;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_2 = __this->___speed_4;
		__this->___angularAccel_6 = ((float)il2cpp_codegen_multiply(L_1, ((-L_2))));
	}

IL_001c:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// angularAccel = Time.deltaTime * speed;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_5 = __this->___speed_4;
		__this->___angularAccel_6 = ((float)il2cpp_codegen_multiply(L_4, L_5));
	}

IL_0037:
	{
		// angularAccel *= Mathf.Pow(1 - angularDrag, Time.deltaTime);
		float L_6 = __this->___angularAccel_6;
		float L_7 = __this->___angularDrag_5;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_9;
		L_9 = powf(((float)il2cpp_codegen_subtract((1.0f), L_7)), L_8);
		__this->___angularAccel_6 = ((float)il2cpp_codegen_multiply(L_6, L_9));
		// transform.Rotate(Vector3.forward, angularAccel);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_12 = __this->___angularAccel_6;
		NullCheck(L_10);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void FluxySamples.RotateWithKeys::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateWithKeys__ctor_m3AE994E3A95B8D3F16D7B57E847EC274EACCC8BA (RotateWithKeys_t0278F74DB2C337F531FC7536C8FA8F911D9EFC43* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 20;
		__this->___speed_4 = (20.0f);
		// public float angularDrag = 0.8f;
		__this->___angularDrag_5 = (0.800000012f);
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
// System.Void FluxySamples.SetSplatRate::SetRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSplatRate_SetRate_m92433C61A40CEA9E5B83E6E8753D8AB8833A5C21 (SetSplatRate_t8D3D69DCA5F9CF36C7088F357B374FB2E1D53E4D* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<FluxyTarget>().rateOverTime = (int)value;
		FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* L_0;
		L_0 = Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F(__this, Component_GetComponent_TisFluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35_mE7A95379655ECD3C3624BED2C2FF2298A29DB67F_RuntimeMethod_var);
		float L_1 = ___value0;
		NullCheck(L_0);
		L_0->___rateOverTime_6 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_1));
		// }
		return;
	}
}
// System.Void FluxySamples.SetSplatRate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSplatRate__ctor_m3808F0DBDCD665078623563A829C7F52C4E9B579 (SetSplatRate_t8D3D69DCA5F9CF36C7088F357B374FB2E1D53E4D* __this, const RuntimeMethod* method) 
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
// System.Void FluxySamples.URPPlanarReflections::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URPPlanarReflections__ctor_m1CF893F5CCA1B943558ACDB0A8BD261C4B74D55E (URPPlanarReflections_tD97C13263EC27DE867458309405F3AB93B5441A5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* FluxyContainer_get_solver_m0484E084C625AA021DDCF34E8E64EF6D4C2632A2_inline (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Solver; }
		FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* L_0 = __this->___m_Solver_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FluxySolver_get_readbackTexture_m1E58F4E0ADA6BF604B8DD798AEF7E2F60A906CDE_inline (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, const RuntimeMethod* method) 
{
	{
		// public Texture2D readbackTexture { get; private set; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___U3CreadbackTextureU3Ek__BackingField_36;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_one_mF2EE0D4A57234324336A491DAB06305AB037C373_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_One_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FluxySolver_set_readbackTexture_m2163B4EE47AD6082614FE461B3AE7D560CE281A4_inline (FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	{
		// public Texture2D readbackTexture { get; private set; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___value0;
		__this->___U3CreadbackTextureU3Ek__BackingField_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreadbackTextureU3Ek__BackingField_36), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverCallback_Invoke_m1F324F74B72C159398A5DE9125D488C929ED2AD9_inline (SolverCallback_t017EA50B71589B5C1B869F472CE9AAE80D299243* __this, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C* ___solver0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FluxySolver_tFECEB59864D1D7A4370DA317334E2F471377112C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___solver0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m8B58EA88C92F7DD2C66F0EC1BCC8AC697D631298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_get_velocity_mDC273E5096077DC213EB1220FE1B90423D977D3E_inline (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Velocity; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Velocity_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FluxyContainer_get_angularVelocity_m2E3BA4F1D578664A3B194E49762A357C866EBC2E_inline (FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AngularVelocity; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_AngularVelocity_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplatCallback_Invoke_mECC4C1DA8949D5021A0D3FE910804A83B3D13F24_inline (SplatCallback_t6B0E0C8757F21911084946EC72D60C684146A04A* __this, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35* ___target0, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4* ___container1, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E* ___fb2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___rect3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FluxyTarget_t38C51870B64C20EDBD5D99DD56592E0D8227EB35*, FluxyContainer_tF3A1818405040DFA5D268EBB56D91A1887118CD4*, Framebuffer_t2A2A7D4459E55CDC68323B9E8C5B25B26538C61E*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___target0, ___container1, ___fb2, ___rect3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF2E88EBA2428B970BCF104BCA2C4023BCD82EA85_gshared_inline (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___item0, const RuntimeMethod* method) 
{
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_6 = V_0;
		int32_t L_7 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D)L_8);
		return;
	}

IL_0034:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = ___item0;
		((  void (*) (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7568B369A1BAC5B765C506082B34044E4246E1AC_gshared_inline (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
