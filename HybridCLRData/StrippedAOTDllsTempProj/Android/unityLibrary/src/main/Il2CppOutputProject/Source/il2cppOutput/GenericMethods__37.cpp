#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct ES3MemberU5BU5D_t52275A3F6518B027F017DA4D34656490EBA17423;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A;
struct ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB;
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687;
struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10;
struct ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D;
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14;
IL2CPP_EXTERN_C String_t* _stringLiteral27906925D50A15B990B586241F08C8ED14226340;
IL2CPP_EXTERN_C String_t* _stringLiteral36587A0761A180514C267B50EA888F89871F71DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F;
IL2CPP_EXTERN_C String_t* _stringLiteral778102C3E486149200F26500543D0E817D018B30;
IL2CPP_EXTERN_C String_t* _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186;
IL2CPP_EXTERN_C String_t* _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A11128F810D574390DA344F324014E964D1876;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A  : public RuntimeObject
{
	ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB* ___settings;
	int32_t ___serializationDepth;
	String_t* ___overridePropertiesName;
};
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687  : public RuntimeObject
{
	ES3MemberU5BU5D_t52275A3F6518B027F017DA4D34656490EBA17423* ___members;
	Type_t* ___type;
	bool ___isPrimitive;
	bool ___isValueType;
	bool ___isCollection;
	bool ___isDictionary;
	bool ___isTuple;
	bool ___isEnum;
	bool ___isES3TypeUnityObject;
	bool ___isReflectedType;
	bool ___isUnsupported;
	int32_t ___priority;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	int32_t ___m_Mode;
	float ___m_CurveMultiplier;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax;
	float ___m_ConstantMin;
	float ___m_ConstantMax;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	int32_t ___m_Mode;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33 (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D (MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF7ED54CEFA2A5AC2123A6B6D9880516766FE6499_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEDF55234DFABD01856D021651507102AD41B2B6E_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF02EA5A6E2AD0826C6482AF8CB6E7E3C79EB54BD_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m1242DE1EE1F42A9D5C5F79EAE1B3240125F66927_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m78004D02F5488F1CD2164677B63289339F319906_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRuntimeObject_m46B6989FC6621110DCDBA050817547E54C09939B_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mDFE9E7DFFB5E178CBE2F4D2A0BB7F35AB1EB9308_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m11764222B6AC4F6C4D9BC36A4119DDA0F0633391_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mEEC04D9F0141260BE537DBC08D4781CDD36AD5C8_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m380F23126416F47365B888DC935CAD6216CA921D_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2B2E0A574CEEF94CD2337A48747CB39A6E9CC7D6_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA278022815BF7F7F36EBC6EB1DE1592B01AFD3A2_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCE804FF79641F019E24792B32246A214A01370C6_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisIl2CppFullySharedGenericAny_m069DBC9BB12F945169BC3D26F01A068E9232A3C1_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mAFF939467399CB4E388B6FF00596D6616D28B816_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m3DA6601784457F9F1A89A894B2F401DE20DE0419_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		goto IL_01d3;
	}

IL_0141:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		goto IL_01d3;
	}

IL_0155:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		goto IL_01d3;
	}

IL_0169:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		goto IL_01d3;
	}

IL_017d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		goto IL_01d3;
	}

IL_0191:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		goto IL_01d3;
	}

IL_01a5:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		goto IL_01d3;
	}

IL_01b9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		goto IL_01d3;
	}

IL_01cd:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___0_reader;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41, L_52);
	}

IL_01d3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRuntimeObject_m35C9F2F4F5282F7FB403A537423EA46E63369942_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisIl2CppFullySharedGenericAny_m70E73877C8C025DC4375ED304A0DD397A92E7D1F_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m5C8DA3EF8C7B057DDC4FF9FF165E64B28DB121E0_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mAB4DE76920FCE7E048D000255D6132E18013B7F9_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mA3D5BF0F8B3CB6A1711645A1E41935175FD75261_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mD68BEE089BA7A4001F0DA767E0214A5607A640EA_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mA6C568DB0D69DDF4AFADE2FCBF0F193B40E25E34_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m23A3FA272F965C0E28A8FF32217133231E558B3A_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mCCAE96FE6ED7CC5077A53317B9D5DC59CA3DC91D_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mAAFA0A99DCD9B5D96094659BE0B98CE4DEEEE5F5_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m920B370628B70048FC76C29F299F8CAF16FC614A_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m987EE6A3B2A902D7870973CFEF4C7AC4E3CA8310_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m0AB230B93889F153DD93131990C6D946E2A33DC8_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m488CD2A42D1F379CE5F0E502C8727A9CD3A55835_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m4F930F1936103B64F0E20D432BCB049293802A7D_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_mCC97D741BF2517C0236C5BC768C9FB0F61CAB7B1_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m5A0F2EB1BDC806C8E71497266894CC089C9A68E6_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m8ECC0B662BEBE01AB49AA51B4BF609D5595048AD_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m969ABF9D735F8CA566CDDBE77FC017D23218FB92_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mB525640C2E414060BF7AEFAD2F6A68FE6A000333_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mCE88B7AD508A9498FB2D53F3DB6D5227FF6F21ED_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mE514702002F64A024A2152B5071763624859270D_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m5B89B289BE7141F8A47D70194D76FA0357950731_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		goto IL_01d2;
	}

IL_0140:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		goto IL_01d2;
	}

IL_0154:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		goto IL_01d2;
	}

