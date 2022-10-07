#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>
struct List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Subsystem>
struct List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052;
// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
// System.Buffers.SpanAction`2<System.Char,System.Object>
struct SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.IntegratedSubsystemDescriptor[]
struct IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.SubsystemDescriptor[]
struct SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider[]
struct SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Decimal/DecCalc/PowerOvfl[]
struct PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_m380FFC26C59476ECFD500C2DFED12B6CF4870537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_m3B020ED22373F2C83A04FD37B1A1C11C4C128167_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries_1;
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
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8* ___s_emptyArray_5;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
struct SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250  : public RuntimeObject
{
};

struct SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_IntegratedDescriptors
	List_1_tACFC79734710927A89702FFC38900223BB85B5A6* ___s_IntegratedDescriptors_0;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_StandaloneDescriptors
	List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* ___s_StandaloneDescriptors_1;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_DeprecatedDescriptors
	List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* ___s_DeprecatedDescriptors_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemManager
struct SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824  : public RuntimeObject
{
};

struct SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields
{
	// System.Action UnityEngine.SubsystemManager::beforeReloadSubsystems
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___beforeReloadSubsystems_0;
	// System.Action UnityEngine.SubsystemManager::afterReloadSubsystems
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterReloadSubsystems_1;
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem> UnityEngine.SubsystemManager::s_IntegratedSubsystems
	List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* ___s_IntegratedSubsystems_2;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider> UnityEngine.SubsystemManager::s_StandaloneSubsystems
	List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* ___s_StandaloneSubsystems_3;
	// System.Collections.Generic.List`1<UnityEngine.Subsystem> UnityEngine.SubsystemManager::s_DeprecatedSubsystems
	List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* ___s_DeprecatedSubsystems_4;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___reloadSubsytemsStarted_5;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___reloadSubsytemsCompleted_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ThrowHelper
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>
struct AlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>
struct AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	float ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>
struct AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint64_t ___data_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct NativeArray_1_tA1E97291673A9D64EEF306BAF92C2FFE8DA08E84 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<System.UInt32>
struct NativeSlice_1_tE2B19CC15C19DB36B42B8B7BC4E87297CFC84DDD 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4* ___U3CproviderU3Ek__BackingField_3;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.ValueTuple`3<System.Object,System.Int32,System.Int32>
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	// T1 System.ValueTuple`3::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;
};

// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA 
{
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_6_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_6_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_7_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_7_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_8_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_8_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_9_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_9_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_9_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_0;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_2;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_3;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_4;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
};

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;
};

struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId_0;
};

// Unity.Collections.NativeArrayDispose
struct NativeArrayDispose_t2E2EF752F7DFB28A2F9F74355156A3BF0D420229 
{
	// System.Void* Unity.Collections.NativeArrayDispose::m_Buffer
	void* ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.NativeArrayDispose::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;
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

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject* ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;
};
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
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
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_7;
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

// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo
struct PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 
{
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::distance
	float ___distance_0;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::cosineAngleWithRay
	float ___cosineAngleWithRay_1;
};

// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A 
{
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// System.Decimal/DecCalc
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Decimal/DecCalc::uflags
			uint32_t ___uflags_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uflags_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uhi_1_OffsetPadding[4];
			// System.UInt32 System.Decimal/DecCalc::uhi
			uint32_t ___uhi_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uhi_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uhi_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulo_2_OffsetPadding[8];
			// System.UInt32 System.Decimal/DecCalc::ulo
			uint32_t ___ulo_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulo_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulo_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___umid_3_OffsetPadding[12];
			// System.UInt32 System.Decimal/DecCalc::umid
			uint32_t ___umid_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___umid_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___umid_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_4_OffsetPadding[8];
			// System.UInt64 System.Decimal/DecCalc::ulomidLE
			uint64_t ___ulomidLE_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_4_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_4_forAlignmentOnly;
		};
	};
};

struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_StaticFields
{
	// System.UInt32[] System.Decimal/DecCalc::s_powers10
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_powers10_5;
	// System.UInt64[] System.Decimal/DecCalc::s_ulongPowers10
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_ulongPowers10_6;
	// System.Double[] System.Decimal/DecCalc::s_doublePowers10
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_doublePowers10_7;
	// System.Decimal/DecCalc/PowerOvfl[] System.Decimal/DecCalc::PowerOvflValues
	PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B* ___PowerOvflValues_8;
};

// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::First
	Il2CppChar ___First_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::Last
	Il2CppChar ___Last_1;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A 
{
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject* ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B 
{
	union
	{
		struct
		{
		};
		uint8_t Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B__padding[1];
	};
};

// System.Number/NumberBuffer/DigitsAndNullTerminator
struct DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA 
{
	union
	{
		struct
		{
		};
		uint8_t DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA__padding[102];
	};
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>
struct AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct AlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>
struct AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>
struct AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>
struct AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct AlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 ___data_1;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A  : public SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F
{
};

// System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	// T1 System.ValueTuple`5::Item1
	intptr_t ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	intptr_t ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	int32_t ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	bool ___Item5_4;
};

// System.Numerics.Vector`1<System.UInt16>
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
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

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// UnityEngine.XR.ARKit.ManagedReferenceImage
struct ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 
{
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;
};

// UnityEngine.XR.MeshInfo
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;
};

// UnityEngine.XR.MeshTransform
struct MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshTransform::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// System.UInt64 UnityEngine.XR.MeshTransform::<Timestamp>k__BackingField
	uint64_t ___U3CTimestampU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.MeshTransform::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_2;
	// UnityEngine.Quaternion UnityEngine.XR.MeshTransform::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.XR.MeshTransform::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_4;
};

// UnityEngine.ModifiableContactPair
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	// System.IntPtr UnityEngine.ModifiableContactPair::actor
	intptr_t ___actor_0;
	// System.IntPtr UnityEngine.ModifiableContactPair::otherActor
	intptr_t ___otherActor_1;
	// System.IntPtr UnityEngine.ModifiableContactPair::shape
	intptr_t ___shape_2;
	// System.IntPtr UnityEngine.ModifiableContactPair::otherShape
	intptr_t ___otherShape_3;
	// UnityEngine.Quaternion UnityEngine.ModifiableContactPair::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// UnityEngine.Vector3 UnityEngine.ModifiableContactPair::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_5;
	// UnityEngine.Quaternion UnityEngine.ModifiableContactPair::otherRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation_6;
	// UnityEngine.Vector3 UnityEngine.ModifiableContactPair::otherPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition_7;
	// System.Int32 UnityEngine.ModifiableContactPair::numContacts
	int32_t ___numContacts_8;
	// System.IntPtr UnityEngine.ModifiableContactPair::contacts
	intptr_t ___contacts_9;
};

