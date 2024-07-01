#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct ConstrainedFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct ConstrainedFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct ConstrainedFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct ConstrainedFuncInvoker5<R, T1, T2*, T3*, T4, T5>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { &p1, p2, p3, &p4, &p5 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200;
struct BasePopupField_2_t299579EC3CD33AC9C944D30D0CB0DD4E9D97ED9C;
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Func_1_t19B4AA7D8A9D43C2117CE38228D976097D91CF6B;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B;
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_tC06B45D8A0C7CBBDAE418090727D1DF1F2FCB9F6;
struct PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct UnsafeList_1_t8AC8BEAAD08F12105DCE5C42810B8EAC6C9B5EF8;
struct UnsafeList_1_t01F63DF0FAEC1F049C346A8DE04B0510B7C79084;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct BinaryReader_t67A9EB6B6FD4BFCC0B6E475143AAA18B58960988;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31;
struct CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct Exception_t;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0;
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
struct Type_t;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B;
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E;
struct TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0;
IL2CPP_EXTERN_C const RuntimeMethod* Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var;
struct Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
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
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	int32_t ____props;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E  : public RuntimeObject
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_context;
	RuntimeObject* ___m_stateMachine;
};
struct Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E 
{
	int32_t* ___m_OffsetPtr;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55 
{
	float ___U3CMaxFractionU3Ek__BackingField;
};
struct AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21 
{
	float ___U3CMaxFractionU3Ek__BackingField;
};
struct ColliderCompoundLeafProcessor_1_t471C69C2D00F5293CF880F94363F0B5417B616D4 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderCompoundLeafProcessor_1_t93327C3ACE724CD1A95F66BD1BBDCDE23F3759CD 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderCompoundLeafProcessor_1_t5A5CA7134A68AD644F9936E814DD70C84653C7AB 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderCompoundLeafProcessor_1_t00911DFC95F7181FFBF6135F577ADB40E312B221 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF 
{
	CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* ___m_CompoundCollider;
};
struct ColliderMeshLeafProcessor_1_t9047A5451E6571286F9BFE298D4602F5EA44182D 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ColliderMeshLeafProcessor_1_tF3FD42E2C699C60B76EE884E3F0C329DED1E0F3A 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ColliderMeshLeafProcessor_1_t4EFE1C2B942E2BF12B1360635D5FD61C99AFC86E 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ColliderMeshLeafProcessor_1_t7E584330B80BC3F8670C22FDD78C3B3240ED21E3 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ColliderMeshLeafProcessor_1_t5683950E667CEEF691EB994E9915CADB136C1EB8 
{
	Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* ___m_Mesh;
	uint32_t ___m_NumColliderKeyBits;
};
struct ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4 
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 
{
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t9C1BCB2E1DDFD454CDB318063407E34467CDD262 
{
	Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct NativeList_1_tE94D791CB60EF0493831B293FCA709C1F674752D 
{
	UnsafeList_1_t8AC8BEAAD08F12105DCE5C42810B8EAC6C9B5EF8* ___m_ListData;
};
struct NativeList_1_t7B5673D7D43011DD8BF892715CCF73BC89700283 
{
	UnsafeList_1_t01F63DF0FAEC1F049C346A8DE04B0510B7C79084* ___m_ListData;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	RuntimeObject* ____obj;
	int32_t ____result;
	int16_t ____token;
	bool ____continueOnCapturedContext;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB 
{
	int32_t ___Offset;
	int32_t ___Length;
};
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 
{
	uint32_t ___U3CValueU3Ek__BackingField;
};
struct CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A 
{
	uint32_t ___BelongsTo;
	uint32_t ___CollidesWith;
	int32_t ___GroupIndex;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___U3CfocusableU3Ek__BackingField;
	int32_t ___U3CtabIndexU3Ek__BackingField;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
};
struct ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____task;
};
struct ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____task;
};
struct ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____task;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 
{
	uint8_t ___Flags;
	uint8_t ___FrictionCombinePolicy;
	uint8_t ___RestitutionCombinePolicy;
	uint8_t ___CustomTags;
	float ___Friction;
	float ___Restitution;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	RuntimeObject* ____obj;
	int16_t ____token;
	bool ____continueOnCapturedContext;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 
{
	union
	{
		struct
		{
		};
		uint8_t CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236__padding[1];
	};
};
struct ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 
{
	union
	{
		struct
		{
		};
		uint8_t ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360__padding[1];
	};
};
struct ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB 
{
	union
	{
		struct
		{
		};
		uint8_t ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB__padding[1];
	};
};
struct DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4__padding[1];
	};
};
struct MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 
{
	union
	{
		struct
		{
		};
		uint8_t MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055__padding[1];
	};
};
struct TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98 
{
	union
	{
		struct
		{
		};
		uint8_t TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98__padding[1];
	};
};
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
	int32_t ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
	int32_t ___m_continueOnCapturedContext;
};
struct ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 
{
	union
	{
		struct
		{
		};
		uint8_t ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62__padding[1];
	};
};
struct DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45__padding[1];
	};
};
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E 
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec;
};
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec;
};
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};
struct U3CFacePlanesU3Ee__FixedBuffer_tBF9F10886166ADF4F93DC6C6799ABE01233693D0 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CFacePlanesU3Ee__FixedBuffer_tBF9F10886166ADF4F93DC6C6799ABE01233693D0__padding[32];
	};
};
struct U3CFaceVertexIndicesU3Ee__FixedBuffer_t3FF966622EB3CE1D4174C29B3F7C20C9BBB7872F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CFaceVertexIndicesU3Ee__FixedBuffer_t3FF966622EB3CE1D4174C29B3F7C20C9BBB7872F__padding[8];
	};
};
struct U3CFacesU3Ee__FixedBuffer_t023B00F3D3069591659891DE5C53F01576B04D44 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CFacesU3Ee__FixedBuffer_t023B00F3D3069591659891DE5C53F01576B04D44__padding[8];
	};
};
struct U3CVerticesU3Ee__FixedBuffer_tEE785B23A797E99A14DD83BAE2F9D7039F616D0D 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CVerticesU3Ee__FixedBuffer_tEE785B23A797E99A14DD83BAE2F9D7039F616D0D__padding[48];
	};
};
struct AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D 
{
	float ___U3CMaxFractionU3Ek__BackingField;
	NativeList_1_tE94D791CB60EF0493831B293FCA709C1F674752D ___AllHits;
};
struct AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F 
{
	float ___U3CMaxFractionU3Ek__BackingField;
	NativeList_1_t7B5673D7D43011DD8BF892715CCF73BC89700283 ___AllHits;
};
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
};
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_CastDirectionWS;
	void* ___m_CollectorPtr;
};
struct FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_CastDirectionWS;
	void* ___m_CollectorPtr;
};
struct FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_CastDirectionWS;
	void* ___m_CollectorPtr;
};
struct FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_CastDirectionWS;
	void* ___m_CollectorPtr;
};
struct FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_CastDirectionWS;
	void* ___m_CollectorPtr;
};
struct FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_CastDirectionWS;
	void* ___m_CollectorPtr;
};
struct FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	void* ___m_CollectorPtr;
};
struct FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	void* ___m_CollectorPtr;
};
struct FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	void* ___m_CollectorPtr;
};
struct FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	void* ___m_CollectorPtr;
};
struct FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	void* ___m_CollectorPtr;
};
struct FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26 
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___m_TargetColliderKey;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___m_TargetMaterial;
	void* ___m_CollectorPtr;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result;
};
struct ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814 
{
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ____value;
};
struct ColliderCastHit_tB66CAC9AB42CCE701322D245A18D09CBB7474755 
{
	float ___U3CFractionU3Ek__BackingField;
	int32_t ___U3CRigidBodyIndexU3Ek__BackingField;
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___U3CColliderKeyU3Ek__BackingField;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___U3CMaterialU3Ek__BackingField;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___U3CEntityU3Ek__BackingField;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CPositionU3Ek__BackingField;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CSurfaceNormalU3Ek__BackingField;
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___QueryColliderKey;
};
struct ColliderHeader_t02773740D4FD32942FC0FFA46DC6EA5032DDE3FC 
{
	uint8_t ___Type;
	uint8_t ___CollisionType;
	uint8_t ___Version;
	uint8_t ___Magic;
	uint32_t ___ForceUniqueBlobID;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___Filter;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct ConvexColliderHeader_t446A123A60101151765CBB51F34AA701629FF77B 
{
	uint8_t ___Type;
	uint8_t ___CollisionType;
	uint8_t ___Version;
	uint8_t ___Magic;
	uint32_t ___ForceUniqueBlobID;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___Filter;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___Material;
};
struct ConvexHull_tFCD7D4D7C8E9693133F18F2FBBA20162BD16B476 
{
	float ___ConvexRadius;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___VerticesBlob;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___FacePlanesBlob;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___FacesBlob;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___FaceVertexIndicesBlob;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___FaceLinksBlob;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___VertexEdgesBlob;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct DistanceHit_t24623CA3232004563796E8AA41E409369C35643E 
{
	float ___U3CFractionU3Ek__BackingField;
	int32_t ___U3CRigidBodyIndexU3Ek__BackingField;
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___U3CColliderKeyU3Ek__BackingField;
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___U3CMaterialU3Ek__BackingField;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___U3CEntityU3Ek__BackingField;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CPositionU3Ek__BackingField;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CSurfaceNormalU3Ek__BackingField;
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___QueryColliderKey;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoryU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5* ___U3CpathU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField;
	RuntimeObject* ___m_Target;
	List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3* ___U3CskipElementsU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E ___outerEC;
	bool ___outerECBelongsToScope;
	RuntimeObject* ___hecsw;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread;
};
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_pinvoke
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke ___outerEC;
	int32_t ___outerECBelongsToScope;
	Il2CppIUnknown* ___hecsw;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread;
};
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_com
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com ___outerEC;
	int32_t ___outerECBelongsToScope;
	Il2CppIUnknown* ___hecsw;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread;
};
struct Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A 
{
	float ___m_BoundingRadius;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___m_BvhNodesBlob;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___m_SectionsBlob;
};
struct Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Origin;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___m_Displacement;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___U3CReciprocalDisplacementU3Ek__BackingField;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	bool ___isInChain;
	bool ___isHierarchyHidden;
	bool ___localFlipsWinding;
	bool ___localTransformScaleZero;
	bool ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	bool ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	int32_t ___isInChain;
	int32_t ___isHierarchyHidden;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	int32_t ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	int32_t ___isInChain;
	int32_t ___isHierarchyHidden;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	int32_t ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A 
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value;
};
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshaled_pinvoke
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value;
};
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshaled_com
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value;
};
struct float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c1;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c2;
};
struct float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c1;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c2;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c3;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct ConvexHullData_tD57B3A37BF82A3090ACF7AFB5F872A6FC3293D0C 
{
	union
	{
		struct
		{
			U3CFacePlanesU3Ee__FixedBuffer_tBF9F10886166ADF4F93DC6C6799ABE01233693D0 ___FacePlanes;
			U3CVerticesU3Ee__FixedBuffer_tEE785B23A797E99A14DD83BAE2F9D7039F616D0D ___Vertices;
			U3CFacesU3Ee__FixedBuffer_t023B00F3D3069591659891DE5C53F01576B04D44 ___Faces;
			U3CFaceVertexIndicesU3Ee__FixedBuffer_t3FF966622EB3CE1D4174C29B3F7C20C9BBB7872F ___FaceVertexIndices;
		};
		uint8_t ConvexHullData_tD57B3A37BF82A3090ACF7AFB5F872A6FC3293D0C__padding[96];
	};
};
struct AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ____methodBuilder;
	int32_t ____result;
	bool ____haveResult;
	bool ____useBuilder;
};
typedef Il2CppFullySharedGenericStruct AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9;
struct ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E 
{
	float ___U3CMaxFractionU3Ek__BackingField;
	int32_t ___U3CNumHitsU3Ek__BackingField;
	ColliderCastHit_tB66CAC9AB42CCE701322D245A18D09CBB7474755 ___m_ClosestHit;
};
struct ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0 
{
	float ___U3CMaxFractionU3Ek__BackingField;
	int32_t ___U3CNumHitsU3Ek__BackingField;
	DistanceHit_t24623CA3232004563796E8AA41E409369C35643E ___m_ClosestHit;
};
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31 
{
	ColliderHeader_t02773740D4FD32942FC0FFA46DC6EA5032DDE3FC ___m_Header;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			ConvexColliderHeader_t446A123A60101151765CBB51F34AA701629FF77B ___m_Header;
		};
		#pragma pack(pop, tp)
		struct
		{
			ConvexColliderHeader_t446A123A60101151765CBB51F34AA701629FF77B ___m_Header_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ConvexHull_OffsetPadding[32];
			ConvexHull_tFCD7D4D7C8E9693133F18F2FBBA20162BD16B476 ___ConvexHull;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ConvexHull_OffsetPadding_forAlignmentOnly[32];
			ConvexHull_tFCD7D4D7C8E9693133F18F2FBBA20162BD16B476 ___ConvexHull_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ConvexHullData_OffsetPadding[96];
			ConvexHullData_tD57B3A37BF82A3090ACF7AFB5F872A6FC3293D0C ___m_ConvexHullData;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ConvexHullData_OffsetPadding_forAlignmentOnly[96];
			ConvexHullData_tD57B3A37BF82A3090ACF7AFB5F872A6FC3293D0C ___m_ConvexHullData_forAlignmentOnly;
		};
	};
};
struct RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD 
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___rot;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___pos;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup;
	bool ___m_WorldClipIsInfinite;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___U3CpickingModeU3Ek__BackingField;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___U3CyogaNodeU3Ek__BackingField;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___U3CenabledSelfU3Ek__BackingField;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	int32_t ___m_SubRenderTargetMode;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventCallback;
	int32_t ___m_EventCallbackCategories;
	int32_t ___m_CachedEventCallbackParentCategories;
	int32_t ___m_DefaultActionEventCategories;
	int32_t ___m_DefaultActionAtTargetEventCategories;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ___U3CU3Et__builder;
	int32_t ___count;
	int32_t ___offset;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___U3CU3E4__this;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer;
	bool ___useAsync;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CbytesToDeliverU3E5__2;
	int32_t ___U3CcurrentOutputIndexU3E5__3;
	int32_t ___U3CnumWholeBlocksInBytesU3E5__4;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CtempInputBufferU3E5__5;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CtempOutputBufferU3E5__6;
	ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814 ___U3CU3Eu__1;
};
struct U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ___U3CU3Et__builder;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___U3CU3E4__this;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer;
	int32_t ___offset;
	int32_t ___count;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___U3CsemaphoreU3E5__2;
	ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2 ___U3CU3Eu__1;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E ___U3CU3Eu__2;
};
struct MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC 
{
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___Rotation;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Translation;
};
struct U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24* ___asyncWaiter;
	int32_t ___millisecondsTimeout;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___U3CU3E4__this;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___U3CctsU3E5__2;
	RuntimeObject* ___U3CU3E7__wrap2;
	ConfiguredTaskAwaiter_t9C1BCB2E1DDFD454CDB318063407E34467CDD262 ___U3CU3Eu__1;
	ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4 ___U3CU3Eu__2;
};
struct PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F  : public EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1
{
	bool ___m_AltitudeNeedsConversion;
	bool ___m_AzimuthNeedsConversion;
	float ___m_AltitudeAngle;
	float ___m_AzimuthAngle;
	bool ___m_TiltNeeded;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Tilt;
	int32_t ___U3CpointerIdU3Ek__BackingField;
	String_t* ___U3CpointerTypeU3Ek__BackingField;
	bool ___U3CisPrimaryU3Ek__BackingField;
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CpressedButtonsU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ClocalPositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdeltaPositionU3Ek__BackingField;
	float ___U3CdeltaTimeU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
	float ___U3CpressureU3Ek__BackingField;
	float ___U3CtangentialPressureU3Ek__BackingField;
	float ___U3CtwistU3Ek__BackingField;
	int32_t ___U3CpenStatusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField;
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	RuntimeObject* ___U3CbindingU3Ek__BackingField;
	String_t* ___U3CbindingPathU3Ek__BackingField;
};
struct MassDistribution_t76D94E40AF5F40BD4627B9F83162CFE777EAFDA3 
{
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___Transform;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___InertiaTensor;
};
struct Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A 
{
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___CompoundFromChild;
	int32_t ___m_ColliderOffset;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
};
struct U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	int32_t ___count;
	int32_t ___offset;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___U3CU3E4__this;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer;
	bool ___useAsync;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	int32_t ___U3CbytesToWriteU3E5__2;
	int32_t ___U3CcurrentInputIndexU3E5__3;
	int32_t ___U3CnumOutputBytesU3E5__4;
	ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A ___U3CU3Eu__1;
	int32_t ___U3CnumWholeBlocksInBytesU3E5__5;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CtempOutputBufferU3E5__6;
};
struct U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___U3CU3E4__this;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer;
	int32_t ___offset;
	int32_t ___count;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___U3CsemaphoreU3E5__2;
	ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2 ___U3CU3Eu__1;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2;
};
struct U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1;
};
struct U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t;
	int32_t ___elapsedLoops;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1;
};
struct U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1;
};
struct U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t;
	float ___position;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1;
};
struct U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1;
};
struct U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1;
};
struct ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D 
{
	MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC ___Transform;
	float ___m_Scale;
};
struct U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9 
{
	int32_t ___U3CU3E1__state;
	AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727 ___U3CU3Et__builder;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___readTask;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___localBuffer;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___localDestination;
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___U3CU3Eu__1;
};
struct U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___writeTask;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___localBuffer;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1;
};
struct BaseField_1_t5B07C4F16426F3DB4A05D137F6E0A910FAC6B21B  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	float ___m_LabelWidthRatio;
	float ___m_LabelExtraPadding;
	float ___m_LabelBaseMinWidth;
	float ___m_LabelExtraContextWidth;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_VisualInput;
	RuntimeObject* ___m_Value;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___onValidateValue;
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___U3ClabelElementU3Ek__BackingField;
	bool ___m_ShowMixedValue;
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ___m_MixedValueLabel;
	bool ___m_SkipValidation;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedContextWidthElement;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedInspectorElement;
};
struct BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C {};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct MassProperties_t803C4E72B745E58D94806C64AF18066DCA195E04 
{
	MassDistribution_t76D94E40AF5F40BD4627B9F83162CFE777EAFDA3 ___MassDistribution;
	float ___Volume;
	float ___AngularExpansionFactor;
};
struct QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 
{
	int32_t ___RigidBodyIndex;
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___ColliderKey;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	uint32_t ___NumColliderKeyBits;
	ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D ___WorldFromLocalTransform;
	bool ___IsInitialized;
	float ___InvTargetScale;
	bool ___IsFlipped;
};
struct QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5_marshaled_pinvoke
{
	int32_t ___RigidBodyIndex;
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___ColliderKey;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	uint32_t ___NumColliderKeyBits;
	ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D ___WorldFromLocalTransform;
	int32_t ___IsInitialized;
	float ___InvTargetScale;
	int32_t ___IsFlipped;
};
struct QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5_marshaled_com
{
	int32_t ___RigidBodyIndex;
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___ColliderKey;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	uint32_t ___NumColliderKeyBits;
	ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D ___WorldFromLocalTransform;
	int32_t ___IsInitialized;
	float ___InvTargetScale;
	int32_t ___IsFlipped;
};
struct BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200  : public BaseField_1_t5B07C4F16426F3DB4A05D137F6E0A910FAC6B21B
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_Choices;
	TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0* ___m_TextElement;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ArrowElement;
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___m_FormatSelectedValueCallback;
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___m_FormatListItemCallback;
	Func_1_t19B4AA7D8A9D43C2117CE38228D976097D91CF6B* ___createMenuCallback;
};
struct BasePopupField_2_t299579EC3CD33AC9C944D30D0CB0DD4E9D97ED9C : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C {};
struct ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 
{
	Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___Collider;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___U3COrientationU3Ek__BackingField;
	Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 ___Ray;
	QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 ___QueryContext;
	float ___U3CQueryColliderScaleU3Ek__BackingField;
};
struct ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1_marshaled_pinvoke
{
	Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___Collider;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___U3COrientationU3Ek__BackingField;
	Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 ___Ray;
	QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5_marshaled_pinvoke ___QueryContext;
	float ___U3CQueryColliderScaleU3Ek__BackingField;
};
struct ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1_marshaled_com
{
	Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___Collider;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___U3COrientationU3Ek__BackingField;
	Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 ___Ray;
	QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5_marshaled_com ___QueryContext;
	float ___U3CQueryColliderScaleU3Ek__BackingField;
};
struct ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 
{
	Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___Collider;
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___Transform;
	float ___Scale;
	float ___MaxDistance;
	QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 ___QueryContext;
};
struct ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363_marshaled_pinvoke
{
	Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___Collider;
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___Transform;
	float ___Scale;
	float ___MaxDistance;
	QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5_marshaled_pinvoke ___QueryContext;
};
struct ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363_marshaled_com
{
	Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___Collider;
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___Transform;
	float ___Scale;
	float ___MaxDistance;
	QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5_marshaled_com ___QueryContext;
};
struct CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028 
{
	ColliderHeader_t02773740D4FD32942FC0FFA46DC6EA5032DDE3FC ___m_Header;
	float ___m_BoundingRadius;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___m_ChildrenBlob;
	BlobArray_tCA8B24F0639FE6C3002EEB2DE1788208B6C246EB ___m_BvhNodesBlob;
	int32_t ___U3CMemorySizeU3Ek__BackingField;
	MassProperties_t803C4E72B745E58D94806C64AF18066DCA195E04 ___U3CMassPropertiesU3Ek__BackingField;
	uint32_t ___U3CTotalNumColliderKeyBitsU3Ek__BackingField;
};
struct ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257 
{
	ConvexColliderHeader_t446A123A60101151765CBB51F34AA701629FF77B ___m_Header;
	ConvexHull_tFCD7D4D7C8E9693133F18F2FBBA20162BD16B476 ___ConvexHull;
	int32_t ___U3CMemorySizeU3Ek__BackingField;
	MassProperties_t803C4E72B745E58D94806C64AF18066DCA195E04 ___U3CMassPropertiesU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	Type_t* ___s_cachedPreparedType1;
	Type_t* ___s_cachedPreparedType2;
	Type_t* ___s_cachedPreparedType3;
	Type_t* ___s_cachedPreparedType4;
	Type_t* ___s_cachedPreparedType5;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E_StaticFields
{
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_invokeMoveNext;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56_StaticFields
{
	ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 ___Empty;
};
struct CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_StaticFields
{
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___Default;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___Zero;
};
struct Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54_StaticFields
{
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___Default;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction;
};
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_StaticFields
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_invokeActionDelegate;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity;
};
struct RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD_StaticFields
{
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___identity;
};
struct BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200_StaticFields
{
	String_t* ___ussClassName;
	String_t* ___textUssClassName;
	String_t* ___arrowUssClassName;
	String_t* ___labelUssClassName;
	String_t* ___inputUssClassName;
};
struct BasePopupField_2_t299579EC3CD33AC9C944D30D0CB0DD4E9D97ED9C_StaticFields
{
	String_t* ___ussClassName;
	String_t* ___textUssClassName;
	String_t* ___arrowUssClassName;
	String_t* ___labelUssClassName;
	String_t* ___inputUssClassName;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m56C37FD43DAF113A7BF8ED335649D7EC1C37450F_gshared (ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m36E3CF5C96AB7DB4FC2291DFFA33FB9C86CAF2EB_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m6A8431DA20DEFD849C4EAC7C7A50B556DD97FDBC_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m825558BCD9F80EC4E0684E46C382144CC6C773B1_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m27EE6FB45FF3E4BA5BE0FA5EDEAF224798D63B05_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m9BBAE6AEBDEFAC8BDBBAC1792B91C838A8328166_gshared (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_mF1BA9B1F6E47E08B0EAC7A3180BF38EF887AE119_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m6D1C7DBF4BC65110D191D1DCFCB2569B6A8EA20D_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m6589CE6EF7E09786E0EB8F1CE083BBB774B8DA5B_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1_UnsafeOnCompleted_m71F16D9BAB7BA39BD3E4F790B35D14239767ABE8_gshared (ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m92FAEEB0DFEAF5BB14CCAA49C02ABA46F59A4BBD_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814* ___0_awaiter, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_mB8322151720540A0F8D02403937DB67E2F3E0994_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m0A47F888B695D647C8227395F468C00BAF45E3C2_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m4C04C5C75ACB87F00298B3D22C862DF304EA4D63_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___0_awaiter, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584_m40B6514EBB2490AC91EE7AD281AD31DDB01B7867_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582_m5F0B3CC7D874A6011B2DD39DFDCB70E318BFC06F_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52_mB7C283A105070D8D2BB3B3ECBB65B8B217BC85B9_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B_mE88DF72DB9DFC9EE1376091851F3CC380C4387EA_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6_m1895B7AB5CF3865ADC457C0C4206CC6CF79B4F2F_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F_m803B3C91EB43B061C2E0C396654D5CDDF127F72D_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m16E2D0D6338158BCA0E748B7F24F275C778A14A2_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m5FBA428D6411B6273D155D5A5EE833A1A338FE8A_gshared_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m268E5FBC3DCEF0470D41F9C2584E6B13F9BD7B8D_gshared (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m85A9FFB7131400A58050438B2B0A7CD7F043738A_gshared_inline (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BasePopupField_2_ContainsPointer_mBD11BDF6BF30C2EEDFBC4DEF8E9D153F568F35DB_gshared (BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200* __this, int32_t ___0_pointerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePopupField_2_ShowMenu_mF5AB5CF601F6113D8746FB5FE35C70F0D7613308_gshared (BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 BlobAssetSerializeExtensions_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBB98A3968762F868E9FFD34A2AD0953FF0B757DC_gshared (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 BlobAssetSerializeExtensions_Read_TisCollider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31_mEE9347B55BBA2EE7B7EB6BDCB37C1018000BB1E6_gshared (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobAssetSerializeExtensions_Read_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_mAFFB86AECB8367CAAF4382FB6E7A5B6359F29299_gshared (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobAssetSerializeExtensions_Read_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m63B89CD3F98B4A8992E79BEE1E164077E8C04B94_gshared (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobAssetSerializeExtensions_Read_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m1EEEEF17E0CA0CFEF90A3BBF7709509F4607313D_gshared (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobAssetSerializeExtensions_Read_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m165B55B8F335E1B4B82299B55F8A23BF382329FA_gshared (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_gshared (Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mEBB18B146B1C3360527BDA88242E3BFC2C031BB4_gshared (ColliderCompoundLeafProcessor_1_t471C69C2D00F5293CF880F94363F0B5417B616D4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_m7A2AE50E149129B5AEA58FF4A79CBF4334AAC7F2_gshared (ColliderCompoundLeafProcessor_1_t93327C3ACE724CD1A95F66BD1BBDCDE23F3759CD* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mF6EF44FC8C10FF98690F1467539FE086F2819B74_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3A61DE62D3A035676D82164B61D7B4889CE283AB_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m49DA681B90E88BD2E278A392D768D216DA8D08D9_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m08C9D19E24981DEA8B7D74C491597EA3CC5A4F4F_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mA420E74D7650F17A030FA32FC7B4A930BAA3F791_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m164CE5696E04897BB73B0D3A5D3E761C1EB3045C_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mB77098854ABB98727543B1465B5C986980475DA4_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mF8972F3EC406EF14377DE9114A1638A096ACEB35_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m958D901237289EA0903EA54A117BC88EB1A00659_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mD2691476A3256E2829B639DD5675FCA1FB1D6C17_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m448019851203EAEFBEABEA44E1E19068C3B617B3_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m45114D5E4FEA93F92F3C18D4CDF1F80A12D4BBBA_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m1E334C67E7099A211572C6769986B3A09C4C62CF_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mD4DDE06287866B89734C3715B0CE1EF600EB5023_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m38936E874F4CCFA28970B752A482F58C91CEBE41_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_mE693BC8B51A39FDC357D09ACFF40F5EC6A0116D0_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m86A700030EF7E13CC6F82C1A99F404B7952D9105_gshared (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mC78F007555423684A8393CF6F98833FE4867E38D_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m429CBA02BABF364DC92AB4D12E41E08B7ACBC2F2_gshared (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m73031727531D2B39693206F4A517FB20471D1D48_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m5552989443727D9A6A11CE1B6B3BE5B40EE3BE25_gshared (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m95844141AE1A4A9592652C440842AE3E8DE260D3_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m1B78271331819E17A1429F92AFE1E528032AC4BC_gshared (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m5716D06DF9F33C6A9421D9F60517744125426197_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m7ED6EAFFA42C6F9CEDEC9D267160345244DD8A96_gshared (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m694521BE4E4ADF300E522567547E4AF8A37BAB18_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m4FB2D27C119DF721F2B65F546A56FDC108E1D0F9_gshared (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m77831B84325E3232EB3ADAC6DFD40550BC37D060_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m9B53CF54F217563AEAB86B9DD8B852BA27327C11_gshared (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m8BDF3AB85D7B95FA0F95E85E6DAAE672DFABEAA4_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m20AA3788E2E9B9AB8BE4B46F1B250E201E23DD20_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m17849FF348F3E15549356190CDCC6BE98FCC3957_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mEFD20EAEF5F5984F2D6375C78D783EAF2328C31D_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mCE179E99F0FEF10F9CE4E176B7F537BC1AFBAE9B_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m221585B1ED06484E25186562352572A1AD35531E_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m93164EAF285328529CCE1F98AB49825E047AEE37_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m2FFEE3A046DEFC4696645B7D63A6F1EB5981A40C_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mAD5DBE093E76880E64789702A97CBA6689F56673_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mD80D3EEF126AE173D2F3B605F8B0A54CAE7C2B34_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mFDCB23B69DEA9F5BE2D7A9C6723AA4C2DA377A74_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m49993303308DA83F0428B727963D72636E89A185_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m3B8B03A2F259FB5B7F3EE14B8AB1E6EC28762563_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_mC6569BD5855962EA6E065A650342379252A9B4B6_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_m0C5A65AF31C5B18C8A55252386F6DC6F8CAB716D_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_mC15C2E0CC165B12D5AAAEDC7EDF8B0B2D40EBC0B_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_m0AD224C0B2E0AF8ECE7474FA7C5739CCD2D7B653_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_m9B336E667523BE4D542C9B0F8C5872FC29D89241_gshared (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_mD02C689AF4AAC6370C974B3840606F766822C5A1_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m04CA91E23CB9A06C04676322E449547DF4A727CC_gshared (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m86F45B26F88BE2D89229BE109DD2C3ECBE1A75D5_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mE392213416CD5B1AD365760D4BCADDD86E73D6C9_gshared (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_m321641F6C6D1FEB65F71E277CEADAEB4A8FE2103_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m8C0F01475F50E01FC57A2D3387AFD8A8C3FCB4E2_gshared (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m18A65922A980FC84BD6F784C92453CDCD78D9B79_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mDA816A20986B7971DE3D85715EBFC71B86C533BF_gshared (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m067C7B1FE872B22651CA8A014D0AF0A7B636186A_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mF717E519A4F765E32241EFCCCCF36A8A9E1BF281_gshared (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mC9B102DCBDFE5FCD23543D62ACBE51A3F949F51F_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m5875E49D94B8AB3928F987AF87B9AD8963C1B9DB_gshared (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m18130C7A31C12DAB3FD6D3691656731D8142B0CB_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mC4FE0619AE87BAFBC68C508554DE11AB66312AE8_gshared (ColliderMeshLeafProcessor_1_t9047A5451E6571286F9BFE298D4602F5EA44182D* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_mE766078C3EA635F109E36DAF70DFD5BEE3A12B7D_gshared (ColliderMeshLeafProcessor_1_tF3FD42E2C699C60B76EE884E3F0C329DED1E0F3A* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_gshared_inline (AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompoundConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mD0D356622FA03DB70315840A1C942AF95071F7B3_gshared (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1C37361BE5527F15EFE2EDF30E980D0F82814FCE_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnyHitCollector_1_get_MaxFraction_m312F1F45D6F5E1474DDECE105B330D59A969C00F_gshared_inline (AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompoundConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m6DF9D5BD256482141940E046C9D5581A68A1E3E9_gshared (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m561736A2A4BE7C082377C8AA781BFB040C9A05C1_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ClosestHitCollector_1_get_MaxFraction_m74F696DEECD884736C722CA88477ED3EB1B4C458_gshared_inline (ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompoundConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68D28A89697160640396F566EFCC7A23A6884060_gshared (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m8DC718B6AB6AA1D3A8E4FCF0C1E639010BAC36E8_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlippedColliderCastQueryCollector_1_get_MaxFraction_m0707877816F91AA555C7937A8DD3F673349EF4A5_gshared (FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m954D7E223811208FE07AA8B11182BE9F138ADD51_gshared (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mBFE2A5A0F16EAC44BAACCD03E961128027544683_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlippedColliderCastQueryCollector_1_get_MaxFraction_mCA3B257B4A79C064DA5DBFB005CCBC9426130F27_gshared (FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m295744FD5BE9B24F904736F471DF3B4F3199CCEA_gshared (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m70314491794D2EE37C5E61A88C0D7391F79F13E4_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlippedColliderCastQueryCollector_1_get_MaxFraction_mA423EA61C4E124EBD592DE613AA024DDEFC9A21F_gshared (FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m42C83A4FD4538F2028A8D6095302AF4BF71685CD_gshared (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mADA4E6D60BEEE4A29F404102CF9C12C1697C12BE_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3385C804EFD08AA22128C2FFC9230484406A9B69_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m616642FA6B864D442813B38B4AA57D004919B5D1_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m50926596D3E83E22D5D73850D2D1C18966EBC443_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m78602B9573217054F1901220CF1D107B65A12A35_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mAFC50E29FA13A366A2B06FC38F095DFA936C294D_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m07546E3F58A18039670011EB1F949E4017CDE9CB_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m07B61FED56941723478EF4A6E10FF2BDEFB1CEF7_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m41E00FDD332BB97BA2E47C791FF2C6A1E66A7651_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m21643971768D831EC023377967A0DE9546DEA8E5_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB33280376B7036DF047A56D4FD4FEA4C4300C753_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m716F6D179580501B4A2EA6C8718699E01394E3D4_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mDAF9F2C023AB1B4E6AA09BDC3FBD931DA75CCF74_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlippedColliderCastQueryCollector_1_get_MaxFraction_m41B5DDBAD83DCDBC0B94DB994AB6B1F2978745BE_gshared (FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mB27406DF9976EF14B979EE8933222E6E5332D09B_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m4D0E30242E96E3064721C1418AD49FA1E3EF6BFC_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlippedColliderCastQueryCollector_1_get_MaxFraction_mD2C2CD0DDD7C179004970511BF22707653481B73_gshared (FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m96778E3D62817D25A7CFB28C82DCB462E88A8995_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m722077529AA4930EDE0A4A0D7C4FF51E705A4723_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlippedColliderCastQueryCollector_1_get_MaxFraction_m5C03826AB5F374E2DD6438BB837B2982E310D27F_gshared (FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m9EE93D0D907CBDBA80529FEF7C6D4EBC94B64326_gshared (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mD254966ABDC9806B972E2E92252F34F321F98889_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m42F73B820B9DDB1004C112505F990F18E88C4B42_gshared (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mE09DD3E28362274C43B7C306CBE537B9C95E9110_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m3D5CFA6829DB964BA7E05F79E08B2E66A94977E6_gshared (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m42B105B728A796161A9362EE35B83B5E17A147B5_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68AC73CDC38F2CE8FFF45BA4D24CD8C6EBA04EE0_gshared (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mEB10675D3CC476FF728F2D5D72A7BD098FF48983_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE030B532A37189A2CED45530B06502C14D6EC614_gshared (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE8662720670034F2B0BB1FE18039E3EE72CCB91B_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB7BB806CDA5ADB6EC61C9147148DF7FA4F812C3E_gshared (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m185130EF2DA9EE69102B7C1B4F8DB01EF18F9AA9_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mB6110E19E5ECF08BADFDCC2B9F0E7D70A7BB3902_gshared (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mBD6E0216B836F8CD0EE60396E009E24154A0D35A_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98 Activator_CreateInstance_TisTerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98_m5CE43CA3D8A48C7AB42A21BFFC1F11FF88F40844_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1665EB4368BB2C58D1A3167FD4F4ECF0B4C775E3_gshared (TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m7870968A8C68B45C0805C5351FA065E9A8D70C4F_gshared (ColliderMeshLeafProcessor_1_t5683950E667CEEF691EB994E9915CADB136C1EB8* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF (const RuntimeMethod* method) ;
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_taskForTracing, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E** ___1_runnerToInitialize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, RuntimeObject* ___0_stateMachine, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* ___1_runner, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___2_builtTask, const RuntimeMethod* method) ;
inline void ConfiguredTaskAwaiter_UnsafeOnCompleted_m56C37FD43DAF113A7BF8ED335649D7EC1C37450F (ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ConfiguredTaskAwaiter_UnsafeOnCompleted_m56C37FD43DAF113A7BF8ED335649D7EC1C37450F_gshared)(__this, ___0_continuation, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330 (Exception_t* ___0_exception, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___1_targetContext, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m36E3CF5C96AB7DB4FC2291DFFA33FB9C86CAF2EB (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4*, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m36E3CF5C96AB7DB4FC2291DFFA33FB9C86CAF2EB_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void ConfiguredTaskAwaiter_UnsafeOnCompleted_m6A8431DA20DEFD849C4EAC7C7A50B556DD97FDBC (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ConfiguredTaskAwaiter_UnsafeOnCompleted_m6A8431DA20DEFD849C4EAC7C7A50B556DD97FDBC_gshared)(__this, ___0_continuation, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m825558BCD9F80EC4E0684E46C382144CC6C773B1 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2*, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m825558BCD9F80EC4E0684E46C382144CC6C773B1_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* ___0_ecsw, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_MoveNext_m3E35FF6E73163F3DF54766C17613C332943C6574 (U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m27EE6FB45FF3E4BA5BE0FA5EDEAF224798D63B05 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m27EE6FB45FF3E4BA5BE0FA5EDEAF224798D63B05_gshared)(__this, ___0_stateMachine, method);
}
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared)(__this, method);
}
inline void ConfiguredTaskAwaiter_UnsafeOnCompleted_m9BBAE6AEBDEFAC8BDBBAC1792B91C838A8328166 (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ConfiguredTaskAwaiter_UnsafeOnCompleted_m9BBAE6AEBDEFAC8BDBBAC1792B91C838A8328166_gshared)(__this, ___0_continuation, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_mF1BA9B1F6E47E08B0EAC7A3180BF38EF887AE119 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_mF1BA9B1F6E47E08B0EAC7A3180BF38EF887AE119_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void TaskAwaiter_1_UnsafeOnCompleted_m6D1C7DBF4BC65110D191D1DCFCB2569B6A8EA20D (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m6D1C7DBF4BC65110D191D1DCFCB2569B6A8EA20D_gshared)(__this, ___0_continuation, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m6589CE6EF7E09786E0EB8F1CE083BBB774B8DA5B (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m6589CE6EF7E09786E0EB8F1CE083BBB774B8DA5B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void ValueTaskAwaiter_1_UnsafeOnCompleted_m71F16D9BAB7BA39BD3E4F790B35D14239767ABE8 (ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ValueTaskAwaiter_1_UnsafeOnCompleted_m71F16D9BAB7BA39BD3E4F790B35D14239767ABE8_gshared)(__this, ___0_continuation, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m92FAEEB0DFEAF5BB14CCAA49C02ABA46F59A4BBD (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814* ___0_awaiter, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814*, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m92FAEEB0DFEAF5BB14CCAA49C02ABA46F59A4BBD_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceAsyncAwaiter_UnsafeOnCompleted_mAF2CD9846BBB27ABF32CD265D26E8BBF10697FB8 (ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_mB8322151720540A0F8D02403937DB67E2F3E0994 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2*, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_mB8322151720540A0F8D02403937DB67E2F3E0994_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncCoreU3Ed__42_MoveNext_m213F745BB1A9B3DB8EA62D11F860225952D4D3BF (U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m0A47F888B695D647C8227395F468C00BAF45E3C2 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m0A47F888B695D647C8227395F468C00BAF45E3C2_gshared)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__37_MoveNext_m7D4593BB4A17B962A802A33048B73315C0207FEC (U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m4C04C5C75ACB87F00298B3D22C862DF304EA4D63 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m4C04C5C75ACB87F00298B3D22C862DF304EA4D63_gshared)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_MoveNext_m6FC0EF7F617D06511C1735FA80403EBA956DF0AE (U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5_gshared)(__this, ___0_stateMachine, method);
}
inline Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813_gshared)(__this, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2*, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_UnsafeOnCompleted_m4D66C43D25C399197F41D49D0BBE7CD1E71762FC (ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___0_awaiter, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A*, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m4D9FAB57031DB65424E4AACFB07EFF773CAC4618 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_UnsafeOnCompleted_mD2F8DC9A9836C16F605974566DB1622D0F7B1702 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584_m40B6514EBB2490AC91EE7AD281AD31DDB01B7867 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584_m40B6514EBB2490AC91EE7AD281AD31DDB01B7867_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582_m5F0B3CC7D874A6011B2DD39DFDCB70E318BFC06F (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582_m5F0B3CC7D874A6011B2DD39DFDCB70E318BFC06F_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52_mB7C283A105070D8D2BB3B3ECBB65B8B217BC85B9 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52_mB7C283A105070D8D2BB3B3ECBB65B8B217BC85B9_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B_mE88DF72DB9DFC9EE1376091851F3CC380C4387EA (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B_mE88DF72DB9DFC9EE1376091851F3CC380C4387EA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6_m1895B7AB5CF3865ADC457C0C4206CC6CF79B4F2F (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6_m1895B7AB5CF3865ADC457C0C4206CC6CF79B4F2F_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F_m803B3C91EB43B061C2E0C396654D5CDDF127F72D (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F_m803B3C91EB43B061C2E0C396654D5CDDF127F72D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80 (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)(__this, ___0_stateMachine, method);
}
inline void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m16E2D0D6338158BCA0E748B7F24F275C778A14A2 (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m16E2D0D6338158BCA0E748B7F24F275C778A14A2_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncValueTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m5FBA428D6411B6273D155D5A5EE833A1A338FE8A_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m5FBA428D6411B6273D155D5A5EE833A1A338FE8A_gshared_inline)(__this, ___0_stateMachine, method);
}
inline void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m268E5FBC3DCEF0470D41F9C2584E6B13F9BD7B8D (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m268E5FBC3DCEF0470D41F9C2584E6B13F9BD7B8D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline void AsyncValueTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m85A9FFB7131400A58050438B2B0A7CD7F043738A_inline (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncValueTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m85A9FFB7131400A58050438B2B0A7CD7F043738A_gshared_inline)(__this, ___0_stateMachine, method);
}
inline int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline)(__this, method);
}
inline int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline)(__this, method);
}
inline bool BasePopupField_2_ContainsPointer_mBD11BDF6BF30C2EEDFBC4DEF8E9D153F568F35DB (BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200* __this, int32_t ___0_pointerId, const RuntimeMethod* method)
{
	return ((  bool (*) (BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200*, int32_t, const RuntimeMethod*))BasePopupField_2_ContainsPointer_mBD11BDF6BF30C2EEDFBC4DEF8E9D153F568F35DB_gshared)(__this, ___0_pointerId, method);
}
inline void BasePopupField_2_ShowMenu_mF5AB5CF601F6113D8746FB5FE35C70F0D7613308 (BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200* __this, const RuntimeMethod* method)
{
	((  void (*) (BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200*, const RuntimeMethod*))BasePopupField_2_ShowMenu_mF5AB5CF601F6113D8746FB5FE35C70F0D7613308_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF (RuntimeObject* ___0_reader, const RuntimeMethod* method) ;
inline BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 BlobAssetSerializeExtensions_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBB98A3968762F868E9FFD34A2AD0953FF0B757DC (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 (*) (RuntimeObject*, const RuntimeMethod*))BlobAssetSerializeExtensions_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBB98A3968762F868E9FFD34A2AD0953FF0B757DC_gshared)(___0_binaryReader, method);
}
inline BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 BlobAssetSerializeExtensions_Read_TisCollider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31_mEE9347B55BBA2EE7B7EB6BDCB37C1018000BB1E6 (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 (*) (RuntimeObject*, const RuntimeMethod*))BlobAssetSerializeExtensions_Read_TisCollider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31_mEE9347B55BBA2EE7B7EB6BDCB37C1018000BB1E6_gshared)(___0_binaryReader, method);
}
inline BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobAssetSerializeExtensions_Read_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_mAFFB86AECB8367CAAF4382FB6E7A5B6359F29299 (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B (*) (RuntimeObject*, const RuntimeMethod*))BlobAssetSerializeExtensions_Read_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_mAFFB86AECB8367CAAF4382FB6E7A5B6359F29299_gshared)(___0_binaryReader, method);
}
inline BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobAssetSerializeExtensions_Read_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m63B89CD3F98B4A8992E79BEE1E164077E8C04B94 (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 (*) (RuntimeObject*, const RuntimeMethod*))BlobAssetSerializeExtensions_Read_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m63B89CD3F98B4A8992E79BEE1E164077E8C04B94_gshared)(___0_binaryReader, method);
}
inline BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobAssetSerializeExtensions_Read_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m1EEEEF17E0CA0CFEF90A3BBF7709509F4607313D (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 (*) (RuntimeObject*, const RuntimeMethod*))BlobAssetSerializeExtensions_Read_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m1EEEEF17E0CA0CFEF90A3BBF7709509F4607313D_gshared)(___0_binaryReader, method);
}
inline BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobAssetSerializeExtensions_Read_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m165B55B8F335E1B4B82299B55F8A23BF382329FA (RuntimeObject* ___0_binaryReader, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C (*) (RuntimeObject*, const RuntimeMethod*))BlobAssetSerializeExtensions_Read_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m165B55B8F335E1B4B82299B55F8A23BF382329FA_gshared)(___0_binaryReader, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF (CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* __this, const RuntimeMethod* method) ;
inline Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E (Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* (*) (Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E*, int32_t, const RuntimeMethod*))Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C (Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D (Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline (CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___0_filterA, CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___1_filterB, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___0_a, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_pos, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline (ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_a, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline (ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC (CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* __this, uint32_t ___0_childSubKeyNumOfBits, uint32_t ___1_childSubKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372 (MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC* __this, RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___0_transform, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB (ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D ___0_aFromB, MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC ___1_bFromC, const RuntimeMethod* method) ;
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mEBB18B146B1C3360527BDA88242E3BFC2C031BB4 (ColliderCompoundLeafProcessor_1_t471C69C2D00F5293CF880F94363F0B5417B616D4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t471C69C2D00F5293CF880F94363F0B5417B616D4*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mEBB18B146B1C3360527BDA88242E3BFC2C031BB4_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___0_a, RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___1_b, const RuntimeMethod* method) ;
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_m7A2AE50E149129B5AEA58FF4A79CBF4334AAC7F2 (ColliderCompoundLeafProcessor_1_t93327C3ACE724CD1A95F66BD1BBDCDE23F3759CD* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t93327C3ACE724CD1A95F66BD1BBDCDE23F3759CD*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_m7A2AE50E149129B5AEA58FF4A79CBF4334AAC7F2_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8 (const RuntimeMethod* method)
{
	return ((  ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 (*) (const RuntimeMethod*))Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8_gshared)(method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mF6EF44FC8C10FF98690F1467539FE086F2819B74 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mF6EF44FC8C10FF98690F1467539FE086F2819B74_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3A61DE62D3A035676D82164B61D7B4889CE283AB (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3A61DE62D3A035676D82164B61D7B4889CE283AB_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m49DA681B90E88BD2E278A392D768D216DA8D08D9 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m49DA681B90E88BD2E278A392D768D216DA8D08D9_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m08C9D19E24981DEA8B7D74C491597EA3CC5A4F4F (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m08C9D19E24981DEA8B7D74C491597EA3CC5A4F4F_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mA420E74D7650F17A030FA32FC7B4A930BAA3F791 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mA420E74D7650F17A030FA32FC7B4A930BAA3F791_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m164CE5696E04897BB73B0D3A5D3E761C1EB3045C (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m164CE5696E04897BB73B0D3A5D3E761C1EB3045C_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mB77098854ABB98727543B1465B5C986980475DA4 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mB77098854ABB98727543B1465B5C986980475DA4_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mF8972F3EC406EF14377DE9114A1638A096ACEB35 (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mF8972F3EC406EF14377DE9114A1638A096ACEB35_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m958D901237289EA0903EA54A117BC88EB1A00659 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m958D901237289EA0903EA54A117BC88EB1A00659_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mD2691476A3256E2829B639DD5675FCA1FB1D6C17 (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mD2691476A3256E2829B639DD5675FCA1FB1D6C17_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m448019851203EAEFBEABEA44E1E19068C3B617B3 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m448019851203EAEFBEABEA44E1E19068C3B617B3_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m45114D5E4FEA93F92F3C18D4CDF1F80A12D4BBBA (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m45114D5E4FEA93F92F3C18D4CDF1F80A12D4BBBA_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m1E334C67E7099A211572C6769986B3A09C4C62CF (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m1E334C67E7099A211572C6769986B3A09C4C62CF_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mD4DDE06287866B89734C3715B0CE1EF600EB5023 (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mD4DDE06287866B89734C3715B0CE1EF600EB5023_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m38936E874F4CCFA28970B752A482F58C91CEBE41 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m38936E874F4CCFA28970B752A482F58C91CEBE41_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_mE693BC8B51A39FDC357D09ACFF40F5EC6A0116D0 (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_mE693BC8B51A39FDC357D09ACFF40F5EC6A0116D0_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m86A700030EF7E13CC6F82C1A99F404B7952D9105 (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m86A700030EF7E13CC6F82C1A99F404B7952D9105_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mC78F007555423684A8393CF6F98833FE4867E38D (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mC78F007555423684A8393CF6F98833FE4867E38D_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7 (const RuntimeMethod* method)
{
	return ((  DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 (*) (const RuntimeMethod*))Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7_gshared)(method);
}
inline bool DefaultCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m429CBA02BABF364DC92AB4D12E41E08B7ACBC2F2 (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m429CBA02BABF364DC92AB4D12E41E08B7ACBC2F2_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m73031727531D2B39693206F4A517FB20471D1D48 (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m73031727531D2B39693206F4A517FB20471D1D48_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m5552989443727D9A6A11CE1B6B3BE5B40EE3BE25 (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m5552989443727D9A6A11CE1B6B3BE5B40EE3BE25_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m95844141AE1A4A9592652C440842AE3E8DE260D3 (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m95844141AE1A4A9592652C440842AE3E8DE260D3_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m1B78271331819E17A1429F92AFE1E528032AC4BC (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m1B78271331819E17A1429F92AFE1E528032AC4BC_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m5716D06DF9F33C6A9421D9F60517744125426197 (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m5716D06DF9F33C6A9421D9F60517744125426197_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m7ED6EAFFA42C6F9CEDEC9D267160345244DD8A96 (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m7ED6EAFFA42C6F9CEDEC9D267160345244DD8A96_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m694521BE4E4ADF300E522567547E4AF8A37BAB18 (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m694521BE4E4ADF300E522567547E4AF8A37BAB18_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m4FB2D27C119DF721F2B65F546A56FDC108E1D0F9 (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m4FB2D27C119DF721F2B65F546A56FDC108E1D0F9_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m77831B84325E3232EB3ADAC6DFD40550BC37D060 (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m77831B84325E3232EB3ADAC6DFD40550BC37D060_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m9B53CF54F217563AEAB86B9DD8B852BA27327C11 (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m9B53CF54F217563AEAB86B9DD8B852BA27327C11_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m8BDF3AB85D7B95FA0F95E85E6DAAE672DFABEAA4 (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m8BDF3AB85D7B95FA0F95E85E6DAAE672DFABEAA4_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B (const RuntimeMethod* method)
{
	return ((  ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 (*) (const RuntimeMethod*))Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B_gshared)(method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m20AA3788E2E9B9AB8BE4B46F1B250E201E23DD20 (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m20AA3788E2E9B9AB8BE4B46F1B250E201E23DD20_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m17849FF348F3E15549356190CDCC6BE98FCC3957 (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m17849FF348F3E15549356190CDCC6BE98FCC3957_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mEFD20EAEF5F5984F2D6375C78D783EAF2328C31D (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mEFD20EAEF5F5984F2D6375C78D783EAF2328C31D_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mCE179E99F0FEF10F9CE4E176B7F537BC1AFBAE9B (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mCE179E99F0FEF10F9CE4E176B7F537BC1AFBAE9B_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m221585B1ED06484E25186562352572A1AD35531E (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m221585B1ED06484E25186562352572A1AD35531E_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m93164EAF285328529CCE1F98AB49825E047AEE37 (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m93164EAF285328529CCE1F98AB49825E047AEE37_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m2FFEE3A046DEFC4696645B7D63A6F1EB5981A40C (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m2FFEE3A046DEFC4696645B7D63A6F1EB5981A40C_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mAD5DBE093E76880E64789702A97CBA6689F56673 (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mAD5DBE093E76880E64789702A97CBA6689F56673_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mD80D3EEF126AE173D2F3B605F8B0A54CAE7C2B34 (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mD80D3EEF126AE173D2F3B605F8B0A54CAE7C2B34_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mFDCB23B69DEA9F5BE2D7A9C6723AA4C2DA377A74 (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mFDCB23B69DEA9F5BE2D7A9C6723AA4C2DA377A74_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m49993303308DA83F0428B727963D72636E89A185 (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m49993303308DA83F0428B727963D72636E89A185_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m3B8B03A2F259FB5B7F3EE14B8AB1E6EC28762563 (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m3B8B03A2F259FB5B7F3EE14B8AB1E6EC28762563_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_mC6569BD5855962EA6E065A650342379252A9B4B6 (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_mC6569BD5855962EA6E065A650342379252A9B4B6_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_m0C5A65AF31C5B18C8A55252386F6DC6F8CAB716D (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_m0C5A65AF31C5B18C8A55252386F6DC6F8CAB716D_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_mC15C2E0CC165B12D5AAAEDC7EDF8B0B2D40EBC0B (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_mC15C2E0CC165B12D5AAAEDC7EDF8B0B2D40EBC0B_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_m0AD224C0B2E0AF8ECE7474FA7C5739CCD2D7B653 (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_m0AD224C0B2E0AF8ECE7474FA7C5739CCD2D7B653_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_m9B336E667523BE4D542C9B0F8C5872FC29D89241 (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_m9B336E667523BE4D542C9B0F8C5872FC29D89241_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_mD02C689AF4AAC6370C974B3840606F766822C5A1 (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_mD02C689AF4AAC6370C974B3840606F766822C5A1_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB (const RuntimeMethod* method)
{
	return ((  DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 (*) (const RuntimeMethod*))Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB_gshared)(method);
}
inline bool DefaultCompoundDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m04CA91E23CB9A06C04676322E449547DF4A727CC (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m04CA91E23CB9A06C04676322E449547DF4A727CC_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m86F45B26F88BE2D89229BE109DD2C3ECBE1A75D5 (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m86F45B26F88BE2D89229BE109DD2C3ECBE1A75D5_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mE392213416CD5B1AD365760D4BCADDD86E73D6C9 (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mE392213416CD5B1AD365760D4BCADDD86E73D6C9_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_m321641F6C6D1FEB65F71E277CEADAEB4A8FE2103 (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_m321641F6C6D1FEB65F71E277CEADAEB4A8FE2103_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m8C0F01475F50E01FC57A2D3387AFD8A8C3FCB4E2 (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m8C0F01475F50E01FC57A2D3387AFD8A8C3FCB4E2_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m18A65922A980FC84BD6F784C92453CDCD78D9B79 (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m18A65922A980FC84BD6F784C92453CDCD78D9B79_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mDA816A20986B7971DE3D85715EBFC71B86C533BF (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mDA816A20986B7971DE3D85715EBFC71B86C533BF_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m067C7B1FE872B22651CA8A014D0AF0A7B636186A (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m067C7B1FE872B22651CA8A014D0AF0A7B636186A_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mF717E519A4F765E32241EFCCCCF36A8A9E1BF281 (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mF717E519A4F765E32241EFCCCCF36A8A9E1BF281_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mC9B102DCBDFE5FCD23543D62ACBE51A3F949F51F (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mC9B102DCBDFE5FCD23543D62ACBE51A3F949F51F_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
inline bool DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m5875E49D94B8AB3928F987AF87B9AD8963C1B9DB (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___1_collector, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* ___2_target, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*, const RuntimeMethod*))DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m5875E49D94B8AB3928F987AF87B9AD8963C1B9DB_gshared)(__this, ___0_input, ___1_collector, ___2_target, method);
}
inline bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m18130C7A31C12DAB3FD6D3691656731D8142B0CB (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164*, const RuntimeMethod*))ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m18130C7A31C12DAB3FD6D3691656731D8142B0CB_gshared)(__this, ___0_input, ___1_leafData, ___2_collector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9 (Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* __this, int32_t ___0_primitiveKey, float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51* ___1_vertices, uint8_t* ___2_flags, CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A* ___3_filter, Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54* ___4_material, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline (uint8_t ___0_primitiveFlags, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline (uint8_t ___0_flags, uint8_t ___1_testFlag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6 (PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF* __this, CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___0_filter, Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 ___1_material, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E (float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7 (PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_v1, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___2_v2, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___3_v3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895 (PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_v1, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___2_v2, const RuntimeMethod* method) ;
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mC4FE0619AE87BAFBC68C508554DE11AB66312AE8 (ColliderMeshLeafProcessor_1_t9047A5451E6571286F9BFE298D4602F5EA44182D* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t9047A5451E6571286F9BFE298D4602F5EA44182D*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mC4FE0619AE87BAFBC68C508554DE11AB66312AE8_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool ColliderMeshLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_mE766078C3EA635F109E36DAF70DFD5BEE3A12B7D (ColliderMeshLeafProcessor_1_tF3FD42E2C699C60B76EE884E3F0C329DED1E0F3A* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tF3FD42E2C699C60B76EE884E3F0C329DED1E0F3A*, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_mE766078C3EA635F109E36DAF70DFD5BEE3A12B7D_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC (const RuntimeMethod* method)
{
	return ((  CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 (*) (const RuntimeMethod*))Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC_gshared)(method);
}
inline float AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_inline (AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* __this, const RuntimeMethod* method)
{
	return ((  float (*) (AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, const RuntimeMethod*))AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_gshared_inline)(__this, method);
}
inline bool CompoundConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mD0D356622FA03DB70315840A1C942AF95071F7B3 (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, uint32_t, uint32_t, const RuntimeMethod*))CompoundConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mD0D356622FA03DB70315840A1C942AF95071F7B3_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1C37361BE5527F15EFE2EDF30E980D0F82814FCE (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1C37361BE5527F15EFE2EDF30E980D0F82814FCE_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float AnyHitCollector_1_get_MaxFraction_m312F1F45D6F5E1474DDECE105B330D59A969C00F_inline (AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* __this, const RuntimeMethod* method)
{
	return ((  float (*) (AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, const RuntimeMethod*))AnyHitCollector_1_get_MaxFraction_m312F1F45D6F5E1474DDECE105B330D59A969C00F_gshared_inline)(__this, method);
}
inline bool CompoundConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m6DF9D5BD256482141940E046C9D5581A68A1E3E9 (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, uint32_t, uint32_t, const RuntimeMethod*))CompoundConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m6DF9D5BD256482141940E046C9D5581A68A1E3E9_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m561736A2A4BE7C082377C8AA781BFB040C9A05C1 (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m561736A2A4BE7C082377C8AA781BFB040C9A05C1_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float ClosestHitCollector_1_get_MaxFraction_m74F696DEECD884736C722CA88477ED3EB1B4C458_inline (ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* __this, const RuntimeMethod* method)
{
	return ((  float (*) (ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, const RuntimeMethod*))ClosestHitCollector_1_get_MaxFraction_m74F696DEECD884736C722CA88477ED3EB1B4C458_gshared_inline)(__this, method);
}
inline bool CompoundConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68D28A89697160640396F566EFCC7A23A6884060 (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, uint32_t, uint32_t, const RuntimeMethod*))CompoundConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68D28A89697160640396F566EFCC7A23A6884060_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m8DC718B6AB6AA1D3A8E4FCF0C1E639010BAC36E8 (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m8DC718B6AB6AA1D3A8E4FCF0C1E639010BAC36E8_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float FlippedColliderCastQueryCollector_1_get_MaxFraction_m0707877816F91AA555C7937A8DD3F673349EF4A5 (FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, const RuntimeMethod*))FlippedColliderCastQueryCollector_1_get_MaxFraction_m0707877816F91AA555C7937A8DD3F673349EF4A5_gshared)(__this, method);
}
inline bool CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m954D7E223811208FE07AA8B11182BE9F138ADD51 (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, uint32_t, uint32_t, const RuntimeMethod*))CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m954D7E223811208FE07AA8B11182BE9F138ADD51_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mBFE2A5A0F16EAC44BAACCD03E961128027544683 (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mBFE2A5A0F16EAC44BAACCD03E961128027544683_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float FlippedColliderCastQueryCollector_1_get_MaxFraction_mCA3B257B4A79C064DA5DBFB005CCBC9426130F27 (FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, const RuntimeMethod*))FlippedColliderCastQueryCollector_1_get_MaxFraction_mCA3B257B4A79C064DA5DBFB005CCBC9426130F27_gshared)(__this, method);
}
inline bool CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m295744FD5BE9B24F904736F471DF3B4F3199CCEA (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, uint32_t, uint32_t, const RuntimeMethod*))CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m295744FD5BE9B24F904736F471DF3B4F3199CCEA_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m70314491794D2EE37C5E61A88C0D7391F79F13E4 (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m70314491794D2EE37C5E61A88C0D7391F79F13E4_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float FlippedColliderCastQueryCollector_1_get_MaxFraction_mA423EA61C4E124EBD592DE613AA024DDEFC9A21F (FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, const RuntimeMethod*))FlippedColliderCastQueryCollector_1_get_MaxFraction_mA423EA61C4E124EBD592DE613AA024DDEFC9A21F_gshared)(__this, method);
}
inline bool CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m42C83A4FD4538F2028A8D6095302AF4BF71685CD (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, uint32_t, uint32_t, const RuntimeMethod*))CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m42C83A4FD4538F2028A8D6095302AF4BF71685CD_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mADA4E6D60BEEE4A29F404102CF9C12C1697C12BE (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mADA4E6D60BEEE4A29F404102CF9C12C1697C12BE_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E (const RuntimeMethod* method)
{
	return ((  ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB (*) (const RuntimeMethod*))Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E_gshared)(method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3385C804EFD08AA22128C2FFC9230484406A9B69 (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3385C804EFD08AA22128C2FFC9230484406A9B69_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m616642FA6B864D442813B38B4AA57D004919B5D1 (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m616642FA6B864D442813B38B4AA57D004919B5D1_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m50926596D3E83E22D5D73850D2D1C18966EBC443 (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m50926596D3E83E22D5D73850D2D1C18966EBC443_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m78602B9573217054F1901220CF1D107B65A12A35 (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m78602B9573217054F1901220CF1D107B65A12A35_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mAFC50E29FA13A366A2B06FC38F095DFA936C294D (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mAFC50E29FA13A366A2B06FC38F095DFA936C294D_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m07546E3F58A18039670011EB1F949E4017CDE9CB (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m07546E3F58A18039670011EB1F949E4017CDE9CB_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m07B61FED56941723478EF4A6E10FF2BDEFB1CEF7 (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m07B61FED56941723478EF4A6E10FF2BDEFB1CEF7_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m41E00FDD332BB97BA2E47C791FF2C6A1E66A7651 (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m41E00FDD332BB97BA2E47C791FF2C6A1E66A7651_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m21643971768D831EC023377967A0DE9546DEA8E5 (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m21643971768D831EC023377967A0DE9546DEA8E5_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB33280376B7036DF047A56D4FD4FEA4C4300C753 (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB33280376B7036DF047A56D4FD4FEA4C4300C753_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m716F6D179580501B4A2EA6C8718699E01394E3D4 (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m716F6D179580501B4A2EA6C8718699E01394E3D4_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mDAF9F2C023AB1B4E6AA09BDC3FBD931DA75CCF74 (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mDAF9F2C023AB1B4E6AA09BDC3FBD931DA75CCF74_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float FlippedColliderCastQueryCollector_1_get_MaxFraction_m41B5DDBAD83DCDBC0B94DB994AB6B1F2978745BE (FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB*, const RuntimeMethod*))FlippedColliderCastQueryCollector_1_get_MaxFraction_m41B5DDBAD83DCDBC0B94DB994AB6B1F2978745BE_gshared)(__this, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mB27406DF9976EF14B979EE8933222E6E5332D09B (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mB27406DF9976EF14B979EE8933222E6E5332D09B_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m4D0E30242E96E3064721C1418AD49FA1E3EF6BFC (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m4D0E30242E96E3064721C1418AD49FA1E3EF6BFC_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float FlippedColliderCastQueryCollector_1_get_MaxFraction_mD2C2CD0DDD7C179004970511BF22707653481B73 (FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A*, const RuntimeMethod*))FlippedColliderCastQueryCollector_1_get_MaxFraction_mD2C2CD0DDD7C179004970511BF22707653481B73_gshared)(__this, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m96778E3D62817D25A7CFB28C82DCB462E88A8995 (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m96778E3D62817D25A7CFB28C82DCB462E88A8995_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m722077529AA4930EDE0A4A0D7C4FF51E705A4723 (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m722077529AA4930EDE0A4A0D7C4FF51E705A4723_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline float FlippedColliderCastQueryCollector_1_get_MaxFraction_m5C03826AB5F374E2DD6438BB837B2982E310D27F (FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F*, const RuntimeMethod*))FlippedColliderCastQueryCollector_1_get_MaxFraction_m5C03826AB5F374E2DD6438BB837B2982E310D27F_gshared)(__this, method);
}
inline bool ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m9EE93D0D907CBDBA80529FEF7C6D4EBC94B64326 (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F*, uint32_t, uint32_t, const RuntimeMethod*))ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m9EE93D0D907CBDBA80529FEF7C6D4EBC94B64326_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mD254966ABDC9806B972E2E92252F34F321F98889 (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mD254966ABDC9806B972E2E92252F34F321F98889_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07 (const RuntimeMethod* method)
{
	return ((  MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 (*) (const RuntimeMethod*))Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07_gshared)(method);
}
inline bool MeshConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m42F73B820B9DDB1004C112505F990F18E88C4B42 (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, uint32_t, uint32_t, const RuntimeMethod*))MeshConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m42F73B820B9DDB1004C112505F990F18E88C4B42_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mE09DD3E28362274C43B7C306CBE537B9C95E9110 (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mE09DD3E28362274C43B7C306CBE537B9C95E9110_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool MeshConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m3D5CFA6829DB964BA7E05F79E08B2E66A94977E6 (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, uint32_t, uint32_t, const RuntimeMethod*))MeshConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m3D5CFA6829DB964BA7E05F79E08B2E66A94977E6_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m42B105B728A796161A9362EE35B83B5E17A147B5 (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m42B105B728A796161A9362EE35B83B5E17A147B5_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool MeshConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68AC73CDC38F2CE8FFF45BA4D24CD8C6EBA04EE0 (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, uint32_t, uint32_t, const RuntimeMethod*))MeshConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68AC73CDC38F2CE8FFF45BA4D24CD8C6EBA04EE0_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mEB10675D3CC476FF728F2D5D72A7BD098FF48983 (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mEB10675D3CC476FF728F2D5D72A7BD098FF48983_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE030B532A37189A2CED45530B06502C14D6EC614 (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, uint32_t, uint32_t, const RuntimeMethod*))MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE030B532A37189A2CED45530B06502C14D6EC614_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE8662720670034F2B0BB1FE18039E3EE72CCB91B (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE8662720670034F2B0BB1FE18039E3EE72CCB91B_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB7BB806CDA5ADB6EC61C9147148DF7FA4F812C3E (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, uint32_t, uint32_t, const RuntimeMethod*))MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB7BB806CDA5ADB6EC61C9147148DF7FA4F812C3E_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m185130EF2DA9EE69102B7C1B4F8DB01EF18F9AA9 (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m185130EF2DA9EE69102B7C1B4F8DB01EF18F9AA9_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline bool MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mB6110E19E5ECF08BADFDCC2B9F0E7D70A7BB3902 (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, uint32_t, uint32_t, const RuntimeMethod*))MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mB6110E19E5ECF08BADFDCC2B9F0E7D70A7BB3902_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mBD6E0216B836F8CD0EE60396E009E24154A0D35A (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mBD6E0216B836F8CD0EE60396E009E24154A0D35A_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
inline TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98 Activator_CreateInstance_TisTerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98_m5CE43CA3D8A48C7AB42A21BFFC1F11FF88F40844 (const RuntimeMethod* method)
{
	return ((  TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98 (*) (const RuntimeMethod*))Activator_CreateInstance_TisTerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98_m5CE43CA3D8A48C7AB42A21BFFC1F11FF88F40844_gshared)(method);
}
inline bool TerrainConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1665EB4368BB2C58D1A3167FD4F4ECF0B4C775E3 (TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257* ___1_collider, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, uint32_t ___3_numColliderKeyBits, uint32_t ___4_subKey, const RuntimeMethod* method)
{
	return ((  bool (*) (TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, uint32_t, uint32_t, const RuntimeMethod*))TerrainConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1665EB4368BB2C58D1A3167FD4F4ECF0B4C775E3_gshared)(__this, ___0_input, ___1_collider, ___2_collector, ___3_numColliderKeyBits, ___4_subKey, method);
}
inline bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m7870968A8C68B45C0805C5351FA065E9A8D70C4F (ColliderMeshLeafProcessor_1_t5683950E667CEEF691EB994E9915CADB136C1EB8* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	return ((  bool (*) (ColliderMeshLeafProcessor_1_t5683950E667CEEF691EB994E9915CADB136C1EB8*, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, int32_t, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D*, const RuntimeMethod*))ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m7870968A8C68B45C0805C5351FA065E9A8D70C4F_gshared)(__this, ___0_input, ___1_primitiveKey, ___2_collector, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_inverse_mAB8FC214DC9438E44EB31D19E3C70D3BDFAAF202_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_UnaryNegation_m862876969881839716CBAF9AE074FA4BFDFABDF1_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_val, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RigidTransform__ctor_m7665CC6FBD784FC7CB02E48B0A4B58008A4BC709_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_rotation, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_translation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float4_get_xyz_mE6EC829F35512C7BC159047FDC134E80F3B37A06_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_cross_m4CA2DAE150C6381B0D05E8AA9E48E88CF6157180_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_wwww_mF04E8B99431D2717DEE58BDAE207EF4C7E1A0009_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_xyzx_m5FFC709BBF25AC7B7755AE077E4288E47089C76C_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_wwwx_m698BBD6517D0DCF19C3529E0E686FF430642E480_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_yzxy_m78C60157637373AC6CB36343778B04CAA046ADDD_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_zxyy_m4B8D0449EEB8DD3CE5A79C96E911C70617339C4E_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline (float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_zxyz_m91C90CDA336353253B33F0407198ACCC593EBB1B_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_yzxz_mE81FC33B6A0D370B2C8DB339CC5501533BB31223_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Subtraction_mBC40F52B8A8EF499A1AA3CC987E5935BD188B4E3_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rcp_mED2BCEE83560EEE59CE06EBD90332CAFA9C08024_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline (float ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m36E3CF5C96AB7DB4FC2291DFFA33FB9C86CAF2EB_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* L_8 = ___1_stateMachine;
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016 L_9 = (*(U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016*)L_8);
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ConfiguredTaskAwaiter_UnsafeOnCompleted_m56C37FD43DAF113A7BF8ED335649D7EC1C37450F(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m36E3CF5C96AB7DB4FC2291DFFA33FB9C86CAF2EB_AdjustorThunk (RuntimeObject* __this, ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m36E3CF5C96AB7DB4FC2291DFFA33FB9C86CAF2EB(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m825558BCD9F80EC4E0684E46C382144CC6C773B1_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* L_8 = ___1_stateMachine;
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016 L_9 = (*(U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016*)L_8);
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ConfiguredTaskAwaiter_UnsafeOnCompleted_m6A8431DA20DEFD849C4EAC7C7A50B556DD97FDBC(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m825558BCD9F80EC4E0684E46C382144CC6C773B1_AdjustorThunk (RuntimeObject* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m825558BCD9F80EC4E0684E46C382144CC6C773B1(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m27EE6FB45FF3E4BA5BE0FA5EDEAF224798D63B05_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759((&V_0), NULL);
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* L_1 = ___0_stateMachine;
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_MoveNext_m3E35FF6E73163F3DF54766C17613C332943C6574(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
			goto IL_0042;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m27EE6FB45FF3E4BA5BE0FA5EDEAF224798D63B05_AdjustorThunk (RuntimeObject* __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__32_t87F5A3FBBFCAB3C02B17359F408AF51C6FEAA016_m27EE6FB45FF3E4BA5BE0FA5EDEAF224798D63B05(_thisAdjusted, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_mF1BA9B1F6E47E08B0EAC7A3180BF38EF887AE119_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* L_8 = ___1_stateMachine;
			U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9 L_9 = (*(U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9*)L_8);
			U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ConfiguredTaskAwaiter_UnsafeOnCompleted_m9BBAE6AEBDEFAC8BDBBAC1792B91C838A8328166(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_mF1BA9B1F6E47E08B0EAC7A3180BF38EF887AE119_AdjustorThunk (RuntimeObject* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_mF1BA9B1F6E47E08B0EAC7A3180BF38EF887AE119(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m6589CE6EF7E09786E0EB8F1CE083BBB774B8DA5B_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* L_8 = ___1_stateMachine;
			U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8 L_9 = (*(U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8*)L_8);
			U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			TaskAwaiter_1_UnsafeOnCompleted_m6D1C7DBF4BC65110D191D1DCFCB2569B6A8EA20D(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m6589CE6EF7E09786E0EB8F1CE083BBB774B8DA5B_AdjustorThunk (RuntimeObject* __this, TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m6589CE6EF7E09786E0EB8F1CE083BBB774B8DA5B(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m92FAEEB0DFEAF5BB14CCAA49C02ABA46F59A4BBD_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814* ___0_awaiter, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* L_8 = ___1_stateMachine;
			U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B L_9 = (*(U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B*)L_8);
			U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ValueTaskAwaiter_1_UnsafeOnCompleted_m71F16D9BAB7BA39BD3E4F790B35D14239767ABE8(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m92FAEEB0DFEAF5BB14CCAA49C02ABA46F59A4BBD_AdjustorThunk (RuntimeObject* __this, ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814* ___0_awaiter, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m92FAEEB0DFEAF5BB14CCAA49C02ABA46F59A4BBD(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_mB8322151720540A0F8D02403937DB67E2F3E0994_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* L_8 = ___1_stateMachine;
			U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8 L_9 = (*(U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8*)L_8);
			U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ForceAsyncAwaiter_UnsafeOnCompleted_mAF2CD9846BBB27ABF32CD265D26E8BBF10697FB8(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_mB8322151720540A0F8D02403937DB67E2F3E0994_AdjustorThunk (RuntimeObject* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_mB8322151720540A0F8D02403937DB67E2F3E0994(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m0A47F888B695D647C8227395F468C00BAF45E3C2_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759((&V_0), NULL);
			U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* L_1 = ___0_stateMachine;
			U3CReadAsyncCoreU3Ed__42_MoveNext_m213F745BB1A9B3DB8EA62D11F860225952D4D3BF(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
			goto IL_0042;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m0A47F888B695D647C8227395F468C00BAF45E3C2_AdjustorThunk (RuntimeObject* __this, U3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncCoreU3Ed__42_tCAF30ECCB2895D562BE47F8891C36FA22DB92F5B_m0A47F888B695D647C8227395F468C00BAF45E3C2(_thisAdjusted, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m4C04C5C75ACB87F00298B3D22C862DF304EA4D63_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759((&V_0), NULL);
			U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* L_1 = ___0_stateMachine;
			U3CReadAsyncInternalU3Ed__37_MoveNext_m7D4593BB4A17B962A802A33048B73315C0207FEC(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
			goto IL_0042;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m4C04C5C75ACB87F00298B3D22C862DF304EA4D63_AdjustorThunk (RuntimeObject* __this, U3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__37_t3B42673D6F11F9E08B8F74FBF2045DA0AE1669F8_m4C04C5C75ACB87F00298B3D22C862DF304EA4D63(_thisAdjusted, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759((&V_0), NULL);
			U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* L_1 = ___0_stateMachine;
			U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_MoveNext_m6FC0EF7F617D06511C1735FA80403EBA956DF0AE(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
			goto IL_0042;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5_AdjustorThunk (RuntimeObject* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5(_thisAdjusted, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* L_8 = ___1_stateMachine;
			U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F L_9 = (*(U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*)L_8);
			U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ForceAsyncAwaiter_UnsafeOnCompleted_mAF2CD9846BBB27ABF32CD265D26E8BBF10697FB8(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176_AdjustorThunk (RuntimeObject* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* L_8 = ___1_stateMachine;
			U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F L_9 = (*(U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*)L_8);
			U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D_AdjustorThunk (RuntimeObject* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___0_awaiter, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* L_8 = ___1_stateMachine;
			U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1 L_9 = (*(U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1*)L_8);
			U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ValueTaskAwaiter_UnsafeOnCompleted_m4D66C43D25C399197F41D49D0BBE7CD1E71762FC(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49_AdjustorThunk (RuntimeObject* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___0_awaiter, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* L_8 = ___1_stateMachine;
			U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683 L_9 = (*(U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683*)L_8);
			U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			ConfiguredTaskAwaiter_UnsafeOnCompleted_m4D9FAB57031DB65424E4AACFB07EFF773CAC4618(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E_AdjustorThunk (RuntimeObject* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584_m40B6514EBB2490AC91EE7AD281AD31DDB01B7867_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584* L_8 = ___1_stateMachine;
			U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584 L_9 = (*(U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584*)L_8);
			U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			YieldAwaiter_UnsafeOnCompleted_mD2F8DC9A9836C16F605974566DB1622D0F7B1702(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584_m40B6514EBB2490AC91EE7AD281AD31DDB01B7867_AdjustorThunk (RuntimeObject* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_t50C23C2BF8C1E70D8F8FA44144134148BAF6E584_m40B6514EBB2490AC91EE7AD281AD31DDB01B7867(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582_m5F0B3CC7D874A6011B2DD39DFDCB70E318BFC06F_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582* L_8 = ___1_stateMachine;
			U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582 L_9 = (*(U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582*)L_8);
			U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			YieldAwaiter_UnsafeOnCompleted_mD2F8DC9A9836C16F605974566DB1622D0F7B1702(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582_m5F0B3CC7D874A6011B2DD39DFDCB70E318BFC06F_AdjustorThunk (RuntimeObject* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_t19757D425E3E3CAE10321109D254D85613C1D582_m5F0B3CC7D874A6011B2DD39DFDCB70E318BFC06F(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52_mB7C283A105070D8D2BB3B3ECBB65B8B217BC85B9_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52* L_8 = ___1_stateMachine;
			U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52 L_9 = (*(U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52*)L_8);
			U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			YieldAwaiter_UnsafeOnCompleted_mD2F8DC9A9836C16F605974566DB1622D0F7B1702(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52_mB7C283A105070D8D2BB3B3ECBB65B8B217BC85B9_AdjustorThunk (RuntimeObject* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t0A6845289CDEC23CD9B0211EEB8B82E4E6B92D52_mB7C283A105070D8D2BB3B3ECBB65B8B217BC85B9(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B_mE88DF72DB9DFC9EE1376091851F3CC380C4387EA_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B* L_8 = ___1_stateMachine;
			U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B L_9 = (*(U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B*)L_8);
			U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			YieldAwaiter_UnsafeOnCompleted_mD2F8DC9A9836C16F605974566DB1622D0F7B1702(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B_mE88DF72DB9DFC9EE1376091851F3CC380C4387EA_AdjustorThunk (RuntimeObject* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_t4E7AE84BA92C15855C85C046348C1D913597F60B_mE88DF72DB9DFC9EE1376091851F3CC380C4387EA(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6_m1895B7AB5CF3865ADC457C0C4206CC6CF79B4F2F_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6* L_8 = ___1_stateMachine;
			U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6 L_9 = (*(U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6*)L_8);
			U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6 L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			YieldAwaiter_UnsafeOnCompleted_mD2F8DC9A9836C16F605974566DB1622D0F7B1702(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6_m1895B7AB5CF3865ADC457C0C4206CC6CF79B4F2F_AdjustorThunk (RuntimeObject* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tFBC5DF860DCEFFE17E08DCBEA744047EFEE797D6_m1895B7AB5CF3865ADC457C0C4206CC6CF79B4F2F(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F_m803B3C91EB43B061C2E0C396654D5CDDF127F72D_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2;
			L_2 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
			L_6 = AsyncTaskMethodBuilder_1_get_Task_mA17A31C6B9A4FF42F72DD1373841DFA541BE1813(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F* L_8 = ___1_stateMachine;
			U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F L_9 = (*(U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F*)L_8);
			U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F L_10 = L_9;
			RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_10);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_12 = V_0;
			Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_11, L_12, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_13, NULL);
		}

IL_004c_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = V_1;
			YieldAwaiter_UnsafeOnCompleted_mD2F8DC9A9836C16F605974566DB1622D0F7B1702(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F_m803B3C91EB43B061C2E0C396654D5CDDF127F72D_AdjustorThunk (RuntimeObject* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tEECF989BD0E0201FC585C75A787B3B339A4B572F_m803B3C91EB43B061C2E0C396654D5CDDF127F72D(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TStateMachine_tBE29CD66C0196882F89D90FFE58B8D4AF07E1C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TStateMachine_tBE29CD66C0196882F89D90FFE58B8D4AF07E1C18);
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2;
			L_2 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			G_B3_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_2);
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_004c_1;
			}
		}
		{
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
			L_6 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
			V_2 = L_6;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_7 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			Il2CppFullySharedGenericAny* L_8 = ___1_stateMachine;
			il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TStateMachine_tBE29CD66C0196882F89D90FFE58B8D4AF07E1C18);
			RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_11 = V_0;
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_12 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_7, (RuntimeObject*)L_10, L_11, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_12, NULL);
		}

IL_004c_1:
		{
			Il2CppFullySharedGenericAny* L_13 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = V_1;
			ConstrainedActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), L_15, (void*)L_13, L_14);
			goto IL_0063;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TStateMachine_tE9E4DE29A0AB41247C1DFEBB056BB96E3128CF81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TStateMachine_tE9E4DE29A0AB41247C1DFEBB056BB96E3128CF81);
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_stateMachine;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TStateMachine_tE9E4DE29A0AB41247C1DFEBB056BB96E3128CF81);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759((&V_0), NULL);
			Il2CppFullySharedGenericAny* L_4 = ___0_stateMachine;
			ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (void*)L_4);
			goto IL_0042;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80(_thisAdjusted, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m16E2D0D6338158BCA0E748B7F24F275C778A14A2_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__this->____useBuilder = (bool)1;
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*)(&__this->____methodBuilder);
		ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* L_1 = ___0_awaiter;
		U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* L_2 = ___1_stateMachine;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_mF1BA9B1F6E47E08B0EAC7A3180BF38EF887AE119(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m16E2D0D6338158BCA0E748B7F24F275C778A14A2_AdjustorThunk (RuntimeObject* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*>(__this + _offset);
	AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m16E2D0D6338158BCA0E748B7F24F275C778A14A2(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m5FBA428D6411B6273D155D5A5EE833A1A338FE8A_gshared (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*)(&__this->____methodBuilder);
		U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m5FBA428D6411B6273D155D5A5EE833A1A338FE8A_AdjustorThunk (RuntimeObject* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727*>(__this + _offset);
	AsyncValueTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m5FBA428D6411B6273D155D5A5EE833A1A338FE8A_inline(_thisAdjusted, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m268E5FBC3DCEF0470D41F9C2584E6B13F9BD7B8D_gshared (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3), (bool)1);
		Il2CppFullySharedGenericAny* L_0 = ___0_awaiter;
		Il2CppFullySharedGenericAny* L_1 = ___1_stateMachine;
		((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m268E5FBC3DCEF0470D41F9C2584E6B13F9BD7B8D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9*>(__this + _offset);
	AsyncValueTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m268E5FBC3DCEF0470D41F9C2584E6B13F9BD7B8D(_thisAdjusted, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m85A9FFB7131400A58050438B2B0A7CD7F043738A_gshared (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_stateMachine;
		((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m85A9FFB7131400A58050438B2B0A7CD7F043738A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9*>(__this + _offset);
	AsyncValueTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m85A9FFB7131400A58050438B2B0A7CD7F043738A_inline(_thisAdjusted, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePopupField_2_ProcessPointerDown_TisRuntimeObject_m0B0BF631FB653CD10DC405ECD691CB076C99C562_gshared (BasePopupField_2_t42613BF7260A870BBE4E44C49E88726DA9F18200* __this, PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* ___0_evt, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_0 = ___0_evt;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_3 = ___0_evt;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_5;
		L_5 = BasePopupField_2_ContainsPointer_mBD11BDF6BF30C2EEDFBC4DEF8E9D153F568F35DB(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		BasePopupField_2_ShowMenu_mF5AB5CF601F6113D8746FB5FE35C70F0D7613308(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_7 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7);
		EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7, NULL);
	}

IL_002f:
	{
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePopupField_2_ProcessPointerDown_TisRuntimeObject_m69738C0C4076120D25FE16F7B2D30564503C1881_gshared (BasePopupField_2_t299579EC3CD33AC9C944D30D0CB0DD4E9D97ED9C* __this, PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* ___0_evt, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_0 = ___0_evt;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_3 = ___0_evt;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_5;
		L_5 = ((  bool (*) (BasePopupField_2_t299579EC3CD33AC9C944D30D0CB0DD4E9D97ED9C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		((  void (*) (BasePopupField_2_t299579EC3CD33AC9C944D30D0CB0DD4E9D97ED9C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_7 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7);
		EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7, NULL);
	}

IL_002f:
	{
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobAssetReference_1_TryRead_TisRuntimeObject_m42F1D618D7216AA064DD2AA530231E591DCD4348_gshared (RuntimeObject* ___0_binaryReader, int32_t ___1_version, BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480* ___2_result, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_binaryReader;
		int32_t L_1;
		L_1 = BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF((RuntimeObject*)L_0, NULL);
		int32_t L_2 = ___1_version;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480* L_3 = ___2_result;
		il2cpp_codegen_initobj(L_3, sizeof(BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480));
		return (bool)0;
	}

IL_0017:
	{
		BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480* L_4 = ___2_result;
		RuntimeObject* L_5 = ___0_binaryReader;
		BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 L_6;
		L_6 = BlobAssetSerializeExtensions_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBB98A3968762F868E9FFD34A2AD0953FF0B757DC((RuntimeObject*)L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		*(BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480*)L_4 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobAssetReference_1_TryRead_TisRuntimeObject_m439C56511B0BD0EB58AD20013C56E72A5C18917F_gshared (RuntimeObject* ___0_binaryReader, int32_t ___1_version, BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602* ___2_result, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_binaryReader;
		int32_t L_1;
		L_1 = BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF((RuntimeObject*)L_0, NULL);
		int32_t L_2 = ___1_version;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602* L_3 = ___2_result;
		il2cpp_codegen_initobj(L_3, sizeof(BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602));
		return (bool)0;
	}

IL_0017:
	{
		BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602* L_4 = ___2_result;
		RuntimeObject* L_5 = ___0_binaryReader;
		BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 L_6;
		L_6 = BlobAssetSerializeExtensions_Read_TisCollider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31_mEE9347B55BBA2EE7B7EB6BDCB37C1018000BB1E6((RuntimeObject*)L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		*(BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602*)L_4 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobAssetReference_1_TryRead_TisRuntimeObject_m9F7BF615C4AFD7BC41F1524904785B7BD2552781_gshared (RuntimeObject* ___0_binaryReader, int32_t ___1_version, BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B* ___2_result, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_binaryReader;
		int32_t L_1;
		L_1 = BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF((RuntimeObject*)L_0, NULL);
		int32_t L_2 = ___1_version;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B* L_3 = ___2_result;
		il2cpp_codegen_initobj(L_3, sizeof(BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B));
		return (bool)0;
	}

IL_0017:
	{
		BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B* L_4 = ___2_result;
		RuntimeObject* L_5 = ___0_binaryReader;
		BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B L_6;
		L_6 = BlobAssetSerializeExtensions_Read_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_mAFFB86AECB8367CAAF4382FB6E7A5B6359F29299((RuntimeObject*)L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		*(BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B*)L_4 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobAssetReference_1_TryRead_TisRuntimeObject_m0F07E69B07CEC182813AF3B6E8F52484BDC92E2B_gshared (RuntimeObject* ___0_binaryReader, int32_t ___1_version, BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13* ___2_result, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_binaryReader;
		int32_t L_1;
		L_1 = BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF((RuntimeObject*)L_0, NULL);
		int32_t L_2 = ___1_version;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13* L_3 = ___2_result;
		il2cpp_codegen_initobj(L_3, sizeof(BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13));
		return (bool)0;
	}

IL_0017:
	{
		BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13* L_4 = ___2_result;
		RuntimeObject* L_5 = ___0_binaryReader;
		BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 L_6;
		L_6 = BlobAssetSerializeExtensions_Read_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m63B89CD3F98B4A8992E79BEE1E164077E8C04B94((RuntimeObject*)L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		*(BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13*)L_4 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobAssetReference_1_TryRead_TisRuntimeObject_mE5A7443F526973426F173E38B6DF799F9EE45F48_gshared (RuntimeObject* ___0_binaryReader, int32_t ___1_version, BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24* ___2_result, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_binaryReader;
		int32_t L_1;
		L_1 = BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF((RuntimeObject*)L_0, NULL);
		int32_t L_2 = ___1_version;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24* L_3 = ___2_result;
		il2cpp_codegen_initobj(L_3, sizeof(BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24));
		return (bool)0;
	}

IL_0017:
	{
		BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24* L_4 = ___2_result;
		RuntimeObject* L_5 = ___0_binaryReader;
		BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 L_6;
		L_6 = BlobAssetSerializeExtensions_Read_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m1EEEEF17E0CA0CFEF90A3BBF7709509F4607313D((RuntimeObject*)L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		*(BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24*)L_4 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobAssetReference_1_TryRead_TisIl2CppFullySharedGenericAny_mD6BAB86BC963A5C696D8F46CC3D50504E18EE0FD_gshared (Il2CppFullySharedGenericAny ___0_binaryReader, int32_t ___1_version, BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9* ___2_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t54BA7181809D1EA8550FCB435A659DDADFE41AB0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_U_t54BA7181809D1EA8550FCB435A659DDADFE41AB0);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_binaryReader : &___0_binaryReader), SizeOf_U_t54BA7181809D1EA8550FCB435A659DDADFE41AB0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_0);
		int32_t L_2;
		L_2 = BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF((RuntimeObject*)L_1, NULL);
		int32_t L_3 = ___1_version;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9* L_4 = ___2_result;
		il2cpp_codegen_initobj(L_4, sizeof(BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9));
		return (bool)0;
	}

IL_0017:
	{
		BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9* L_5 = ___2_result;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_binaryReader : &___0_binaryReader), SizeOf_U_t54BA7181809D1EA8550FCB435A659DDADFE41AB0);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 L_8;
		L_8 = ((  BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))((RuntimeObject*)L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		*(BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9*)L_5 = L_8;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobAssetReference_1_TryRead_TisRuntimeObject_m0F1A812A9B30218B27B1553328EC58DF69DB430A_gshared (RuntimeObject* ___0_binaryReader, int32_t ___1_version, BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C* ___2_result, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_binaryReader;
		int32_t L_1;
		L_1 = BinaryReaderExtensions_ReadInt_m7D1BFD00352AA2B31BC16604AF8DCB5DCDA32AAF((RuntimeObject*)L_0, NULL);
		int32_t L_2 = ___1_version;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C* L_3 = ___2_result;
		il2cpp_codegen_initobj(L_3, sizeof(BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C));
		return (bool)0;
	}

IL_0017:
	{
		BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C* L_4 = ___2_result;
		RuntimeObject* L_5 = ___0_binaryReader;
		BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C L_6;
		L_6 = BlobAssetSerializeExtensions_Read_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m165B55B8F335E1B4B82299B55F8A23BF382329FA((RuntimeObject*)L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		*(BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C*)L_4 = L_6;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mEBB18B146B1C3360527BDA88242E3BFC2C031BB4_gshared (ColliderCompoundLeafProcessor_1_t471C69C2D00F5293CF880F94363F0B5417B616D4* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_D_tC8FD823EB3780E8EF92C579A867B1BB8DCC6B324 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	void* L_54 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_49 = alloca(SizeOf_D_tC8FD823EB3780E8EF92C579A867B1BB8DCC6B324);
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_D_tC8FD823EB3780E8EF92C579A867B1BB8DCC6B324);
	memset(V_3, 0, SizeOf_D_tC8FD823EB3780E8EF92C579A867B1BB8DCC6B324);
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)L_49);
		il2cpp_codegen_memcpy(V_3, L_49, SizeOf_D_tC8FD823EB3780E8EF92C579A867B1BB8DCC6B324);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		Il2CppFullySharedGenericStruct* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_55;
		L_55 = ConstrainedFuncInvoker3< bool, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, Il2CppFullySharedGenericStruct*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 1), L_54, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_50, L_51, L_53);
		return L_55;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mEBB18B146B1C3360527BDA88242E3BFC2C031BB4_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t471C69C2D00F5293CF880F94363F0B5417B616D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t471C69C2D00F5293CF880F94363F0B5417B616D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mEBB18B146B1C3360527BDA88242E3BFC2C031BB4(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_m7A2AE50E149129B5AEA58FF4A79CBF4334AAC7F2_gshared (ColliderCompoundLeafProcessor_1_t93327C3ACE724CD1A95F66BD1BBDCDE23F3759CD* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_D_tF2E95C9CE7121A03A25258B72785FA2A435A2590 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_36 = alloca(SizeOf_D_tF2E95C9CE7121A03A25258B72785FA2A435A2590);
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_D_tF2E95C9CE7121A03A25258B72785FA2A435A2590);
	memset(V_2, 0, SizeOf_D_tF2E95C9CE7121A03A25258B72785FA2A435A2590);
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)L_36);
		il2cpp_codegen_memcpy(V_2, L_36, SizeOf_D_tF2E95C9CE7121A03A25258B72785FA2A435A2590);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		Il2CppFullySharedGenericStruct* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_42;
		L_42 = ConstrainedFuncInvoker3< bool, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, Il2CppFullySharedGenericStruct*, Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 1), L_41, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_37, L_38, L_40);
		return L_42;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_m7A2AE50E149129B5AEA58FF4A79CBF4334AAC7F2_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t93327C3ACE724CD1A95F66BD1BBDCDE23F3759CD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t93327C3ACE724CD1A95F66BD1BBDCDE23F3759CD*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_m7A2AE50E149129B5AEA58FF4A79CBF4334AAC7F2(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3A61DE62D3A035676D82164B61D7B4889CE283AB_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mF6EF44FC8C10FF98690F1467539FE086F2819B74((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3A61DE62D3A035676D82164B61D7B4889CE283AB_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3A61DE62D3A035676D82164B61D7B4889CE283AB(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m08C9D19E24981DEA8B7D74C491597EA3CC5A4F4F_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m49DA681B90E88BD2E278A392D768D216DA8D08D9((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m08C9D19E24981DEA8B7D74C491597EA3CC5A4F4F_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m08C9D19E24981DEA8B7D74C491597EA3CC5A4F4F(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m164CE5696E04897BB73B0D3A5D3E761C1EB3045C_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mA420E74D7650F17A030FA32FC7B4A930BAA3F791((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m164CE5696E04897BB73B0D3A5D3E761C1EB3045C_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m164CE5696E04897BB73B0D3A5D3E761C1EB3045C(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mF8972F3EC406EF14377DE9114A1638A096ACEB35_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mB77098854ABB98727543B1465B5C986980475DA4((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mF8972F3EC406EF14377DE9114A1638A096ACEB35_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mF8972F3EC406EF14377DE9114A1638A096ACEB35(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mD2691476A3256E2829B639DD5675FCA1FB1D6C17_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m958D901237289EA0903EA54A117BC88EB1A00659((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mD2691476A3256E2829B639DD5675FCA1FB1D6C17_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mD2691476A3256E2829B639DD5675FCA1FB1D6C17(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m45114D5E4FEA93F92F3C18D4CDF1F80A12D4BBBA_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m448019851203EAEFBEABEA44E1E19068C3B617B3((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m45114D5E4FEA93F92F3C18D4CDF1F80A12D4BBBA_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m45114D5E4FEA93F92F3C18D4CDF1F80A12D4BBBA(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mD4DDE06287866B89734C3715B0CE1EF600EB5023_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m1E334C67E7099A211572C6769986B3A09C4C62CF((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mD4DDE06287866B89734C3715B0CE1EF600EB5023_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mD4DDE06287866B89734C3715B0CE1EF600EB5023(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_mE693BC8B51A39FDC357D09ACFF40F5EC6A0116D0_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m38936E874F4CCFA28970B752A482F58C91CEBE41((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_mE693BC8B51A39FDC357D09ACFF40F5EC6A0116D0_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_mE693BC8B51A39FDC357D09ACFF40F5EC6A0116D0(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mC78F007555423684A8393CF6F98833FE4867E38D_gshared (ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		ConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360 L_49;
		L_49 = Activator_CreateInstance_TisConvexCompoundDispatcher_tD8E10764C3A8D06944876C1CE869DBA665600360_m6470F092EA636B6001FBBD535919D9BCB2A94CD8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = ConvexCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m86A700030EF7E13CC6F82C1A99F404B7952D9105((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mC78F007555423684A8393CF6F98833FE4867E38D_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t20AE8127CA0C627FD4F5142134CC7707C2C4215A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mC78F007555423684A8393CF6F98833FE4867E38D(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m73031727531D2B39693206F4A517FB20471D1D48_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 L_49;
		L_49 = Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = DefaultCompoundDispatcher_CastCollider_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m429CBA02BABF364DC92AB4D12E41E08B7ACBC2F2((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m73031727531D2B39693206F4A517FB20471D1D48_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m73031727531D2B39693206F4A517FB20471D1D48(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m95844141AE1A4A9592652C440842AE3E8DE260D3_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 L_49;
		L_49 = Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = DefaultCompoundDispatcher_CastCollider_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m5552989443727D9A6A11CE1B6B3BE5B40EE3BE25((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m95844141AE1A4A9592652C440842AE3E8DE260D3_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m95844141AE1A4A9592652C440842AE3E8DE260D3(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m5716D06DF9F33C6A9421D9F60517744125426197_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 L_49;
		L_49 = Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = DefaultCompoundDispatcher_CastCollider_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m1B78271331819E17A1429F92AFE1E528032AC4BC((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m5716D06DF9F33C6A9421D9F60517744125426197_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m5716D06DF9F33C6A9421D9F60517744125426197(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m694521BE4E4ADF300E522567547E4AF8A37BAB18_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 L_49;
		L_49 = Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m7ED6EAFFA42C6F9CEDEC9D267160345244DD8A96((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m694521BE4E4ADF300E522567547E4AF8A37BAB18_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m694521BE4E4ADF300E522567547E4AF8A37BAB18(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m77831B84325E3232EB3ADAC6DFD40550BC37D060_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 L_49;
		L_49 = Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m4FB2D27C119DF721F2B65F546A56FDC108E1D0F9((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m77831B84325E3232EB3ADAC6DFD40550BC37D060_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m77831B84325E3232EB3ADAC6DFD40550BC37D060(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m8BDF3AB85D7B95FA0F95E85E6DAAE672DFABEAA4_gshared (ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_4 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_4), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_11 = ___0_input;
		V_1 = L_11;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_12 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_14;
		L_14 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_13, NULL);
		V_2 = L_14;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_15 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_16 = V_2;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_17 = ___0_input;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7 L_18 = L_17.___Ray;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = L_18.___Origin;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20;
		L_20 = math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline(L_16, L_19, NULL);
		L_15->___Origin = L_20;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_21 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&V_1)->___Ray);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_22 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_23 = L_22.___rot;
		Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* L_24 = (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7*)(&(&___0_input)->___Ray);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline(L_24, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26;
		L_26 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_23, L_25, NULL);
		Ray_set_Displacement_m7990C07C38317F635F28C794189A5765339386DA(L_21, L_26, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_28 = L_27.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_29;
		L_29 = ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline((&___0_input), NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_30;
		L_30 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_28, L_29, NULL);
		ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline((&V_1), L_30, NULL);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_31 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_32 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_33 = __this->___m_CompoundCollider;
		uint32_t L_34;
		L_34 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_33, NULL);
		int32_t L_35 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_36;
		L_36 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_32, L_34, (uint32_t)L_35, NULL);
		L_31->___ColliderKey = L_36;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_37 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_38 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_39 = L_38.___QueryContext;
		uint32_t L_40 = L_39.___NumColliderKeyBits;
		L_37->___NumColliderKeyBits = L_40;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_41 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_42 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_43 = L_42.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_44 = L_43.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_45 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_46 = L_45->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_47;
		memset((&L_47), 0, sizeof(L_47));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_47), L_46, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_48;
		L_48 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_44, L_47, NULL);
		L_41->___WorldFromLocalTransform = L_48;
		DefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4 L_49;
		L_49 = Activator_CreateInstance_TisDefaultCompoundDispatcher_t3EBE0096366F66C778EDAD618E6897AB986BEAE4_m80610739D095DD4647268101467B93290837D4E7(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_3 = L_49;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_50 = V_1;
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_51 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_52 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_53;
		L_53 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_52, NULL);
		bool L_54;
		L_54 = DefaultCompoundDispatcher_CastCollider_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m9B53CF54F217563AEAB86B9DD8B852BA27327C11((&V_3), L_50, L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_54;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m8BDF3AB85D7B95FA0F95E85E6DAAE672DFABEAA4_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_leafData, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D00973B944004FF633B8633E68FF8C9EDD09C2A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m8BDF3AB85D7B95FA0F95E85E6DAAE672DFABEAA4(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m17849FF348F3E15549356190CDCC6BE98FCC3957_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m20AA3788E2E9B9AB8BE4B46F1B250E201E23DD20((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m17849FF348F3E15549356190CDCC6BE98FCC3957_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m17849FF348F3E15549356190CDCC6BE98FCC3957(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mCE179E99F0FEF10F9CE4E176B7F537BC1AFBAE9B_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mEFD20EAEF5F5984F2D6375C78D783EAF2328C31D((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mCE179E99F0FEF10F9CE4E176B7F537BC1AFBAE9B_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mCE179E99F0FEF10F9CE4E176B7F537BC1AFBAE9B(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m93164EAF285328529CCE1F98AB49825E047AEE37_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m221585B1ED06484E25186562352572A1AD35531E((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m93164EAF285328529CCE1F98AB49825E047AEE37_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m93164EAF285328529CCE1F98AB49825E047AEE37(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mAD5DBE093E76880E64789702A97CBA6689F56673_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m2FFEE3A046DEFC4696645B7D63A6F1EB5981A40C((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mAD5DBE093E76880E64789702A97CBA6689F56673_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mAD5DBE093E76880E64789702A97CBA6689F56673(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mFDCB23B69DEA9F5BE2D7A9C6723AA4C2DA377A74_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mD80D3EEF126AE173D2F3B605F8B0A54CAE7C2B34((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mFDCB23B69DEA9F5BE2D7A9C6723AA4C2DA377A74_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mFDCB23B69DEA9F5BE2D7A9C6723AA4C2DA377A74(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m3B8B03A2F259FB5B7F3EE14B8AB1E6EC28762563_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m49993303308DA83F0428B727963D72636E89A185((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m3B8B03A2F259FB5B7F3EE14B8AB1E6EC28762563_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m3B8B03A2F259FB5B7F3EE14B8AB1E6EC28762563(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_m0C5A65AF31C5B18C8A55252386F6DC6F8CAB716D_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_mC6569BD5855962EA6E065A650342379252A9B4B6((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_m0C5A65AF31C5B18C8A55252386F6DC6F8CAB716D_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA83C6427A3B03AFC6795770A8BAE8C1E66F6419A_m0C5A65AF31C5B18C8A55252386F6DC6F8CAB716D(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_m0AD224C0B2E0AF8ECE7474FA7C5739CCD2D7B653_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_mC15C2E0CC165B12D5AAAEDC7EDF8B0B2D40EBC0B((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_m0AD224C0B2E0AF8ECE7474FA7C5739CCD2D7B653_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tA4AB51D930DCB5FF97616B0C701A82614005A5BD_m0AD224C0B2E0AF8ECE7474FA7C5739CCD2D7B653(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_mD02C689AF4AAC6370C974B3840606F766822C5A1_gshared (ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		ConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62 L_36;
		L_36 = Activator_CreateInstance_TisConvexCompoundDistanceDispatcher_t23419CAD34FEFC3E726CE1785D4B66381A3DFC62_m712AB23C8D275A33C0B3311761870D1B4FF2347B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = ConvexCompoundDistanceDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_m9B336E667523BE4D542C9B0F8C5872FC29D89241((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_mD02C689AF4AAC6370C974B3840606F766822C5A1_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t4D0E469A54549649EABAC4DA6EAD3F8C9FB591C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_tEF43699F80FF9067525CEE36BA83D35E4B2BAE26_mD02C689AF4AAC6370C974B3840606F766822C5A1(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m86F45B26F88BE2D89229BE109DD2C3ECBE1A75D5_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 L_36;
		L_36 = Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = DefaultCompoundDispatcher_CalculateDistance_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m04CA91E23CB9A06C04676322E449547DF4A727CC((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m86F45B26F88BE2D89229BE109DD2C3ECBE1A75D5_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAllHitsCollector_1_tBB8BB8690C9AC734C7A04E53A25A06BEAC92889F_m86F45B26F88BE2D89229BE109DD2C3ECBE1A75D5(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_m321641F6C6D1FEB65F71E277CEADAEB4A8FE2103_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 L_36;
		L_36 = Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = DefaultCompoundDispatcher_CalculateDistance_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_mE392213416CD5B1AD365760D4BCADDD86E73D6C9((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_m321641F6C6D1FEB65F71E277CEADAEB4A8FE2103_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, AnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisAnyHitCollector_1_t8CCC9AEE87EEA576BE9C690484DEB5E92DD12B21_m321641F6C6D1FEB65F71E277CEADAEB4A8FE2103(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m18A65922A980FC84BD6F784C92453CDCD78D9B79_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 L_36;
		L_36 = Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = DefaultCompoundDispatcher_CalculateDistance_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m8C0F01475F50E01FC57A2D3387AFD8A8C3FCB4E2((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m18A65922A980FC84BD6F784C92453CDCD78D9B79_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, ClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisClosestHitCollector_1_t4AF5AEB12D78F01E7A2E1A1C779A8A3147A73DF0_m18A65922A980FC84BD6F784C92453CDCD78D9B79(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m067C7B1FE872B22651CA8A014D0AF0A7B636186A_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 L_36;
		L_36 = Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_mDA816A20986B7971DE3D85715EBFC71B86C533BF((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m067C7B1FE872B22651CA8A014D0AF0A7B636186A_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t8095759EEA56E13B3933C24A0DBE526D08ACE8D7_m067C7B1FE872B22651CA8A014D0AF0A7B636186A(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mC9B102DCBDFE5FCD23543D62ACBE51A3F949F51F_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 L_36;
		L_36 = Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mF717E519A4F765E32241EFCCCCF36A8A9E1BF281((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mC9B102DCBDFE5FCD23543D62ACBE51A3F949F51F_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t297DA034E642B5008EC78F20F9F9AA2A647A2AD5_mC9B102DCBDFE5FCD23543D62ACBE51A3F949F51F(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m18130C7A31C12DAB3FD6D3691656731D8142B0CB_gshared (ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* V_0 = NULL;
	ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_0 = __this->___m_CompoundCollider;
		Accessor_1_tCE7792AD88605A71FDEDDC4646EC7C0A931E8E1E L_1;
		L_1 = CompoundCollider_get_Children_m027626689DB594584983ECAB257A68FC4C8426EF((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_0, NULL);
		V_3 = L_1;
		int32_t L_2 = ___1_leafData;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_3;
		L_3 = Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E((&V_3), L_2, Accessor_1_get_Item_mB2833F602678B56D1EF35FC93D623210E951277E_RuntimeMethod_var);
		V_0 = L_3;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_4 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_5 = L_4.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6;
		L_6 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_5, NULL);
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_7 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_8;
		L_8 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_7, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_9;
		L_9 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_11 = ___0_input;
		V_1 = L_11;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_12 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_13 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&___0_input)->___QueryContext);
		CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028* L_14 = __this->___m_CompoundCollider;
		uint32_t L_15;
		L_15 = CompoundCollider_get_NumColliderKeyBits_m46399D0AAC9E23B3895DC4AEA51D1682091B7FCC((CompoundCollider_t6DDACFE9E58DC5A9C6925638C30904D1AA103028*)L_14, NULL);
		int32_t L_16 = ___1_leafData;
		ColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56 L_17;
		L_17 = QueryContext_PushSubKey_m2BEF72A20C5D0ECD4A1AC3BA965CCAA3322154FD(L_13, L_15, (uint32_t)L_16, NULL);
		L_12->___ColliderKey = L_17;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_18 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_19 = ___0_input;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_20 = L_19.___QueryContext;
		uint32_t L_21 = L_20.___NumColliderKeyBits;
		L_18->___NumColliderKeyBits = L_21;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5* L_22 = (QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5*)(&(&V_1)->___QueryContext);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_23 = V_1;
		QueryContext_t23195FF8EA2E8937F8ED2395260A96F008F217E5 L_24 = L_23.___QueryContext;
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_25 = L_24.___WorldFromLocalTransform;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_26 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_27 = L_26->___CompoundFromChild;
		MTransform_t1AD7C8733046B726C9EB85F7309D1C286D4A5AAC L_28;
		memset((&L_28), 0, sizeof(L_28));
		MTransform__ctor_mC52E341BE6A827C1CE6F5A1C95E2FE5588066372((&L_28), L_27, NULL);
		ScaledMTransform_tB256F6F9CA19B94493CB97365F80E884E82D9B2D L_29;
		L_29 = ScaledMTransform_Mul_m228615E1EEF6E3C39CF6D48302A644CCEDA798FB(L_25, L_28, NULL);
		L_22->___WorldFromLocalTransform = L_29;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_30 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_31 = L_30->___CompoundFromChild;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_32;
		L_32 = math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline(L_31, NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_33 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_34 = L_33.___Transform;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_35;
		L_35 = math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline(L_32, L_34, NULL);
		(&V_1)->___Transform = L_35;
		DefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45 L_36;
		L_36 = Activator_CreateInstance_TisDefaultCompoundDispatcher_tDC3AA3FFF27717D10946C62DA129BB97F9C0AA45_m5F57012265CAC3DE3DAB44467FF23D11F608DDAB(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = L_36;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_37 = V_1;
		FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* L_38 = ___2_collector;
		Child_tA17DC1308BA0A4AF80D04D6C95F2E42530B4F96A* L_39 = V_0;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_40;
		L_40 = Child_get_Collider_m6929065423565C96C7633B61E2426B205925789D(L_39, NULL);
		bool L_41;
		L_41 = DefaultCompoundDispatcher_CalculateDistance_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m5875E49D94B8AB3928F987AF87B9AD8963C1B9DB((&V_2), L_37, L_38, L_40, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_41;
	}
}
IL2CPP_EXTERN_C  bool ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m18130C7A31C12DAB3FD6D3691656731D8142B0CB_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_leafData, FlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164* ___2_collector, const RuntimeMethod* method)
{
	ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderCompoundLeafProcessor_1_t0164452E35E2A973F609159EB7EA2D8C982360EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderCompoundLeafProcessor_1_DistanceLeaf_TisFlippedColliderDistanceQueryCollector_1_t3DDF17ABBE5CB9559AA6DB84BFA42FD4CD290164_m18130C7A31C12DAB3FD6D3691656731D8142B0CB(_thisAdjusted, ___0_input, ___1_leafData, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mC4FE0619AE87BAFBC68C508554DE11AB66312AE8_gshared (ColliderMeshLeafProcessor_1_t9047A5451E6571286F9BFE298D4602F5EA44182D* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_D_t6DDA6030370CE7F4C429C9122B950F5FF86AC9E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_40 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_D_t6DDA6030370CE7F4C429C9122B950F5FF86AC9E6);
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_D_t6DDA6030370CE7F4C429C9122B950F5FF86AC9E6);
	memset(V_4, 0, SizeOf_D_t6DDA6030370CE7F4C429C9122B950F5FF86AC9E6);
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)L_7);
		il2cpp_codegen_memcpy(V_4, L_7, SizeOf_D_t6DDA6030370CE7F4C429C9122B950F5FF86AC9E6);
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		Il2CppFullySharedGenericStruct* L_14 = ___2_collector;
		float L_16;
		L_16 = ConstrainedFuncInvoker0< float >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_15, (void*)L_14);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_18;
		L_18 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_18);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_20;
		L_20 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_21 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_20);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_22;
		L_22 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_23 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_22);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_24;
		L_24 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_24);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_19, L_21, L_23, L_25, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_26;
		L_26 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_27 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_26);
		int32_t L_28 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_29;
		L_29 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_28)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_30 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_29);
		int32_t L_31 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_32;
		L_32 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_31)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_33 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_32);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_27, L_30, L_33, NULL);
	}

IL_00df:
	{
		bool L_34 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_35 = ___0_input;
		Il2CppFullySharedGenericStruct* L_36 = ___2_collector;
		uint32_t L_37 = __this->___m_NumColliderKeyBits;
		int32_t L_38 = ___1_primitiveKey;
		int32_t L_39 = V_9;
		bool L_41;
		L_41 = ConstrainedFuncInvoker5< bool, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, Il2CppFullySharedGenericStruct*, uint32_t, uint32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), L_40, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_35, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_36, L_37, (uint32_t)((int32_t)(((int32_t)(L_38<<1))|L_39)));
		V_7 = (bool)((int32_t)((int32_t)L_34|(int32_t)L_41));
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0108:
	{
		int32_t L_43 = V_9;
		int32_t L_44 = V_5;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_45 = V_7;
		return L_45;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mC4FE0619AE87BAFBC68C508554DE11AB66312AE8_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t9047A5451E6571286F9BFE298D4602F5EA44182D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t9047A5451E6571286F9BFE298D4602F5EA44182D*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisIl2CppFullySharedGenericStruct_mC4FE0619AE87BAFBC68C508554DE11AB66312AE8(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_mE766078C3EA635F109E36DAF70DFD5BEE3A12B7D_gshared (ColliderMeshLeafProcessor_1_tF3FD42E2C699C60B76EE884E3F0C329DED1E0F3A* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_D_tBAC9AB947F02CCDD737203F4250D3693E784718D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	void* L_40 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_D_tBAC9AB947F02CCDD737203F4250D3693E784718D);
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_D_tBAC9AB947F02CCDD737203F4250D3693E784718D);
	memset(V_7, 0, SizeOf_D_tBAC9AB947F02CCDD737203F4250D3693E784718D);
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		uint8_t L_7 = V_1;
		int32_t L_8;
		L_8 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_7, NULL);
		V_4 = L_8;
		uint8_t L_9 = V_1;
		bool L_10;
		L_10 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_9, (uint8_t)4, NULL);
		V_5 = L_10;
		V_6 = (bool)0;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)L_11);
		il2cpp_codegen_memcpy(V_7, L_11, SizeOf_D_tBAC9AB947F02CCDD737203F4250D3693E784718D);
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_12 = ___0_input;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13 = L_12.___Transform;
		ConstrainedActionInvoker1< RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_14, (void*)(Il2CppFullySharedGenericStruct*)V_7, L_13);
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_15 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_16 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_15, L_16, NULL);
		V_9 = 0;
		goto IL_010e;
	}

IL_0070:
	{
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00b1;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_18;
		L_18 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_18);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_20;
		L_20 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_21 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_20);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_22;
		L_22 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_23 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_22);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_24;
		L_24 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_24);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_19, L_21, L_23, L_25, NULL);
		goto IL_00e5;
	}

IL_00b1:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_26;
		L_26 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_27 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_26);
		int32_t L_28 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_29;
		L_29 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_28)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_30 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_29);
		int32_t L_31 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_32;
		L_32 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_31)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_33 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_32);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_27, L_30, L_33, NULL);
	}

IL_00e5:
	{
		bool L_34 = V_6;
		ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 L_35 = ___0_input;
		Il2CppFullySharedGenericStruct* L_36 = ___2_collector;
		uint32_t L_37 = __this->___m_NumColliderKeyBits;
		int32_t L_38 = ___1_primitiveKey;
		int32_t L_39 = V_9;
		bool L_41;
		L_41 = ConstrainedFuncInvoker5< bool, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363, ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*, Il2CppFullySharedGenericStruct*, uint32_t, uint32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 1), L_40, (void*)(Il2CppFullySharedGenericStruct*)V_7, L_35, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_36, L_37, (uint32_t)((int32_t)(((int32_t)(L_38<<1))|L_39)));
		V_6 = (bool)((int32_t)((int32_t)L_34|(int32_t)L_41));
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_010e:
	{
		int32_t L_43 = V_9;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0070;
		}
	}
	{
		bool L_45 = V_6;
		return L_45;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_mE766078C3EA635F109E36DAF70DFD5BEE3A12B7D_AdjustorThunk (RuntimeObject* __this, ColliderDistanceInput_tC217630A29BE68A28F872BA6590AB4C5C2E52363 ___0_input, int32_t ___1_primitiveKey, Il2CppFullySharedGenericStruct* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tF3FD42E2C699C60B76EE884E3F0C329DED1E0F3A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tF3FD42E2C699C60B76EE884E3F0C329DED1E0F3A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_DistanceLeaf_TisIl2CppFullySharedGenericStruct_mE766078C3EA635F109E36DAF70DFD5BEE3A12B7D(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1C37361BE5527F15EFE2EDF30E980D0F82814FCE_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 L_7;
		L_7 = Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_14 = ___2_collector;
		float L_15;
		L_15 = AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = CompoundConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mD0D356622FA03DB70315840A1C942AF95071F7B3((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1C37361BE5527F15EFE2EDF30E980D0F82814FCE_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1C37361BE5527F15EFE2EDF30E980D0F82814FCE(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m561736A2A4BE7C082377C8AA781BFB040C9A05C1_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 L_7;
		L_7 = Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_14 = ___2_collector;
		float L_15;
		L_15 = AnyHitCollector_1_get_MaxFraction_m312F1F45D6F5E1474DDECE105B330D59A969C00F_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = CompoundConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m6DF9D5BD256482141940E046C9D5581A68A1E3E9((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m561736A2A4BE7C082377C8AA781BFB040C9A05C1_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m561736A2A4BE7C082377C8AA781BFB040C9A05C1(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m8DC718B6AB6AA1D3A8E4FCF0C1E639010BAC36E8_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 L_7;
		L_7 = Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_14 = ___2_collector;
		float L_15;
		L_15 = ClosestHitCollector_1_get_MaxFraction_m74F696DEECD884736C722CA88477ED3EB1B4C458_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = CompoundConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68D28A89697160640396F566EFCC7A23A6884060((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m8DC718B6AB6AA1D3A8E4FCF0C1E639010BAC36E8_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m8DC718B6AB6AA1D3A8E4FCF0C1E639010BAC36E8(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mBFE2A5A0F16EAC44BAACCD03E961128027544683_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 L_7;
		L_7 = Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_m0707877816F91AA555C7937A8DD3F673349EF4A5(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m954D7E223811208FE07AA8B11182BE9F138ADD51((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mBFE2A5A0F16EAC44BAACCD03E961128027544683_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mBFE2A5A0F16EAC44BAACCD03E961128027544683(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m70314491794D2EE37C5E61A88C0D7391F79F13E4_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 L_7;
		L_7 = Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_mCA3B257B4A79C064DA5DBFB005CCBC9426130F27(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m295744FD5BE9B24F904736F471DF3B4F3199CCEA((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m70314491794D2EE37C5E61A88C0D7391F79F13E4_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m70314491794D2EE37C5E61A88C0D7391F79F13E4(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mADA4E6D60BEEE4A29F404102CF9C12C1697C12BE_gshared (ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		CompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236 L_7;
		L_7 = Activator_CreateInstance_TisCompoundConvexDispatcher_t741E4BE1B5689E0DF5DBE8E215C44705F90CB236_m4F9D3F32992FEF152DE619717541938EC8B50DFC(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_mA423EA61C4E124EBD592DE613AA024DDEFC9A21F(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = CompoundConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m42C83A4FD4538F2028A8D6095302AF4BF71685CD((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mADA4E6D60BEEE4A29F404102CF9C12C1697C12BE_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t364BA364E60215ACCD6E8307361416023CA12E63*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mADA4E6D60BEEE4A29F404102CF9C12C1697C12BE(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m616642FA6B864D442813B38B4AA57D004919B5D1_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_14 = ___2_collector;
		float L_15;
		L_15 = AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m3385C804EFD08AA22128C2FFC9230484406A9B69((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m616642FA6B864D442813B38B4AA57D004919B5D1_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m616642FA6B864D442813B38B4AA57D004919B5D1(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m78602B9573217054F1901220CF1D107B65A12A35_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_14 = ___2_collector;
		float L_15;
		L_15 = AnyHitCollector_1_get_MaxFraction_m312F1F45D6F5E1474DDECE105B330D59A969C00F_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m50926596D3E83E22D5D73850D2D1C18966EBC443((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m78602B9573217054F1901220CF1D107B65A12A35_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m78602B9573217054F1901220CF1D107B65A12A35(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m07546E3F58A18039670011EB1F949E4017CDE9CB_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_14 = ___2_collector;
		float L_15;
		L_15 = ClosestHitCollector_1_get_MaxFraction_m74F696DEECD884736C722CA88477ED3EB1B4C458_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mAFC50E29FA13A366A2B06FC38F095DFA936C294D((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m07546E3F58A18039670011EB1F949E4017CDE9CB_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m07546E3F58A18039670011EB1F949E4017CDE9CB(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m41E00FDD332BB97BA2E47C791FF2C6A1E66A7651_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_m0707877816F91AA555C7937A8DD3F673349EF4A5(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m07B61FED56941723478EF4A6E10FF2BDEFB1CEF7((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m41E00FDD332BB97BA2E47C791FF2C6A1E66A7651_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_m41E00FDD332BB97BA2E47C791FF2C6A1E66A7651(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB33280376B7036DF047A56D4FD4FEA4C4300C753_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_mCA3B257B4A79C064DA5DBFB005CCBC9426130F27(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m21643971768D831EC023377967A0DE9546DEA8E5((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB33280376B7036DF047A56D4FD4FEA4C4300C753_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB33280376B7036DF047A56D4FD4FEA4C4300C753(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mDAF9F2C023AB1B4E6AA09BDC3FBD931DA75CCF74_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_mA423EA61C4E124EBD592DE613AA024DDEFC9A21F(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_m716F6D179580501B4A2EA6C8718699E01394E3D4((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mDAF9F2C023AB1B4E6AA09BDC3FBD931DA75CCF74_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mDAF9F2C023AB1B4E6AA09BDC3FBD931DA75CCF74(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m4D0E30242E96E3064721C1418AD49FA1E3EF6BFC_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_m41B5DDBAD83DCDBC0B94DB994AB6B1F2978745BE(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_mB27406DF9976EF14B979EE8933222E6E5332D09B((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m4D0E30242E96E3064721C1418AD49FA1E3EF6BFC_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t67446B16B39D1013E7631C5450C66A0D086A0CEB_m4D0E30242E96E3064721C1418AD49FA1E3EF6BFC(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m722077529AA4930EDE0A4A0D7C4FF51E705A4723_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_mD2C2CD0DDD7C179004970511BF22707653481B73(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m96778E3D62817D25A7CFB28C82DCB462E88A8995((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m722077529AA4930EDE0A4A0D7C4FF51E705A4723_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t43441B273566FEDA583C4BB381F985550A478D5A_m722077529AA4930EDE0A4A0D7C4FF51E705A4723(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mD254966ABDC9806B972E2E92252F34F321F98889_gshared (ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		ConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB L_7;
		L_7 = Activator_CreateInstance_TisConvexConvexDispatcher_tF91614DEDB638F074FF49A500B6367E074ACCDEB_mA4CE6DBFC197D957DDEE46D23FF9E56245FBB18E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_m5C03826AB5F374E2DD6438BB837B2982E310D27F(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = ConvexConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_m9EE93D0D907CBDBA80529FEF7C6D4EBC94B64326((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mD254966ABDC9806B972E2E92252F34F321F98889_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_tCA944718FB16E376C4D0A2FDA84244B46CE92941*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tA8E7B5D0D4960D48FCCAB58A7F2FF43C5145A84F_mD254966ABDC9806B972E2E92252F34F321F98889(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mE09DD3E28362274C43B7C306CBE537B9C95E9110_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 L_7;
		L_7 = Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_14 = ___2_collector;
		float L_15;
		L_15 = AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = MeshConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m42F73B820B9DDB1004C112505F990F18E88C4B42((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mE09DD3E28362274C43B7C306CBE537B9C95E9110_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_mE09DD3E28362274C43B7C306CBE537B9C95E9110(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m42B105B728A796161A9362EE35B83B5E17A147B5_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 L_7;
		L_7 = Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_14 = ___2_collector;
		float L_15;
		L_15 = AnyHitCollector_1_get_MaxFraction_m312F1F45D6F5E1474DDECE105B330D59A969C00F_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = MeshConvexDispatcher_Dispatch_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m3D5CFA6829DB964BA7E05F79E08B2E66A94977E6((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m42B105B728A796161A9362EE35B83B5E17A147B5_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55_m42B105B728A796161A9362EE35B83B5E17A147B5(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mEB10675D3CC476FF728F2D5D72A7BD098FF48983_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 L_7;
		L_7 = Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_14 = ___2_collector;
		float L_15;
		L_15 = ClosestHitCollector_1_get_MaxFraction_m74F696DEECD884736C722CA88477ED3EB1B4C458_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = MeshConvexDispatcher_Dispatch_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_m68AC73CDC38F2CE8FFF45BA4D24CD8C6EBA04EE0((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mEB10675D3CC476FF728F2D5D72A7BD098FF48983_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E_mEB10675D3CC476FF728F2D5D72A7BD098FF48983(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE8662720670034F2B0BB1FE18039E3EE72CCB91B_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 L_7;
		L_7 = Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_m0707877816F91AA555C7937A8DD3F673349EF4A5(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE030B532A37189A2CED45530B06502C14D6EC614((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE8662720670034F2B0BB1FE18039E3EE72CCB91B_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tC0CEB973080759194CE80E076F52947739844DFA_mE8662720670034F2B0BB1FE18039E3EE72CCB91B(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m185130EF2DA9EE69102B7C1B4F8DB01EF18F9AA9_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 L_7;
		L_7 = Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_mCA3B257B4A79C064DA5DBFB005CCBC9426130F27(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_mB7BB806CDA5ADB6EC61C9147148DF7FA4F812C3E((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m185130EF2DA9EE69102B7C1B4F8DB01EF18F9AA9_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_t4142289EF7FF32CDB7129B31257DE5F195779EC2_m185130EF2DA9EE69102B7C1B4F8DB01EF18F9AA9(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mBD6E0216B836F8CD0EE60396E009E24154A0D35A_gshared (ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		MeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055 L_7;
		L_7 = Activator_CreateInstance_TisMeshConvexDispatcher_t1AF4625FF61C6E100D6D140A4117C5E12F6CA055_mB9F0BD0BF4A0EBBF1CDEB4099EF8324DEC5A5A07(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_14 = ___2_collector;
		float L_15;
		L_15 = FlippedColliderCastQueryCollector_1_get_MaxFraction_mA423EA61C4E124EBD592DE613AA024DDEFC9A21F(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = MeshConvexDispatcher_Dispatch_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mB6110E19E5ECF08BADFDCC2B9F0E7D70A7BB3902((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mBD6E0216B836F8CD0EE60396E009E24154A0D35A_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, FlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t9B0B73E21C2AEF2A420F354A05F132233FCAEBAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisFlippedColliderCastQueryCollector_1_tAD7BACA268F22C3ABF1B36112C440455465029CC_mBD6E0216B836F8CD0EE60396E009E24154A0D35A(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m7870968A8C68B45C0805C5351FA065E9A8D70C4F_gshared (ColliderMeshLeafProcessor_1_t5683950E667CEEF691EB994E9915CADB136C1EB8* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A* L_0 = __this->___m_Mesh;
		int32_t L_1 = ___1_primitiveKey;
		Mesh_GetPrimitive_mA49F6A0719969B8FFE3278E91DEFC4E8922800C9((Mesh_t131030D94CCE1FAE7FE6305073F38A0B7317354A*)L_0, L_1, (&V_0), (&V_1), (&V_2), (&V_3), NULL);
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_2 = ___0_input;
		Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31* L_3 = L_2.___Collider;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4;
		L_4 = Collider_GetCollisionFilter_mF4F38175402C1000CF383A52C0B55AEB245C491C((Collider_t3DBB6053C02D2235C9E62CCA5476D1823507BE31*)L_3, NULL);
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		TerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98 L_7;
		L_7 = Activator_CreateInstance_TisTerrainConvexDispatcher_tA853BDB58D016761406C29B27C39BC1E0BCD8B98_m5CE43CA3D8A48C7AB42A21BFFC1F11FF88F40844(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_4 = L_7;
		uint8_t L_8 = V_1;
		int32_t L_9;
		L_9 = Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline(L_8, NULL);
		V_5 = L_9;
		uint8_t L_10 = V_1;
		bool L_11;
		L_11 = Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline(L_10, (uint8_t)4, NULL);
		V_6 = L_11;
		V_7 = (bool)0;
		il2cpp_codegen_initobj((&V_8), sizeof(PolygonCollider_t8DF207E4C2CEF2C31A3AA25ECD0B26DA9C967EDF));
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = V_2;
		Material_t0D8A596ADD93AB3B53F232A1C23D55705ABCAA54 L_13 = V_3;
		PolygonCollider_InitNoVertices_mF3BF26F07F9CFBFA942C54CB6C31454F97F4ADC6((&V_8), L_12, L_13, NULL);
		V_9 = 0;
		goto IL_0108;
	}

IL_005d:
	{
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_14 = ___2_collector;
		float L_15;
		L_15 = AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_17;
		L_17 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_17);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19;
		L_19 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_21;
		L_21 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_21);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_23;
		L_23 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_24 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_23);
		PolygonCollider_SetAsQuad_m7CD741CD5F3F8DD5E7C960B1C2BC757D6C25BCD7((&V_8), L_18, L_20, L_22, L_24, NULL);
		goto IL_00df;
	}

IL_00ab:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_25;
		L_25 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), 0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_26 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_25);
		int32_t L_27 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_28;
		L_28 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(1, L_27)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_28);
		int32_t L_30 = V_9;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_31;
		L_31 = float3x4_get_Item_mD8AE830ACD22AA5F807D28B78456EC4F1AF4AF2E((&V_0), ((int32_t)il2cpp_codegen_add(2, L_30)), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_31);
		PolygonCollider_SetAsTriangle_m7A28A1DED6286212A88F64137D86B3A1B25FE895((&V_8), L_26, L_29, L_32, NULL);
	}

IL_00df:
	{
		bool L_33 = V_7;
		ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 L_34 = ___0_input;
		AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* L_35 = ___2_collector;
		uint32_t L_36 = __this->___m_NumColliderKeyBits;
		int32_t L_37 = ___1_primitiveKey;
		int32_t L_38 = V_9;
		bool L_39;
		L_39 = TerrainConvexDispatcher_Dispatch_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m1665EB4368BB2C58D1A3167FD4F4ECF0B4C775E3((&V_4), L_34, (ConvexCollider_tEEF96C9D581058A5B18D496273BC3E6E5AC87257*)((uintptr_t)(&V_8)), L_35, L_36, (uint32_t)((int32_t)(((int32_t)(L_37<<1))|L_38)), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_7 = (bool)((int32_t)((int32_t)L_33|(int32_t)L_39));
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0108:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_005d;
		}
	}
	{
		bool L_43 = V_7;
		return L_43;
	}
}
IL2CPP_EXTERN_C  bool ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m7870968A8C68B45C0805C5351FA065E9A8D70C4F_AdjustorThunk (RuntimeObject* __this, ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1 ___0_input, int32_t ___1_primitiveKey, AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* ___2_collector, const RuntimeMethod* method)
{
	ColliderMeshLeafProcessor_1_t5683950E667CEEF691EB994E9915CADB136C1EB8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColliderMeshLeafProcessor_1_t5683950E667CEEF691EB994E9915CADB136C1EB8*>(__this + _offset);
	bool _returnValue;
	_returnValue = ColliderMeshLeafProcessor_1_ColliderCastLeaf_TisAllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D_m7870968A8C68B45C0805C5351FA065E9A8D70C4F(_thisAdjusted, ___0_input, ___1_primitiveKey, ___2_collector, method);
	return _returnValue;
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CollisionFilter_IsCollisionEnabled_m4585B89AE47E95DAD6A7A1B241506239579F9D65_inline (CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___0_filterA, CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A ___1_filterB, const RuntimeMethod* method) 
{
	{
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_0 = ___0_filterA;
		int32_t L_1 = L_0.___GroupIndex;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_2 = ___0_filterA;
		int32_t L_3 = L_2.___GroupIndex;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_4 = ___1_filterB;
		int32_t L_5 = L_4.___GroupIndex;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_6 = ___0_filterA;
		int32_t L_7 = L_6.___GroupIndex;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_8 = ___0_filterA;
		int32_t L_9 = L_8.___GroupIndex;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_10 = ___1_filterB;
		int32_t L_11 = L_10.___GroupIndex;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0032:
	{
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_12 = ___0_filterA;
		uint32_t L_13 = L_12.___BelongsTo;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_14 = ___1_filterB;
		uint32_t L_15 = L_14.___CollidesWith;
		if (!((int32_t)((int32_t)L_13&(int32_t)L_15)))
		{
			goto IL_0052;
		}
	}
	{
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_16 = ___1_filterB;
		uint32_t L_17 = L_16.___BelongsTo;
		CollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A L_18 = ___0_filterA;
		uint32_t L_19 = L_18.___CollidesWith;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)L_19))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0052:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD math_inverse_mE8E0E402273F7ECC939F38F6EE83A568BF531CF8_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___0_t, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_0 = ___0_t;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1 = L_0.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2;
		L_2 = math_inverse_mAB8FC214DC9438E44EB31D19E3C70D3BDFAAF202_inline(L_1, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_3 = L_2;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_4 = ___0_t;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = L_4.___pos;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		L_6 = float3_op_UnaryNegation_m862876969881839716CBAF9AE074FA4BFDFABDF1_inline(L_5, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		L_7 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_3, L_6, NULL);
		V_0 = L_7;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = V_0;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_9;
		memset((&L_9), 0, sizeof(L_9));
		RigidTransform__ctor_m7665CC6FBD784FC7CB02E48B0A4B58008A4BC709_inline((&L_9), L_3, L_8, NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_transform_m5F6B69A9C0E6E1AF63D8112D8753394891972E44_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___0_a, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_pos, const RuntimeMethod* method) 
{
	{
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_0 = ___0_a;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1 = L_0.___rot;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_pos;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		L_3 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_1, L_2, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_4 = ___0_a;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = L_4.___pos;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		L_6 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E Ray_get_Displacement_mE515CB16752D2C03A8B5D118F7F6149E4E135B20_inline (Ray_t124E07778F6E7DD39B2622ED0CA11FCDAE655FA7* __this, const RuntimeMethod* method) 
{
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = __this->___m_Displacement;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_v, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___0_q)->___value);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float4_get_xyz_mE6EC829F35512C7BC159047FDC134E80F3B37A06_inline(L_0, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		L_3 = math_cross_m4CA2DAE150C6381B0D05E8AA9E48E88CF6157180_inline(L_1, L_2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4;
		L_4 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline((2.0f), L_3, NULL);
		V_0 = L_4;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___1_v;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_6 = ___0_q;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = L_6.___value;
		float L_8 = L_7.___w;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10;
		L_10 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline(L_8, L_9, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		L_11 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_5, L_10, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_12 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___0_q)->___value);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float4_get_xyz_mE6EC829F35512C7BC159047FDC134E80F3B37A06_inline(L_12, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_cross_m4CA2DAE150C6381B0D05E8AA9E48E88CF6157180_inline(L_13, L_14, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_16;
		L_16 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_11, L_15, NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ColliderCastInput_get_Orientation_m848F57ADC720A19B61C1D1F067D8FB7E74F066C1_inline (ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1* __this, const RuntimeMethod* method) 
{
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_0 = __this->___U3COrientationU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_a, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___1_b, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___0_a)->___value);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1;
		L_1 = float4_get_wwww_mF04E8B99431D2717DEE58BDAE207EF4C7E1A0009_inline(L_0, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2 = ___1_b;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = L_2.___value;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		L_4 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_1, L_3, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_5 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___0_a)->___value);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float4_get_xyzx_m5FFC709BBF25AC7B7755AE077E4288E47089C76C_inline(L_5, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_7 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___1_b)->___value);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = float4_get_wwwx_m698BBD6517D0DCF19C3529E0E686FF430642E480_inline(L_7, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_6, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_10 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___0_a)->___value);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = float4_get_yzxy_m78C60157637373AC6CB36343778B04CAA046ADDD_inline(L_10, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_12 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___1_b)->___value);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13;
		L_13 = float4_get_zxyy_m4B8D0449EEB8DD3CE5A79C96E911C70617339C4E_inline(L_12, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14;
		L_14 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_11, L_13, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		L_15 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_9, L_14, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((1.0f), (1.0f), (1.0f), (-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_15, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_4, L_17, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_19 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___0_a)->___value);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		L_20 = float4_get_zxyz_m91C90CDA336353253B33F0407198ACCC593EBB1B_inline(L_19, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_21 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&(&___1_b)->___value);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_22;
		L_22 = float4_get_yzxz_mE81FC33B6A0D370B2C8DB339CC5501533BB31223_inline(L_21, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_23;
		L_23 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_20, L_22, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_24;
		L_24 = float4_op_Subtraction_mBC40F52B8A8EF499A1AA3CC987E5935BD188B4E3_inline(L_18, L_23, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_25;
		L_25 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_24, NULL);
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderCastInput_set_Orientation_m7601B54C7D1337C21ADAB8F6BAA00C5BFDD12EED_inline (ColliderCastInput_t729D5FBF516A9D44DEDA93EDA2821DC342878BE1* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_value, const RuntimeMethod* method) 
{
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_0 = ___0_value;
		__this->___U3COrientationU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD math_mul_mCF53818BECBD724968488294202D4720BC5D5C1A_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___0_a, RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___1_b, const RuntimeMethod* method) 
{
	{
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_0 = ___0_a;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1 = L_0.___rot;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_2 = ___1_b;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_3 = L_2.___rot;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_4;
		L_4 = math_mul_m3CC0941E6A3DE5718C6439421E74D7F80793F652_inline(L_1, L_3, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_5 = ___0_a;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_6 = L_5.___rot;
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_7 = ___1_b;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = L_7.___pos;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		L_9 = math_mul_mE9E04B2868E4D4BA5BD873E4F876D550D36C2E99_inline(L_6, L_8, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_10 = ___0_a;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11 = L_10.___pos;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		L_12 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_9, L_11, NULL);
		RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD L_13;
		memset((&L_13), 0, sizeof(L_13));
		RigidTransform__ctor_m7665CC6FBD784FC7CB02E48B0A4B58008A4BC709_inline((&L_13), L_4, L_12, NULL);
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mesh_GetNumPolygonsInPrimitive_m29E33857D57F212BE39C2000D2DB98951C7C4BF0_inline (uint8_t ___0_primitiveFlags, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_primitiveFlags;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		return 2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mesh_IsPrimitiveFlagSet_m4737B3F263C0AF62A568F7949FFC898FB89F999E_inline (uint8_t ___0_flags, uint8_t ___1_testFlag, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_flags;
		uint8_t L_1 = ___1_testFlag;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m5FBA428D6411B6273D155D5A5EE833A1A338FE8A_gshared_inline (AsyncValueTaskMethodBuilder_1_tD68A252326C589C51A86169E4223726A92E15727* __this, U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* ___0_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*)(&__this->____methodBuilder);
		U3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsyncU3Eg__FinishReadAsyncU7C44_0U3Ed_t6EAE62DEFFC0B9A1B4DC252F9C2C86F5E7BCF2D9_m90C20E776AC4CBDAF12EE5953B4FC0F196E12DE5(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m85A9FFB7131400A58050438B2B0A7CD7F043738A_gshared_inline (AsyncValueTaskMethodBuilder_1_t98ECB0BE10685599154A63759D7078C9404EA6D9* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_stateMachine;
		((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AllHitsCollector_1_get_MaxFraction_m343538ED30A318EE94E747369274189282A69861_gshared_inline (AllHitsCollector_1_t72E4DE6877C1414C13B8416386C63D186D23C88D* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CMaxFractionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AnyHitCollector_1_get_MaxFraction_m312F1F45D6F5E1474DDECE105B330D59A969C00F_gshared_inline (AnyHitCollector_1_t92E33416F9116436187D99550BA71F124C79FE55* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CMaxFractionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ClosestHitCollector_1_get_MaxFraction_m74F696DEECD884736C722CA88477ED3EB1B4C458_gshared_inline (ClosestHitCollector_1_tB397ADEE6F47693016E539BAFB01B9AC79B2EB3E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CMaxFractionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_inverse_mAB8FC214DC9438E44EB31D19E3C70D3BDFAAF202_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_0 = ___0_q;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = L_0.___value;
		V_0 = L_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = V_0;
		float L_4;
		L_4 = math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = math_rcp_mED2BCEE83560EEE59CE06EBD90332CAFA9C08024_inline(L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline(L_5, L_6, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((-1.0f), (-1.0f), (-1.0f), (1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_7, L_8, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_10;
		L_10 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_9, NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_UnaryNegation_m862876969881839716CBAF9AE074FA4BFDFABDF1_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_val, const RuntimeMethod* method) 
{
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_val;
		float L_1 = L_0.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___0_val;
		float L_3 = L_2.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_val;
		float L_5 = L_4.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		memset((&L_6), 0, sizeof(L_6));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RigidTransform__ctor_m7665CC6FBD784FC7CB02E48B0A4B58008A4BC709_inline (RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_rotation, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_translation, const RuntimeMethod* method) 
{
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_0 = ___0_rotation;
		__this->___rot = L_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_translation;
		__this->___pos = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float4_get_xyz_mE6EC829F35512C7BC159047FDC134E80F3B37A06_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		float L_1 = __this->___y;
		float L_2 = __this->___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_cross_m4CA2DAE150C6381B0D05E8AA9E48E88CF6157180_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline((&___1_y), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline(L_0, L_1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		L_3 = float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline((&___0_x), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___1_y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline(L_3, L_4, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		L_6 = float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline(L_2, L_5, NULL);
		V_0 = L_6;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		L_7 = float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline((&V_0), NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_rhs;
		float L_2 = L_1.___x;
		float L_3 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___1_rhs;
		float L_5 = L_4.___y;
		float L_6 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___1_rhs;
		float L_8 = L_7.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_wwww_mF04E8B99431D2717DEE58BDAE207EF4C7E1A0009_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___w;
		float L_1 = __this->___w;
		float L_2 = __this->___w;
		float L_3 = __this->___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_lhs;
		float L_13 = L_12.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_rhs;
		float L_15 = L_14.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_xyzx_m5FFC709BBF25AC7B7755AE077E4288E47089C76C_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		float L_1 = __this->___y;
		float L_2 = __this->___z;
		float L_3 = __this->___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_wwwx_m698BBD6517D0DCF19C3529E0E686FF430642E480_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___w;
		float L_1 = __this->___w;
		float L_2 = __this->___w;
		float L_3 = __this->___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_yzxy_m78C60157637373AC6CB36343778B04CAA046ADDD_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___y;
		float L_1 = __this->___z;
		float L_2 = __this->___x;
		float L_3 = __this->___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_zxyy_m4B8D0449EEB8DD3CE5A79C96E911C70617339C4E_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___z;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_lhs;
		float L_13 = L_12.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_rhs;
		float L_15 = L_14.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline (float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		float L_3 = ___3_w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_zxyz_m91C90CDA336353253B33F0407198ACCC593EBB1B_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___z;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_get_yzxz_mE81FC33B6A0D370B2C8DB339CC5501533BB31223_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___y;
		float L_1 = __this->___z;
		float L_2 = __this->___x;
		float L_3 = __this->___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Subtraction_mBC40F52B8A8EF499A1AA3CC987E5935BD188B4E3_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_lhs;
		float L_13 = L_12.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_rhs;
		float L_15 = L_14.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_value;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_x;
		float L_1 = L_0.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_y;
		float L_3 = L_2.___x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_x;
		float L_5 = L_4.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_y;
		float L_7 = L_6.___y;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_x;
		float L_9 = L_8.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_y;
		float L_11 = L_10.___z;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_x;
		float L_13 = L_12.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_y;
		float L_15 = L_14.___w;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rcp_mED2BCEE83560EEE59CE06EBD90332CAFA9C08024_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		return ((float)((1.0f)/L_0));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline (float ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___1_rhs;
		float L_2 = L_1.___x;
		float L_3 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___1_rhs;
		float L_5 = L_4.___y;
		float L_6 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___1_rhs;
		float L_8 = L_7.___z;
		float L_9 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_9, L_11)), NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___y;
		float L_1 = __this->___z;
		float L_2 = __this->___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_value;
		__this->___value = L_0;
		return;
	}
}