IL_0168:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		goto IL_01d2;
	}

IL_017c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		goto IL_01d2;
	}

IL_0190:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		goto IL_01d2;
	}

IL_01a4:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		goto IL_01d2;
	}

IL_01b8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		goto IL_01d2;
	}

IL_01cc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41, L_53);
	}

IL_01d2:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCF37270169D031F82FD6AAB1147F44C11B669D62_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mDA289ED0C50EE1734528669F30636BE5827D47ED_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1DB8C33D3926B7E0BA1764839C8B417BEF8F02DB_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4383B9765FEE2F473312ACC008854F3CE77B3E49_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC56664CD3C84BA865F4CF6916A629685920EA6E8_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2DFBC6955C6ADA9EF90699A3A9CBA8F1FA47FED9_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m15A452AA4FB18518F1BBFEADA1BA7D1AAEAA3A81_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDE144EA123AA81012B8726F6D5A1D0923312940D_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mE54709FF30BD412589C7BED6D1E46AD657EF6F7E_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m38E4CAD4EDF927C4596D01C7B1A01B16844E57EB_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRuntimeObject_m81EB9E76C54A4DD7957B21DFC454B150BBC24474_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m57A544DC5B4451A45BD051278952E87BE065D539_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mF07051E245A298BE594F1CAB9D7191DFD80E790B_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m38A2F8E290C85C43B8E412803877E11C4BE54B90_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m81EA9BE353FCB9DF4384FE30430E2F257900D165_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF66DB8F0B8CCFE0DDC97EBEB351E78A41541BF94_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBCE1D1346B155C4B19D664FF23868E124F92BBEA_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m377591E1A5DC856ECE1D3B248D4E0A3076E3C6E2_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxGradient_Read_TisIl2CppFullySharedGenericAny_m59829EADAA4A21E8164349659EDFC65D780B0087_gshared (ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral778102C3E486149200F26500543D0E817D018B30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901354A635771DDD959835AF907BCC0E66B8C186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69));
		goto IL_017a;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1650383577)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1031692888))))
		{
			goto IL_00c9;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1414216983))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1650383577))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_0174;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-630909162)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1661947227))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-630909162))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0174;
	}

IL_005c:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-330191948))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_12)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0174;
	}

IL_0081:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral3C5CBA73DE477A987F6CACAA771042311F4D7450, NULL);
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_0174;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral901354A635771DDD959835AF907BCC0E66B8C186, NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0174;
	}

IL_00a5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral99B5B7F51660385511EC8AC7334ABBB898CFC2BF, NULL);
		if (L_18)
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0174;
	}

IL_00b7:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852E085EDE387EE50CF0089DAF2F7960EF50B09A, NULL);
		if (L_20)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_0174;
	}

IL_00c9:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_22)
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0174;
	}

IL_00db:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral778102C3E486149200F26500543D0E817D018B30, NULL);
		if (L_24)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0174;
	}

IL_00ed:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___0_reader;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemGradientMode_t5525A27D816AC28297038E5A98856B29095C4C1A_m84593DCC9B44CB5D9D7D36EE7414BB0C46CA694C_RuntimeMethod_var, L_25);
		MinMaxGradient_set_mode_mCD15C79CD57AD7D400D7B171E10BC5E24F64295E((&V_0), L_26, NULL);
		goto IL_017a;
	}

IL_00fc:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_28 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_27);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_29;
		L_29 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_27, L_28);
		MinMaxGradient_set_gradientMax_mC432C0AEA15FE74D6E6E6E2058BE039361D57ABB((&V_0), L_29, NULL);
		goto IL_017a;
	}

IL_0110:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_30);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_32;
		L_32 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_30, L_31);
		MinMaxGradient_set_gradientMin_m4152642243D268E1A95A7FC0B58E8F179A933609((&V_0), L_32, NULL);
		goto IL_017a;
	}

IL_0124:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_33, L_34);
		MinMaxGradient_set_colorMax_m28A85822E89FC80D1F5B49225DEC4ABCF86CAE33((&V_0), L_35, NULL);
		goto IL_017a;
	}

IL_0138:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_36, L_37);
		MinMaxGradient_set_colorMin_m7D3D987AB86FE01E7BC4AD856AAEE703F18EF1EF((&V_0), L_38, NULL);
		goto IL_017a;
	}

IL_014c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_39, L_40);
		MinMaxGradient_set_color_m0890DD6E249DE8552C04AFC4F959DD37EA05033B((&V_0), L_41, NULL);
		goto IL_017a;
	}

IL_0160:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Gradient_t8143AA575CC1AFE7C43BC210EBA10E4962BDB5A5_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_44;
		L_44 = GenericVirtualFuncInvoker1< Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_m7E3EE294960FE5D73D22B64545F50C254762275F_RuntimeMethod_var, L_42, L_43);
		MinMaxGradient_set_gradient_m6AAD335DD1A2BD5C091B608C604825C32CFB825D((&V_0), L_44, NULL);
		goto IL_017a;
	}

IL_0174:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		NullCheck(L_45);
		VirtualActionInvoker0::Invoke(41, L_45);
	}

IL_017a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___0_reader;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_46);
		String_t* L_48 = L_47;
		V_1 = L_48;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_49 = V_0;
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_50 = L_49;
		RuntimeObject* L_51 = Box(MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_il2cpp_TypeInfo_var, &L_50);
		return L_51;
	}
}