// Unity.Collections.NativeArrayDisposeJob
struct NativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB 
{
	// Unity.Collections.NativeArrayDispose Unity.Collections.NativeArrayDisposeJob::Data
	NativeArrayDispose_t2E2EF752F7DFB28A2F9F74355156A3BF0D420229 ___Data_0;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 
{
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;
	// UnityEngine.XR.ARSubsystems.Supported UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_DepthSensorSupported
	int32_t ___m_DepthSensorSupported_3;
};

// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_UVs_3;
};

// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;
};

// UnityEngine.XR.XRNodeState
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3  : public SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87
{
	// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::<capabilities>k__BackingField
	Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___U3CcapabilitiesU3Ek__BackingField_3;
};

// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE  : public SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02
{
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_3;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job
struct ConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5 
{
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::rgbaImage
	NativeSlice_1_tE2B19CC15C19DB36B42B8B7BC4E87297CFC84DDD ___rgbaImage_0;
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::argbImage
	NativeSlice_1_tE2B19CC15C19DB36B42B8B7BC4E87297CFC84DDD ___argbImage_1;
};

// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsIn
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsOut
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___positionsOut_1;
};

// UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob
struct DeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29 
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob::data
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data_0;
};

// UnityEngine.XR.ARKit.NSObject/ReleaseJob
struct ReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSObject/ReleaseJob::ptr
	intptr_t ___ptr_0;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob::positions
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___positions_0;
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___positionsOut_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct AlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>
struct AlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.MeshTransform>
struct AlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.ModifiableContactPair>
struct AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct AlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct AlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct AlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___data_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;
};

struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint_6;
};

struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___s_Default_7;
};

// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;
};

struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___s_Default_5;
};

// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t0094478B41F73E26F73943C09ECD134874B68ED5  : public TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487* ___m_Library_4;
};

// UnityEngine.XR.ARSubsystems.XRParticipant
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t ___m_SessionId_4;
};

struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___k_Default_5;
};

// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;
};

struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId_6;
};

struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t ___m_ReferenceObjectGuid_4;
};

struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___s_Default_5;
};

// UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob
struct AddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498 
{
	// Unity.Collections.NativeSlice`1<System.Byte> UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::image
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___image_0;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::database
	intptr_t ___database_1;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::validator
	intptr_t ___validator_2;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::width
	int32_t ___width_3;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::height
	int32_t ___height_4;
	// System.Single UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::physicalWidth
	float ___physicalWidth_5;
	// UnityEngine.TextureFormat UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::format
	int32_t ___format_6;
	// UnityEngine.XR.ARKit.ManagedReferenceImage UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::managedReferenceImage
	ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___managedReferenceImage_7;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob
struct PointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9 
{
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::points
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::infos
	NativeArray_1_tA1E97291673A9D64EEF306BAF92C2FFE8DA08E84 ___infos_1;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::hits
	NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___hits_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::count
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___count_3;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::cosineThreshold
	float ___cosineThreshold_4;
	// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::trackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId_6;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob
struct PointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA 
{
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::points
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::infoOut
	NativeArray_1_tA1E97291673A9D64EEF306BAF92C2FFE8DA08E84 ___infoOut_1;
	// UnityEngine.Ray UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct AlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct AlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct AlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>
struct AlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct AlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct AlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct AlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct AlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct AlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct AlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct AlignOfHelper_1_t8CCB14B1267A08F7799FDCE191C4323549BA6A49 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct AlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct AlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___data_1;
};

// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.Object>
struct SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) ;

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___length0, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99 (String_t* ___id0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___t0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___frame0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m690AA2A7E6B0A207BC6DCA00A6313C3407CE3418 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___argument0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
inline void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Remove(TKey)
inline bool Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* __this, String_t* ___id0, Type_t* ___providerType1, Type_t* ___subsystemTypeOverride2, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities3, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3 (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* __this, String_t* ___subsystemId0, Type_t* ___providerType1, Type_t* ___subsystemTypeOverride2, int32_t ___capabilities3, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
inline RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31 (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*, const RuntimeMethod*))XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared)(__this, method);
}
// System.String System.String::Create<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_gshared (int32_t ___length0, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___state1, SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_8 = ___action2;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 L_13 = ___state1;
		NullCheck(L_8);
		((  void (*) (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Create<System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_gshared (int32_t ___length0, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___state1, SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_8 = ___action2;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_13 = ___state1;
		NullCheck(L_8);
		((  void (*) (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Create<System.Object>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_gshared (int32_t ___length0, RuntimeObject* ___state1, SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* L_8 = ___action2;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		RuntimeObject* L_13 = ___state1;
		NullCheck(L_8);
		((  void (*) (SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Int32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B15D251663E1D9C147CD9DA1A8908CACF877570_gshared (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisRuntimeObject_mD51222AF7DE1F3198B5D7E15D990729A113B39E7_gshared (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		NullCheck((RuntimeObject*)(___value0));
		String_t* L_1;
		L_1 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.String System.IFormattable::ToString(System.String,System.IFormatProvider) */, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, (RuntimeObject*)(___value0), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.UInt32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F274B553164EF6FB0CB7D16AED9687CE7CA5FC_gshared (StringBuilder_t* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::AddDescriptorSubset<System.Object,System.Object>(System.Collections.Generic.List`1<TBaseTypeInList>,System.Collections.Generic.List`1<TQueryType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_AddDescriptorSubset_TisRuntimeObject_TisRuntimeObject_mCCBF36707A9EBC41884E99AF9701432B10CD6FE4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___copyFrom0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___copyTo1, const RuntimeMethod* method) 
{
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___copyFrom0;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->rgctx_data, 9));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_000b_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
				V_1 = L_2;
				RuntimeObject* L_3 = V_1;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 4))))
				{
					goto IL_0035_1;
				}
			}
			{
				RuntimeObject* L_4 = V_1;
				V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 4))), il2cpp_rgctx_data(method->rgctx_data, 4)));
				G_B5_0 = 1;
				goto IL_0036_1;
			}

IL_0035_1:
			{
				G_B5_0 = 0;
			}

IL_0036_1:
			{
				V_3 = (bool)G_B5_0;
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_0042_1;
				}
			}
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ___copyTo1;
				RuntimeObject* L_7 = V_2;
				NullCheck(L_6);
				((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 6));
			}

IL_0042_1:
			{
			}

IL_0043_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 7));
				if (L_8)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_GetSubsystemDescriptors_TisRuntimeObject_mAF894EE2CC2C3001A3FB3DEF57B73DE4C2D2209B_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		NullCheck(L_0);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		List_1_tACFC79734710927A89702FFC38900223BB85B5A6* L_1 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_IntegratedDescriptors_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___descriptors0;
		((  void (*) (List_1_tACFC79734710927A89702FFC38900223BB85B5A6*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* L_3 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_StandaloneDescriptors_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___descriptors0;
		((  void (*) (List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* L_5 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_DeprecatedDescriptors_2;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ___descriptors0;
		((  void (*) (List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor<System.Object,System.Object>(TDescriptor,System.Collections.Generic.List`1<TBaseTypeInList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_TisRuntimeObject_TisRuntimeObject_mBDA60AD66ED0AB222060E8F6FB6A09E504B7AD0E_gshared (RuntimeObject* ___descriptor0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___storeInList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_006e;
	}

IL_0005:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___storeInList1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_2;
		NullCheck((RuntimeObject*)(V_2));
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_006a;
	}

IL_0033:
	{
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68, L_7, _stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)L_8, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = ___storeInList1;
		int32_t L_10 = V_0;
		RuntimeObject* L_11 = ___descriptor0;
		NullCheck(L_9);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_9, L_10, ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 6));
		goto IL_00a0;
	}

IL_006a:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006e:
	{
		int32_t L_13 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = ___storeInList1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99(L_17, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_18 = ___storeInList1;
		RuntimeObject* L_19 = ___descriptor0;
		NullCheck(L_18);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_18, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_00a0:
	{
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_4);
		((  void (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, bool, bool, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_4);
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, bool, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Int32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF151895F5C0BBB74AEE7600FA2F777D0A8D1EBC5_gshared (int32_t ___result0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___result0;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___result0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_2;
		L_2 = Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4;
		L_4 = Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E(__this, 0, NULL);
		void* L_5;
		L_5 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_4, NULL);
		int64_t L_6;
		L_6 = Texture2D_GetRawImageDataSize_m690AA2A7E6B0A207BC6DCA00A6313C3407CE3418(__this, NULL);
		int32_t L_7 = V_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8;
		L_8 = ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, ((int32_t)((int64_t)(L_6/((int64_t)L_7)))), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_8;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_9 = V_1;
		V_3 = L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_10 = V_3;
		return L_10;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_mA24B59E0AE0DB9B908D2E40CEABECD51CE2D6600_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARFoundation.ARRaycastHit>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m1567F1836306C8F850A2CC8B8A76EDF1C8F98821_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARFoundation.ARTextureInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_m631E3CAD2465B9EA5CC5FA8DED3F4006BC2B66CC_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.InputDevice>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4E704A666B54AA88F34B9A25DD1EBE5FBB1864C3_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32Enum>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.MeshInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m3019FD93231975195C3F285048DD7C200499F83F_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.MeshTransform>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mBA9A60B0BC690974B5E8838104A8BB09F2034252_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Resources.ResourceLocator>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.UInt64>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m21622664C637314AFAAB1ED4A692CFDDA15893F8_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector2>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEC2F089A19D09CAB9C63CF26A9E251949E79D8DF_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.XRNodeState>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mFB2BFB3CBAE449CD0CBB53BEE76E415DF600247C_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceImage>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_m73EF499025F150C46B32EC43BFEB248C8FE1F8AB_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceObject>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m84397AF4D39DF3722D7909873F181A80BC7B4F27_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m5DE0C77AFBAE778817B286D65F46EE2818DD6D9A_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Text.RegularExpressions.RegexCharClass/SingleRange>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_mB5F1105F83D13AA1B7512EE4FEE16EA0A22885D9_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* Unsafe_Add_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_m34E4E5D992B28C28746499E511D50362357A39B8_gshared (NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0);
		return ((NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARFoundation.ARRaycastHit>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* Unsafe_Add_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m958279915204CED0BC73EBB1FBBE83FEC4ED3A12_gshared (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70);
		return ((ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARFoundation.ARTextureInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* Unsafe_Add_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_m59EE8EAB34639706B96C22A5C76D1261C2208B34_gshared (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261);
		return ((ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD356C5FCC414F8EDF133AE32854956A07B53A02_gshared (uint8_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m61D37B4D37DB6653882679C165C6BE5B741D4436_gshared (uint8_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3B5A03651256D5530AE45EFC51984CBC71D27077_gshared (Il2CppChar* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mF05DC6B7FBABFAD1238842F58FFBA9D7E0332EC2_gshared (Il2CppChar* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.InputDevice>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* Unsafe_Add_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m886C9B7C45EA45F625DD5E2871215CCBA734FE57_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD);
		return ((InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Int32>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE1AE85A9993F5AD25A91F4F986D80935A0CF026_gshared (int32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Int32Enum>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m899362F38BE549883841837EC35E98C4A1E8D225_gshared (int32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.MeshInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* Unsafe_Add_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m2C22D67C56A13254FA16D22F3D5E14DE92D67F8C_gshared (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA);
		return ((MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Object>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_mC28B0645E6AC1C26510942FD04AD041A52567BF5_gshared (RuntimeObject** ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Object>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_mB541869ACF5F2DFCD25F9C568BB742EAB539ED25_gshared (RuntimeObject** ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.SByte>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_Add_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m64BF56E1F82EC7352EC948EADDA6EFAB40132B86_gshared (int8_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int8_t);
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt16>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_Add_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m20E7B3895C9B8B8C4CBF0C72D2569C6F7DD33EC6_gshared (uint16_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint16_t);
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt32>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_Add_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE6E7056C0A79DF3F536C439A95EB8BED9A953C96_gshared (uint32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint32_t);
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt64>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_Add_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m586BE0A9D75BD4B0AEB666F57C5806DDDC75BB7E_gshared (uint64_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint64_t);
		return ((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Vector2>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Unsafe_Add_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3F5005B9903040CE3AC6B7B13B4188AF52E1A0F7_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		return ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Vector3>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_Add_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC77808122B5860918EFF6669AB4441C4AA90EACC_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.XRNodeState>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* Unsafe_Add_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m7643863ACD42BDC1C1505D83BF384CA5FA005344_gshared (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A);
		return ((XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARSubsystems.XRReferenceImage>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* Unsafe_Add_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_m56CE50F04855DAD93D8D5F5FE5B0840DABFC9F06_gshared (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F);
		return ((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARSubsystems.XRReferenceObject>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* Unsafe_Add_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m0B642E3529132A9B984B4648654E13A84B7781F8_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14);
		return ((XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.BeforeRenderHelper/OrderBlock>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_Add_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mECCEF408D5A4C7D9CF866468C962FBCEB8D16A8D_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837);
		return ((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Camera/RenderRequest>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* Unsafe_Add_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_mE865EB802BA008272732415ACC1B0738711C89B9_gshared (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A);
		return ((RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Text.RegularExpressions.RegexCharClass/SingleRange>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_Add_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m8F9E4CAFBCF5A6DB4DD14B44D38BF20AA8D2FB6D_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC);
		return ((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* Unsafe_Add_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_m1A315C2FC048BF301D95C04E434147695100DAA6_gshared (PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A);
		return ((PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UnitySynchronizationContext/WorkRequest>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_Add_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m36FD7705490658F779614182387633AAB5FCA4E4_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44);
		return ((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB9B2FBDA7C9D9ACEAAF1A13A21CB3820E4D6C42A_gshared (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7A80584F05268AB9D9BA488678556DC7F23392AB_gshared (uint8_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_mC89B4989AC651CCC3F9C62035BDA283341404364_gshared (RuntimeObject** ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_m46B1CE95D569C2858206757B140457EB483A8F98_gshared (RuntimeObject** ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m17DCB1423518B0B3E4524EAC5FE26BA65A6BC92A_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Char>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB37DE4456CA121DF4176470A637AAE3B95F46A1F_gshared (Il2CppChar* ___left0, Il2CppChar* ___right1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___left0;
		Il2CppChar* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisRuntimeObject_m079EE6A614CE81E9A6329DBE4B80984C7B861036_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_m6848D181A4A955E69D8A18F41D6F67DD4EAF73BB_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARFoundation.ARRaycastHit>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m5D229706DCFEE0078D303AF638C8613A2E93F89B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARFoundation.ARTextureInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_mF2B363305F1FA4D622BADFA064F778D734BB859C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF141105DD72A5BC944BA8293BB695024D02DE30D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2498099B9F71500DEE1CFA774D816C5050D58A9C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.InputDevice>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m44A9534E19B89D3CEA9FFF83637598AA977B3E41_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CF3813B9733A0CDBE0E8A325136D952A44698A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32Enum>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8E434534B985BD5A763E40937F16E2FEB1EFFD8C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.MeshInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m1C2C4699D8E3F08427CDA5EC3B017DFB0C05E2CD_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7DB7A86DF0CAE596697C48C03F15EE61EDA619D8_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt16>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8CD3F3B4E3E4EA8EAFE84DB40D862A314AFE6C2F_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint16_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mECFA2BF904F47BC0C95C31ED2DD33612380D2DB8_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt64>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3F8A9ADB733F9CB339B6D392F681324E7D470220_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint64_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Vector2>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEAC8BA3B05B241FC783AF255DA4A69A0CB53594A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Vector3>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F7BEFB9BB70E49F99DF2C761783F7B47712F6DF_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.XRNodeState>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m12A37FD433633261D4F1FABCBC9B33006BDB6028_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARSubsystems.XRReferenceImage>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_mC9E333CED16F4916AC9E24392D87F6EF8292FA5D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARSubsystems.XRReferenceObject>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_mD1ABCFB21A16FC1A673336EFF9A9EAEF195E860A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.BeforeRenderHelper/OrderBlock>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mC4FD738B0067607B4B710D37A7B610661F585602_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Camera/RenderRequest>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m6AA597EE36A64A9D5DEC4608FB9437F9C0F26EB4_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Text.RegularExpressions.RegexCharClass/SingleRange>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m616F80AB4B82BC53D742CE5865AB69DEECC3EAC1_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_m765B54016CC9E8A64790DA4A386A49AB58EE6AA5_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UnitySynchronizationContext/WorkRequest>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mF1E726DE9BDC7573ADE984D127A07D04BB9F19AB_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFB63566144F982614BC997ACF976C6768FEDBB4C_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6EB81656367ABFE46E4CDD8AB8C3123E1BFFDCC6_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Decimal,System.Decimal/DecCalc>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9* Unsafe_As_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_TisDecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_mAC31A6B0EE363D6AD04F11F629BBD69FD3F45894_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___source0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___source0;
		return (DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m750288389C1B4714A9DFC51DA537AD1507BD5320_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCFC3FDFDA844B03EFD3B3102FA653AF097D58B8F_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBC79D59277D406B719AE11BF00E685C85405C227_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisRuntimeObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m445F6D6F349C8CE113B1C1BE2F216018B4B72217_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisRuntimeObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m30EE2E6257432D4D25DDE4FBA46B1FA575866EEF_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisRuntimeObject_TisRuntimeObject_m9DBDCD08C3887118964A2A598815AFAE6903D44B_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Threading.Volatile/VolatileObject>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* Unsafe_As_TisRuntimeObject_TisVolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_m55BDDA054187BA5DECD7DD18CA865FD40B8D64B5_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt16,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9077C523106B635218BC3F9171876E1F0BA50694_gshared (uint16_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt16,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC4DCE71843181DDCBC3CBC8DF25FA4731AC7C40E_gshared (uint16_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt32,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32F76D490695DE07EF509A0D0EAFDD14F5056DC7_gshared (uint32_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt32,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA499441C7AE51E5DAC9C173774A8CA93DA466FEA_gshared (uint32_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisRuntimeObject_m1273FB5BB30ABB03C0EAD425C97F04F8E21D102B_gshared (RuntimeObject** ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Number/NumberBuffer/DigitsAndNullTerminator>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisDigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA_mE3F141C1F8E9FAEEA53503076434A94CAB453BD4_gshared (DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* ___value0, const RuntimeMethod* method) 
{
	{
		DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB7B94F08746E5992AF5DBE62DC46A96AEC7643E9_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0AEA751C6A2C62806F1E18D4CEC476D2C43DC3EE_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1669BF83EB856804C2D09104E9571A745C9FA0E9_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_mCFA8CA6750A455ED1DB173FB907B5CBAA9470947_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_m54A4F6A8FF8AC70DAED29CCD79D0A6C89A504D3A_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_m891505C0440DD40644C6823C4641DB9247023296_gshared (NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* ___left0, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* ___right1, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* L_0 = ___left0;
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARFoundation.ARRaycastHit>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m0535CE4763A7FA676D980ED2D8B876B8824FA254_gshared (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* ___left0, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* ___right1, const RuntimeMethod* method) 
{
	{
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* L_0 = ___left0;
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARFoundation.ARTextureInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_m0BDA4F7636D1F157D1355B693E97D5C385043660_gshared (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* ___left0, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* ___right1, const RuntimeMethod* method) 
{
	{
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* L_0 = ___left0;
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6AB8211F6DBEE7422B923884987D1641B66C295A_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.InputDevice>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m2CDCE9057E0F52DFE92CEB7B9F8F862688514F0D_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___left0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___right1, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___left0;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Int32>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3C11A66104F35B278BDABE69A0F7516708E4C623_gshared (int32_t* ___left0, int32_t* ___right1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___left0;
		int32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Int32Enum>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m38CEF1627C0A085C4FEE14E13E8A1F5D3361B2E2_gshared (int32_t* ___left0, int32_t* ___right1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___left0;
		int32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.MeshInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_mDBED287B1B5884F2B16B98C31F2550BDFFE438EE_gshared (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___left0, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___right1, const RuntimeMethod* method) 
{
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_0 = ___left0;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeObject_m7A1AD8D8389B88EF0E71789B8757AE7DF8649868_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.UInt64>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D27FAEB7676BE4A3528B739DE32D92D6DBF29E9_gshared (uint64_t* ___left0, uint64_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___left0;
		uint64_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Vector2>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3AA358D66929B95E24ED595A86E8F50C1C858B5B_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___left0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___left0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Vector3>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m936222FEDED90B25F54ABF51E58CBB46D8A1EB82_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___left0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___left0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.XRNodeState>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mCBA94D9E5B03060C9CEC8C862D5A60E745E0DCD2_gshared (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___left0, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___right1, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___left0;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARSubsystems.XRReferenceImage>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_m2AEC27656A0D396FEB0E6054F2064866A84B8515_gshared (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___left0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___right1, const RuntimeMethod* method) 
{
	{
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_0 = ___left0;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARSubsystems.XRReferenceObject>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m950ED36ABE93BE6482AE7CE2A3BB569E7A949CDF_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* ___left0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* ___right1, const RuntimeMethod* method) 
{
	{
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_0 = ___left0;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.BeforeRenderHelper/OrderBlock>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mEF5028C8208E7B962C4AE65F3F833DDD1BC5ECF9_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___left0, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___right1, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___left0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Camera/RenderRequest>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m24CE19681812ADA768E651B46ADD21C15EB7FEBA_gshared (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___left0, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___right1, const RuntimeMethod* method) 
{
	{
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_0 = ___left0;
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Text.RegularExpressions.RegexCharClass/SingleRange>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m0AB30724B76BE4817036FFFD56424DB67F13E359_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___left0, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___right1, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___left0;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_mD57BAAB7C5609D5E94856DFBF28B8F1AB978A5E5_gshared (PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* ___left0, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* ___right1, const RuntimeMethod* method) 
{
	{
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* L_0 = ___left0;
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UnitySynchronizationContext/WorkRequest>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4146B9DC73A3CD4EE2DD174D0FEEFF8BFD2F0D8E_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___left0, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___right1, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___left0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Numerics.Vector`1<System.UInt16>>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_Read_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mFD33791C135FF5212E900623875C092D42844E4D_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_Read_TisRuntimeObject_mF48ACACB60DB6DEDDA9B4DB881D8B8542E35857E_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Numerics.Vector`1<System.UInt16>>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_ReadUnaligned_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_m23E7A727856D98E5D1D8129FB27CEA2715940075_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Int32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_ReadUnaligned_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D178787984E8CE025EAF941A7B5E8D73BAE8D1B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int32_t L_1 = (*(int32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Object>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_ReadUnaligned_TisRuntimeObject_m0449A996DC864DDC692B41273048F7C65C6564EA_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt16>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Unsafe_ReadUnaligned_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mED059E50CA4EF7236D4C1EFAD1A19C3D36712F06_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint16_t L_1 = (*(uint16_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Unsafe_ReadUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m43042C9B34E5D513AF723172B137C4322F3EDC74_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint32_t L_1 = (*(uint32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UIntPtr>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Unsafe_ReadUnaligned_TisUIntPtr_t_mD4B64D4FDF6F43C3488DA13281F5AA0ECC24672E_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uintptr_t L_1 = (*(uintptr_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Numerics.Vector`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mBED8A470840454C70486BC2C85538178BA1FCB07_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CB1161B53871FE075F5881D9521D0476E1DF691_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m23B522F69D7973DF00CE97B464C99D7C5CC64DEA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9AE030E4068ECDA11DD67F66251D87744ECFA98A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisRuntimeObject_m48D83A6ED66FEAF1A34596F462095F8CBA351F67_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RuntimeObject*);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA6131DF2439BB55C289E1DFA433D0DD92D7BA5E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m809F14D45C4DEBB28BC7EE404B1BAE0D266DA45D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.Object>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisRuntimeObject_mB980CE5E548526EEDB025CC19CCC7445F5AD706B_gshared (uint8_t* ___destination0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		RuntimeObject* L_1 = ___value1;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.UInt32>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F5534E1C33FE40E5D929CE8D9F6D55C0022CC9_gshared (uint8_t* ___destination0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint32_t L_1 = ___value1;
		*(uint32_t*)L_0 = L_1;
		return;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.BoundedPlane>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mFE15C6EAC87E0376FA3A47436DE734163D87EB91_gshared (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* ___output0, const RuntimeMethod* method) 
{
	{
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<Unity.Collections.NativeArrayDisposeJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisNativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB_m687657D7902916300F8FFFDFE142E9F994882B84_gshared (NativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB* ___output0, const RuntimeMethod* method) 
{
	{
		NativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRAnchor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m5EFB2FA257D3BC28CD8A9DA001A09D899A2E4E25_gshared (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___output0, const RuntimeMethod* method) 
{
	{
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m7FBEEFAC7FF4D7FF5BEB837AB285CFA0AEDCC273_gshared (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* ___output0, const RuntimeMethod* method) 
{
	{
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mC753BCF02054137D23633CB281933B870E57E7C2_gshared (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* ___output0, const RuntimeMethod* method) 
{
	{
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRFace>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m74D7E51750235955D6F162A75328B5FDC8726BF7_gshared (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* ___output0, const RuntimeMethod* method) 
{
	{
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBody>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m5854818CCF3CF2345AA3799478758352F40116E6_gshared (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* ___output0, const RuntimeMethod* method) 
{
	{
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m79E8A79EF5060F0AC6E8F898948826BA570AB2CB_gshared (XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* ___output0, const RuntimeMethod* method) 
{
	{
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRParticipant>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mDF7C579FD784D095FFBD1A73E5343D1C19C4019A_gshared (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* ___output0, const RuntimeMethod* method) 
{
	{
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRPointCloud>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m347394E9CDEF1DA171074B0DCD4DBAE8521430B6_gshared (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* ___output0, const RuntimeMethod* method) 
{
	{
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycast>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m022B6BE420C70E7C65974223885EAD3A51BDB414_gshared (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___output0, const RuntimeMethod* method) 
{
	{
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m938690CD3919A27CDA5A3E865A130C102A64DF91_gshared (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* ___output0, const RuntimeMethod* method) 
{
	{
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m06F251DE305B6C755C385C84B30E76B157AB3C4E_gshared (XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291* ___output0, const RuntimeMethod* method) 
{
	{
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mD3399AC1AEF617700A6B8B22A857E7BC179CB847_gshared (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* ___output0, const RuntimeMethod* method) 
{
	{
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m1C47308CE7B5C4A5DFF8353E9379563EAEC284D6_gshared (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* ___output0, const RuntimeMethod* method) 
{
	{
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m5AA8A8DCBA70C4AF7AD71D597C7BC97B09BE1422_gshared (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* ___output0, const RuntimeMethod* method) 
{
	{
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisAddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498_mDB3CB2DE26FE350EB88BD235F49476F75FC2224B_gshared (AddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498* ___output0, const RuntimeMethod* method) 
{
	{
		AddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5_m7D9C1488EC7215C1FEB76416ABF0B2F0735F1BE6_gshared (ConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5* ___output0, const RuntimeMethod* method) 
{
	{
		ConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706_m02F4811A2819E8FAADBCAE39B760F305B89EE752_gshared (TransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706* ___output0, const RuntimeMethod* method) 
{
	{
		TransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9_mD3C472019234D81B4792DDDC0A60D0DC677B5292_gshared (PointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9* ___output0, const RuntimeMethod* method) 
{
	{
		PointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA_m476E5E4E2AB0DE5C14C2610ABBE2553A668F38F8_gshared (PointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA* ___output0, const RuntimeMethod* method) 
{
	{
		PointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29_mD4292C4DF886065582A342AEC0B4F7186BA06E60_gshared (DeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29* ___output0, const RuntimeMethod* method) 
{
	{
		DeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.NSObject/ReleaseJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB_m7F74065C3096744154BD48BCC21A12583E9A47F2_gshared (ReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB* ___output0, const RuntimeMethod* method) 
{
	{
		ReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisFlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4_m111270303056D7EA0A02458FA5ED0B95F7805224_gshared (FlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4* ___output0, const RuntimeMethod* method) 
{
	{
		FlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3_mE6D34E44E5EA0C9482DBE94D8E56FCB35FF682A5_gshared (TransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3* ___output0, const RuntimeMethod* method) 
{
	{
		TransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mE2334E848370B909DD86A56B9F6449360847C53A_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mB9DE559C7071980F1609DD26929B43692A5CB17A_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2A1D2A6356C6D1269940B8977960920BD06C1A20_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m0F4F4DAAFBBE5BF87BE3124260B311E1ACF93528_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6E1227F119951939CF6F08C6A1948051ED483009_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_mAB4FDBE3D55C4B4144B4659A3347D220D1F221C6_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.MeshTransform>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m08F9DB0F5471416C86EB8D51C11D082AB7792A76_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.ModifiableContactPair>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m763C773E8E8A2C722C8D68FB0140B7554C7936B4_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m7C9676413764B9F46479956AB3EAE4D4D3987344_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m7EC424F97CFAB6AB7BFD7207C89C3185EE211913_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7BDD582A0A2C440C146F9699D10B6FF35C0C027C_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5351D8E95645C74993EDF1DCD597BAF66ED91060_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCE248C5AF70A79CF4BEF0C2B3DDBDCACB5CC53F7_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2A3028F48F14F0218771FA17D81540361EEE9D0E_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCFF3A02BFA327100E27F86AA90F94EA85D86D689_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9B25263D143C20F712C84EF45A8BFD1E0B24F3EF_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mF8EE51461606736392E96462EF36239D3E5453F4_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m4EBC85FEDA8AA890A0BFD97FF07E6D563DA42767_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m76F1F1F64972CF9FA310F620BE919FC60D60DCD9_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m14399447B4211FF746324EB1A6AA485F0FE476C8_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mF02E7B0C57B07175D0EFFD7C79CBBBD42A12D4C1_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_mB999A43ABDF55477B9D46323BFCF4E4C3A8EB698_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m37F2A5C7F981C266D5946F69A952BCD9E88EC89A_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB2DBC5188784BEE969B5C72B7A393E5BE1353F64_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mD55F2D0FB75D026DE3F5E3599A004BA1EA101277_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mE16A858B759383B08BF2F5810A961BFD329FA785_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m28ECD372F36C5859D7EFE4EE1D8C3830DAA3DC80_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m6EBA528A49E38BDA374FF207C440D04C4C6EF9DA_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m6165434CE570A7159BF25900E2EC721F232907AA_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m431438B023F476D706C1F3A3655A402568572E87_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m226D8C2ACA421227FC92F28BE52E74DBBCDE2ECB_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_m9895A124B48ADEF05A7586C14A970851843BE3D7_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA UnsafeUtility_ReadArrayElement_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_m437F0C1852A3E41F67EC56F43811AB07A48EEFFA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA L_3 = (*(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE UnsafeUtility_ReadArrayElement_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m64D39B918CCC1D470660E87643D692C282A7030D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_3 = (*(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.ByteEnum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m58B7F3FFCC913656C5C33DB7D5098860234C41D6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 UnsafeUtility_ReadArrayElement_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m5CCC97E45C09B950207E8B842F24F0C5613C1B69_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = (*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 UnsafeUtility_ReadArrayElement_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_mFD2A6880C19A97DE564A6325DB89546C01675558_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 L_3 = (*(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.MeshTransform>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A UnsafeUtility_ReadArrayElement_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mC3D404320A523D49ACADB2D6894AEC3D3100776C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A L_3 = (*(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.ModifiableContactPair>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mEA45FBD76E48DCE01C215C48D8C647B488C60516_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_ReadArrayElement_TisRuntimeObject_m7A6BDCFE0AE15FDD0F8F8F50CDAF8595FAFCEBB9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		RuntimeObject* L_3 = (*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Single>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 UnsafeUtility_ReadArrayElement_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5CDC3521CA6DE2575CF3AAF8BC8EA755E78DDA72_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = (*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt64>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 UnsafeUtility_ReadArrayElement_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m8B479CF0156609AC4212B51A3CEF4353DF66AC1C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3 = (*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 UnsafeUtility_ReadArrayElement_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_mAD6141A2DC41E0A91675D1C71DF42CFE7A5905D1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_3 = (*(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 UnsafeUtility_ReadArrayElement_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m334BA46344536DF40FDC0283782B330329B1246C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_3 = (*(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB UnsafeUtility_ReadArrayElement_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m78D9105DC491BDE33AADD0C1631D665DC927AE09_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_3 = (*(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 UnsafeUtility_ReadArrayElement_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m9F94E0956FEC8A77B1682ACC48C29DE8EEB22A1A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_3 = (*(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 UnsafeUtility_ReadArrayElement_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_mC325332E85954CD6672524A8ACE44488D75BCB07_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 L_3 = (*(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 UnsafeUtility_ReadArrayElement_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_mE4C282AC0BDD9DE93C46CBCD06FAE533481BEED8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_3 = (*(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 UnsafeUtility_ReadArrayElement_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m0ED8A24079DA4334FC97B3B7AB491CD8B4A3CE14_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_3 = (*(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C UnsafeUtility_ReadArrayElement_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mA046EEE9ADB51DA97D3C2CD510F42C31277BCAE8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_3 = (*(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 UnsafeUtility_ReadArrayElement_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m128B8510DF576F5EAB70B4F3EEF4E0A2088147D2_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_3 = (*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 UnsafeUtility_ReadArrayElement_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m5633F49C81AF7833534B2CDF3B101D0F9ED0D576_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_3 = (*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 UnsafeUtility_ReadArrayElement_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_mD679ABFE6CE66BD52B6CF651A1AB0F6CD9ADEB30_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291);
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 L_3 = (*(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 UnsafeUtility_ReadArrayElement_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m759627B8B75445595F45B357AB52E34F586FCDF7_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = (*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD UnsafeUtility_ReadArrayElement_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_mD8285100AE1DD306B65D6EF5899AB69D642E382A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_3 = (*(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 UnsafeUtility_ReadArrayElement_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m5153D26AEC8C7DF5D3E18414E86ED0692E45F1B1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_3 = (*(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 UnsafeUtility_ReadArrayElement_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mC65FF44680E234FEA194E009CF85F12C7F28228B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 L_3 = (*(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC24C19ACD67D7D24118C4917A58301288B0FD2C7_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 UnsafeUtility_ReadArrayElementWithStride_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m25BE281C621C2A184586C80C28A0B1D0CDA9E780_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = (*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_m9FE97539260EAE4EF05EB8911CD5012F0A7D03D2_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject* L_3 = (*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElementWithStride_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8223ECA21FA21F004C4E5006FB23FE47893C7ADF_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElementWithStride_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2CBB76CFBC7238E49441D57F868E26FD959DD911_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0823BA8B97766FCB2A9F676A2CA04C9E5E4EDE8_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00_mCE9D27D926EC9F721746A596890927A10E1CB4A9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8_m986EA5EAAE6A1C6C1086FE889811F32536101A99_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8_m05019A56443F82E4A4413D78D9639F11B7DE1FED_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7_m45843A24D6A6B1CC02726C2617738C4A3B3B639B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD_mE5A521CBA8FB58A7C9C7DCCB8E69EC7FBC3DEA52_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.MeshTransform>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F_mE9A4DCD522EE069CE6033D3FAC45C2247DA10361_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.ModifiableContactPair>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87_m64BF1DF1CDD0867AB39FCF8756B18431276CA8E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51_mB26F10D1EEE97DF65908C2D07D713028FB218082_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1_m08A3DB952CA15C85512FB3E294EC2A508DEA5D2B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8CCB14B1267A08F7799FDCE191C4323549BA6A49_m5E098C17358ECD11AC58EBA147195C3289638CF8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8CCB14B1267A08F7799FDCE191C4323549BA6A49);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_m75A4A90BDEB9E41F62764F2A3DABE2F6EA222A46_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_mEEA5AE2DA999749F3556BBFF1964B302E90A0D64_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_mEAF8889D8E67EB11CD5FFD32B4D13466BD28C2E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m440CD9AAB4CAA84797259A2203D8F885CE2BC55B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.MeshTransform>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mCCE360F24E552B1FB2E2380D875629DC410F55B4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.ModifiableContactPair>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5B458D1A2793D9AB0C9502D58DB4EC4325248A8A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m50CF1E6561AA517A00231C0C0BEB236149858ABD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m4CA77BA1A3A52FC495EF8AE20B0CE6ED547AE040_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mD4BFA097F6D757296F4DBF93B05F53922CDDD33B_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA L_3 = ___value2;
		*(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2360E5D9B2E04892C65A6D52F6A3245DFF21519C_gshared (void* ___destination0, int32_t ___index1, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_3 = ___value2;
		*(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.ByteEnum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m48F359DF2B61DA25581FD16E4041AA076040B7AF_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_mF07AD6F58F9B07AD795297483E0B615E5A8703CE_gshared (void* ___destination0, int32_t ___index1, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = ___value2;
		*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = ___value2;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m301E7B7954538ED3C9720AEDB18D0F340F9AB162_gshared (void* ___destination0, int32_t ___index1, ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 L_3 = ___value2;
		*(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.MeshTransform>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m015EF4BBAEA47E6D55749BDC284E51B64E3B03C9_gshared (void* ___destination0, int32_t ___index1, MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A L_3 = ___value2;
		*(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.ModifiableContactPair>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m984D59C779E69C17ED01C8FAB083CE6F114D6E44_gshared (void* ___destination0, int32_t ___index1, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = ___value2;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mABBA07A4549CE7708FB90C9A781CA5DE0D60A7C3_gshared (void* ___destination0, int32_t ___index1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		RuntimeObject* L_3 = ___value2;
		*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502_gshared (void* ___destination0, int32_t ___index1, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = ___value2;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9_gshared (void* ___destination0, int32_t ___index1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___value2;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC03212F05038DAAA1F180317241B89AB90500BF8_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = ___value2;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_mDEB6CF7BF3830D14F454D3A5D998164ABAC3945A_gshared (void* ___destination0, int32_t ___index1, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = ___value2;
		*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt64>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared (void* ___destination0, int32_t ___index1, uint64_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___value2;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_gshared (void* ___destination0, int32_t ___index1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___value2;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106_gshared (void* ___destination0, int32_t ___index1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_gshared (void* ___destination0, int32_t ___index1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___value2;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mD744F37E373E4AD5F998FBC74781B2EF7A71811D_gshared (void* ___destination0, int32_t ___index1, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3 = ___value2;
		*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m5ECFCA927E9BDCC532BA0C00CC2D9747C590C433_gshared (void* ___destination0, int32_t ___index1, XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_3 = ___value2;
		*(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mCD9E63CF57DDC956BE86226E15925C2A9A95953E_gshared (void* ___destination0, int32_t ___index1, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_3 = ___value2;
		*(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m0B14FE4D6FCCE877540A8BCE92F4AE9757E666DA_gshared (void* ___destination0, int32_t ___index1, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_3 = ___value2;
		*(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m52FA22C93EA645BDFED07963298261127FE177CE_gshared (void* ___destination0, int32_t ___index1, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_3 = ___value2;
		*(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m96732A115E78436C592C1E1929495A259055A302_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 L_3 = ___value2;
		*(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m17B3A2A0921F059F1787C08B8EBA55E5F26DFC5A_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_3 = ___value2;
		*(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m941D84335134B71A0C9EDB558A25030D97DBC6BF_gshared (void* ___destination0, int32_t ___index1, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_3 = ___value2;
		*(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m504FF71C447AA8018D6602FCC91E7572D0E86398_gshared (void* ___destination0, int32_t ___index1, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_3 = ___value2;
		*(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m2E577897EBCFBB18999882BA3449FC8028878610_gshared (void* ___destination0, int32_t ___index1, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_3 = ___value2;
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_mBEFBCFA821EEDF30C0D16137C9FC60B23BB147E2_gshared (void* ___destination0, int32_t ___index1, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_3 = ___value2;
		*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m5FA5DA7A26D364A9EBE5B3E3DD9678BBCB57D043_gshared (void* ___destination0, int32_t ___index1, XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291);
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 L_3 = ___value2;
		*(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mB49B471F2F38243DC440C5250573C0C164FC505F_gshared (void* ___destination0, int32_t ___index1, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = ___value2;
		*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m8AFC7D305EC8D6F79E7BFB2BFBFAEDD675FE9549_gshared (void* ___destination0, int32_t ___index1, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_3 = ___value2;
		*(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mC9A38A2CC0EB3400F0C7A14C15D402E267648EB7_gshared (void* ___destination0, int32_t ___index1, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_3 = ___value2;
		*(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_m795BDEB9E8AC3854C96D4BF644DCA25000EEAACA_gshared (void* ___destination0, int32_t ___index1, PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 L_3 = ___value2;
		*(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD64B816BD360CF926B77516A2707ED5608023EB3_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint8_t ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = ___value3;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m56B80803D0C1ED8ABB5D4FEE52F3317449F1465B_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = ___value3;
		*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisRuntimeObject_mF7B8147845C72D93EC33B690230914172912C9F6_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, RuntimeObject* ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject* L_3 = ___value3;
		*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE82071A53D46C2CD689A54289FDDD5A435C6D75D_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint32_t ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = ___value3;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBED13A80D4ED2F48D804A3344B867F98E127DC36_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint64_t ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = ___value3;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC6522E62D62D0F3B595EB475556A84D8FD0F88CE_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value3;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.UInt16>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___value0, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<System.UInt16>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___left0, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___right1, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___left0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<System.Int32>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0514BD1867C1350767759258A8399078406FE00_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = ___array2;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_17 = ___array2;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2BF71EECDB2B045457C18AC0E3B18C9248D46C45_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_17 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector3>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF86541C1C09AE66E862FA1049F14C8CB0C2B9DC1_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_6 = ___array2;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_17 = ___array2;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_mBAF3746971CDCF6B58182FF66E5A2B681461DFC7_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m4A018972895E62D6EF6C8AED44E9F620D5A14199_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// if (descriptors == null)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = ___descriptors0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = ___descriptors0;
		NullCheck(L_5);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_6;
		L_6 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->rgctx_data, 11));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0026_1:
			{
				// foreach (var descriptor in descriptors)
				RuntimeObject* L_7;
				L_7 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
				V_1 = L_7;
				// ISubsystem subsys = null;
				V_2 = (RuntimeObject*)NULL;
				// if (String.Compare(descriptor.id, id, true) == 0)
				NullCheck((RuntimeObject*)(V_1));
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				String_t* L_9 = ___id1;
				int32_t L_10;
				L_10 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_8, L_9, (bool)1, NULL);
				if (L_10)
				{
					goto IL_0054_1;
				}
			}
			{
				// subsys = descriptor.Create();
				NullCheck((RuntimeObject*)(V_1));
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				V_2 = L_11;
			}

IL_0054_1:
			{
				// if (subsys != null)
				RuntimeObject* L_12 = V_2;
				if (!L_12)
				{
					goto IL_006f_1;
				}
			}
			{
				// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_13 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				RuntimeObject* L_16 = V_2;
				NullCheck(L_13);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_13, L_15, L_16, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				// break;
				goto IL_0088;
			}

IL_006f_1:
			{
				// foreach (var descriptor in descriptors)
				bool L_17;
				L_17 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 9));
				if (L_17)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		V_1 = L_3;
		// if (m_SubsystemInstanceMap.ContainsKey(subsystemType))
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_4 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838(L_4, L_5, Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// m_SubsystemInstanceMap.Remove(subsystemType);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_7 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533(L_7, L_8, Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
	}

IL_0035:
	{
		// subsystem.Destroy();
		RuntimeObject* L_10 = V_0;
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
	}

IL_0040:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mA4965EC76CEF5709AA6B2611C065E12BD5CA8ACB_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_2 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m9672E32C32CA1F82DB7CE86C58E9B91C5A8983CD_gshared (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// return activeLoader as T;
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0;
		L_0 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_m3B020ED22373F2C83A04FD37B1A1C11C4C128167_gshared (String_t* ___id0, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_m3B020ED22373F2C83A04FD37B1A1C11C4C128167_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(T), null, capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B L_5 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* L_6 = (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3*)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B(L_6, L_2, L_4, (Type_t*)NULL, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_m380FFC26C59476ECFD500C2DFED12B6CF4870537_gshared (String_t* ___id0, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_m380FFC26C59476ECFD500C2DFED12B6CF4870537_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B L_7 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* L_8 = (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3*)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B(L_8, L_2, L_4, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_m9BF228170DBD30266956BE3280951BCD2669A775_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(T), null, capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		int32_t L_3 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* L_4 = (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE*)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3(L_4, L_0, L_2, (Type_t*)NULL, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m6CFA245081F9F2ADD548CE3948A18F59DDC3790C_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		int32_t L_5 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* L_6 = (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE*)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3(L_6, L_0, L_2, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_6, NULL);
		// }
		return;
	}
}
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public T FindEntry<T>() where T : XRReferenceObjectEntry => FindEntry(typeof(T)) as T;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* L_2;
		L_2 = XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C(__this, L_1, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C  RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3FF6126D31B18EF8F02A921B6EF41A436C07AB3E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, const RuntimeMethod* method) 
{
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_5 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_9), L_7, L_8, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_13), L_11, L_12, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
