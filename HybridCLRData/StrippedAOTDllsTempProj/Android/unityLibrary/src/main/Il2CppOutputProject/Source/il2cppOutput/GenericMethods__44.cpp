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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

struct ES3MemberU5BU5D_t52275A3F6518B027F017DA4D34656490EBA17423;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A;
struct ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB;
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687;
struct ES3Type_TextureSheetAnimationModule_t8210ECE298C00ED41F8EF2ED9A6DFC697221E8F5;
struct ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D;
struct ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7;
struct ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196;
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00;
IL2CPP_EXTERN_C String_t* _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA;
IL2CPP_EXTERN_C String_t* _stringLiteral354281948B6269615E32D856CF85B6F456724DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B;
IL2CPP_EXTERN_C String_t* _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3;
IL2CPP_EXTERN_C String_t* _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01;
IL2CPP_EXTERN_C String_t* _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119;
IL2CPP_EXTERN_C String_t* _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
IL2CPP_EXTERN_C String_t* _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578;
IL2CPP_EXTERN_C String_t* _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F;
IL2CPP_EXTERN_C String_t* _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866;
IL2CPP_EXTERN_C String_t* _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F632BD073069C926450B792B45EAAB22036D149;
IL2CPP_EXTERN_C String_t* _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A;
IL2CPP_EXTERN_C String_t* _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120;
IL2CPP_EXTERN_C String_t* _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1439A3AE532D1310341C818741450454C83AA36;
IL2CPP_EXTERN_C String_t* _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450;
IL2CPP_EXTERN_C String_t* _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182;
IL2CPP_EXTERN_C String_t* _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0;
IL2CPP_EXTERN_C String_t* _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25;
IL2CPP_EXTERN_C String_t* _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E;
IL2CPP_EXTERN_C String_t* _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCD8E0AB3C28A09837379EB114B5E5D46C8D466FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0916A42627806397C11F1E4861CC157A44CA6859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF20D49402375DBE833A77E640763B67EC555E7C3_RuntimeMethod_var;


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
struct ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37  : public RuntimeObject
{
	ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader;
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
struct ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_TextureSheetAnimationModule_t8210ECE298C00ED41F8EF2ED9A6DFC697221E8F5  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	int32_t ___m_Mode;
	float ___m_CurveMultiplier;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax;
	float ___m_ConstantMin;
	float ___m_ConstantMax;
};
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE  : public ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9
{
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	int32_t ___m_Mode;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
};
struct ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
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
struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_TextureSheetAnimationModule_t8210ECE298C00ED41F8EF2ED9A6DFC697221E8F5_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields
{
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_StaticFields
{
	int32_t ___countRead;
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478 (ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m1CCB4CAC0C2065B953A253BC052657F016B54227_gshared (ES3Type_TextureSheetAnimationModule_t8210ECE298C00ED41F8EF2ED9A6DFC697221E8F5* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		goto IL_02a9;
	}

IL_01ca:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		goto IL_02a9;
	}

IL_01e1:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		goto IL_02a9;
	}

IL_01f8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___0_reader;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		goto IL_02a9;
	}

IL_020a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		goto IL_02a9;
	}

IL_021c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_56 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		goto IL_02a9;
	}

IL_0230:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_58 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_59 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		goto IL_02a9;
	}

IL_0244:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_62 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		goto IL_02a9;
	}

IL_0258:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_65 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		goto IL_02a9;
	}

IL_026c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_67 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_68 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		goto IL_02a9;
	}

IL_0280:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		goto IL_02a9;
	}

IL_0294:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___0_reader;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		goto IL_02a9;
	}

IL_02a3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___0_reader;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41, L_75);
	}

IL_02a9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_76 = ___0_reader;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mCE6808B4644B039B4A4880F72061E6B99A38AC2F_gshared (ES3Type_TextureSheetAnimationModule_t8210ECE298C00ED41F8EF2ED9A6DFC697221E8F5* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		goto IL_02a9;
	}

IL_01ca:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		goto IL_02a9;
	}

IL_01e1:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		goto IL_02a9;
	}

IL_01f8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___0_reader;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		goto IL_02a9;
	}

IL_020a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		goto IL_02a9;
	}

IL_021c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_56 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		goto IL_02a9;
	}

IL_0230:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_58 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_59 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		goto IL_02a9;
	}

IL_0244:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_62 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		goto IL_02a9;
	}

IL_0258:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_65 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		goto IL_02a9;
	}

IL_026c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_67 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_68 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		goto IL_02a9;
	}

IL_0280:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		goto IL_02a9;
	}

IL_0294:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___0_reader;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		goto IL_02a9;
	}

IL_02a3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___0_reader;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41, L_75);
	}

IL_02a9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_76 = ___0_reader;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m447FB862E514FEA19B3FD039B37427E82645D35F_gshared (ES3Type_TextureSheetAnimationModule_t8210ECE298C00ED41F8EF2ED9A6DFC697221E8F5* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		goto IL_02a9;
	}

IL_01ca:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		goto IL_02a9;
	}

IL_01e1:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		goto IL_02a9;
	}

IL_01f8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___0_reader;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		goto IL_02a9;
	}

IL_020a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		goto IL_02a9;
	}

IL_021c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_56 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		goto IL_02a9;
	}

IL_0230:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_58 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_59 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		goto IL_02a9;
	}

IL_0244:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_62 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		goto IL_02a9;
	}

IL_0258:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_65 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		goto IL_02a9;
	}

IL_026c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_67 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_68 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		goto IL_02a9;
	}

IL_0280:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		goto IL_02a9;
	}

IL_0294:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___0_reader;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		goto IL_02a9;
	}

IL_02a3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___0_reader;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41, L_75);
	}

IL_02a9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_76 = ___0_reader;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m2EE4CE58B7B1605B3BA5350DC7416FEDD6227B36_gshared (ES3Type_TextureSheetAnimationModule_t8210ECE298C00ED41F8EF2ED9A6DFC697221E8F5* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		goto IL_02a9;
	}

IL_01ca:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		goto IL_02a9;
	}

IL_01e1:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		goto IL_02a9;
	}

IL_01f8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___0_reader;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m25DEACABDC8257F8BB76D01876B611548F8EA367_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		goto IL_02a9;
	}

IL_020a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___0_reader;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m84A2B95A18A5564081DFEF6D1AE18F3811987CBD_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		goto IL_02a9;
	}

IL_021c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_56 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		goto IL_02a9;
	}

IL_0230:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_58 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_59 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		goto IL_02a9;
	}

IL_0244:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_62 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		goto IL_02a9;
	}

IL_0258:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_65 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		goto IL_02a9;
	}

IL_026c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_67 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_68 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		goto IL_02a9;
	}

IL_0280:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		goto IL_02a9;
	}

IL_0294:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___0_reader;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m811ABB4CEA010F0C176D2ED3FB7BA55204D8F2E6_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		goto IL_02a9;
	}

IL_02a3:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___0_reader;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41, L_75);
	}

IL_02a9:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_76 = ___0_reader;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB90D278E99B064EE5D5942ACD2216946167C4174_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mDEC3DC621DFFA7791E5AF1058F471C29B3E5D4F4_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m862E8F9B9C7F1194217F7AF1ED8E7B2F589AD5F3_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mD06F9165B430ED7A7CB06B3195DE08766F560AE9_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m734079CD926369C8853E42C998DAD61819E2A4D0_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m322DD5BCC858977E0EC12CF8B4D22AD143D7BA3B_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7013F2E36A46B96A2A80329489993E7090EF8459_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m29D5C94460AC780C0656F460BF2D13994F7C66EB_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mC09CB11EFD066B887116F19A033C00B503B3B153_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m213EDCF14CF7C5FE9FD3FC1F0974371E60E6F073_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRuntimeObject_m2DFD739668D234C511603222B05B32B021D4CBBC_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mF5571182C545DB33D6A330C7700EF0F891607DE7_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m19BBE30CA25F3BD1DD010A42A699097E0277E61D_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m2C5FF6AD9D5F03DCD3914CB7B6490B1FA8DD9E82_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0E521D4EA79623AA271BA69AD4FF4683B4BFAD36_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB5341DCC79F2851CD75E355106A8189EE10EE788_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC9182C1AF915A0974121F39E446A80F9141193B4_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mFE1EE74B719820A124764C71BC95372096874F5B_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisIl2CppFullySharedGenericAny_m1D10BFB004E4DC3824B06BEE0EFF9D77D6975730_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mA35AFBCC17C2420E1E6BF92CA49C5CA5F8592F33_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mD018A2122126749D4D444BFE6BE672DBACD760B5_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRuntimeObject_m918128A7B9E2E62798EEE391EA48AB6A11DA57A4_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisIl2CppFullySharedGenericAny_mDFB7F4EDFC04A3B8BD608709407E1C2CB498FB66_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m69213558E233CF0EC6ED186F56CD3D7F3A0B3DB0_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m9EDEC10DC69817559CB563C3255383CBAF80AC79_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m0C2F01AB965CDC8AB7A01D3D464DB172AE612C0A_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m9F4637A1B2930F1971332240EE7B442FCB2A025A_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m65F0C0D342839155399CFD4650BF071DCA464A93_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m00077A8AB0BE37863A5795FF7EFCF3F1F2E7129C_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mB856A933C1E17EA6AFBDABF3EEF2DF463F4B2273_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m7C41FA8F2DCA559458F56829D2070EC350792D37_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m0E7F4796DB4FD2471393EF68FE78A4811AFF2C98_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m81AD448147BAE22493317B400ED1DB7A02B3CD00_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m987288762C790259A782BAE84CEDA3BF24E6D291_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mD3ED9179EDB16E4CDF7180B75AF8CA1430DC82D4_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mF9D4AA459A51BC43E2A657AF531C2B01452E60C8_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m1EEDFA12C053F56A7850FEB29DEDB9902052354C_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m67F980274C4F8AD0334FF1652F8044DDBB2BA7B0_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m6B73A1A3364F3153769DEE70C6493832D974DFD1_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m237918CD45491B5A8E3B00D761CD7CB593F31B61_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m2EFE5587B9EF72C48A1483D3F8D4ED657169EFC2_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mFFC5260941E5E5E04094E8F021E4257D26241FC3_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mB5679F1945E48C18628A6B3B56A4FC8E60EEDBE5_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m7C7BC21CE3C3E5775A0A246CB6B9D5C2D639C9F9_gshared (ES3Type_TrailModule_tA3AB95A0CCC3FA4E7A00F3CE486E47B442F8356D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		goto IL_0388;
	}

IL_025a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		goto IL_0388;
	}

IL_0271:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		goto IL_0388;
	}

IL_0288:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		goto IL_0388;
	}

IL_029f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		goto IL_0388;
	}

IL_02b6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mDDFB121EE792842044187B2E27C72DD7A73DC1E5_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		goto IL_0388;
	}

IL_02c8:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		goto IL_0388;
	}

IL_02df:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		goto IL_0388;
	}

IL_02f6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_78 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		goto IL_0388;
	}

IL_030a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		goto IL_0388;
	}

IL_031e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		goto IL_0388;
	}

IL_0332:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		goto IL_0388;
	}

IL_0346:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		goto IL_0388;
	}

IL_035a:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		goto IL_0388;
	}

IL_036e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		goto IL_0388;
	}

IL_0382:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___0_reader;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41, L_98);
	}

IL_0388:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___0_reader;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Transform_ReadComponent_TisIl2CppFullySharedGenericAny_m75781AC9E8C569D3B8220CF3FA38CC0E8044805F_gshared (ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCD8E0AB3C28A09837379EB114B5E5D46C8D466FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0916A42627806397C11F1E4861CC157A44CA6859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF20D49402375DBE833A77E640763B67EC555E7C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F632BD073069C926450B792B45EAAB22036D149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c0:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_00d0;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00d0:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00b3_1;
			}

IL_0018_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756, NULL);
				if (L_10)
				{
					goto IL_0067_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD, NULL);
				if (L_12)
				{
					goto IL_0075_1;
				}
			}
			{
				String_t* L_13 = V_2;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120, NULL);
				if (L_14)
				{
					goto IL_0083_1;
				}
			}
			{
				String_t* L_15 = V_2;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01, NULL);
				if (L_16)
				{
					goto IL_0091_1;
				}
			}
			{
				String_t* L_17 = V_2;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral8F632BD073069C926450B792B45EAAB22036D149, NULL);
				if (L_18)
				{
					goto IL_009f_1;
				}
			}
			{
				goto IL_00ad_1;
			}

IL_0067_1:
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_20 = ___0_reader;
				NullCheck(L_20);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
				L_21 = GenericVirtualFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0916A42627806397C11F1E4861CC157A44CA6859_RuntimeMethod_var, L_20);
				NullCheck(L_19);
				Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_19, L_21, NULL);
				goto IL_00b3_1;
			}

IL_0075_1:
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_23 = ___0_reader;
				NullCheck(L_23);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = GenericVirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF20D49402375DBE833A77E640763B67EC555E7C3_RuntimeMethod_var, L_23);
				NullCheck(L_22);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_24, NULL);
				goto IL_00b3_1;
			}

IL_0083_1:
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_26 = ___0_reader;
				NullCheck(L_26);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
				L_27 = GenericVirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCD8E0AB3C28A09837379EB114B5E5D46C8D466FD_RuntimeMethod_var, L_26);
				NullCheck(L_25);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_25, L_27, NULL);
				goto IL_00b3_1;
			}

IL_0091_1:
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___0_reader;
				NullCheck(L_29);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = GenericVirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF20D49402375DBE833A77E640763B67EC555E7C3_RuntimeMethod_var, L_29);
				NullCheck(L_28);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_30, NULL);
				goto IL_00b3_1;
			}

IL_009f_1:
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___0_reader;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_32);
				NullCheck(L_31);
				Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_31, L_33, NULL);
				goto IL_00b3_1;
			}

IL_00ad_1:
			{
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___0_reader;
				NullCheck(L_34);
				VirtualActionInvoker0::Invoke(41, L_34);
			}

IL_00b3_1:
			{
				RuntimeObject* L_35 = V_1;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_00d1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2FD112501CC1CDE14C4977F4514A444470B5CE60_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m558A602D5C137BA1B8D96B9808F7B1E4AD2FBB3F_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m30CD3CFFA093B78D5AEA752BA94E908BD6CF3FB7_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m46B84CCCEBE436F38B47F7443646C7B8F3845105_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2B557F1333D8510C98B8DADFD6A2E35398236AB0_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8B7FA07A9B26FD69E96D8932DE4E2F70AB42B067_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA9891786212311FB3C47D8957D8D36BAC2DF69BD_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4BBAACAC1A5E294B5D21D046CED91C309320B93E_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m010062D21510CEA88C0F7877621EE13524EEA2CB_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mB24FC0C00E5E26C26F6B789D0BC571C6328BE34E_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRuntimeObject_m9007FF272BD32F9607D7BB716F53D6D4AB3C995D_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mB0503D8DC5637820A5CAB3A25DD89B149ABF2979_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mAFDD67B609A9F05886E198C6C0A77E1ED4EC98F3_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE5F6D07730483C4FD1F44D411053AD3B925D51A9_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF69269259CFBE7ECB19250D0E258F9089181BEB6_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5260FC43A862D94C47D44767A22F773598B93338_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA56501F4C35E77F0D82E576DAF572453D0AA04B1_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA883FFAE9A631241A8FCDE1E9419AC7588311A40_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisIl2CppFullySharedGenericAny_m26A3759AC83684AC4A2D240F66141F6DDF66492D_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m019B860F74BB0C3FFA4710907767E361B902DC7C_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mAACE06EEF78CF97E4B765EC4C7C4351F48041C4C_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___0_reader;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisRuntimeObject_m74D7B618AECFAEA137196359FA74306AEC751F3A_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00c6;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_8)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_10)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_12)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_00c0;
	}

IL_005c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_13 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_14 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_13);
		bool L_15;
		L_15 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_13, L_14);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_15, NULL);
		goto IL_00c6;
	}

IL_0070:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_16 = ___0_reader;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_16);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_17, NULL);
		goto IL_00c6;
	}

IL_007f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_18 = ___0_reader;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_18);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_19, NULL);
		goto IL_00c6;
	}

IL_008e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_20 = ___0_reader;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_20);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_21, NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_22 = ___0_reader;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_22);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_23, NULL);
		goto IL_00c6;
	}

IL_00ac:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_24 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_25 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_24);
		float L_26;
		L_26 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_24, L_25);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_26, NULL);
		goto IL_00c6;
	}

IL_00c0:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(41, L_27);
	}

IL_00c6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___0_reader;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_28);
		String_t* L_30 = L_29;
		V_1 = L_30;
		if (L_30)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisIl2CppFullySharedGenericAny_mDE7232A6DAE3CABCB6C06EB4297BCD654437AD6C_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00c6;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_8)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_10)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_12)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_00c0;
	}

IL_005c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_13 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_14 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_13);
		bool L_15;
		L_15 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_13, L_14);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_15, NULL);
		goto IL_00c6;
	}

IL_0070:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_16 = ___0_reader;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_16);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_17, NULL);
		goto IL_00c6;
	}

IL_007f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_18 = ___0_reader;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_18);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_19, NULL);
		goto IL_00c6;
	}

IL_008e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_20 = ___0_reader;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_20);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_21, NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_22 = ___0_reader;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_22);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_23, NULL);
		goto IL_00c6;
	}

IL_00ac:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_24 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_25 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_24);
		float L_26;
		L_26 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_24, L_25);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_26, NULL);
		goto IL_00c6;
	}

IL_00c0:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(41, L_27);
	}

IL_00c6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___0_reader;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_28);
		String_t* L_30 = L_29;
		V_1 = L_30;
		if (L_30)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mE018075A9CBF433DD67D6B1C06DC55386976A56B_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00c6;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_8)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_10)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_12)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_00c0;
	}

IL_005c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_13 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_14 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_13);
		bool L_15;
		L_15 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_13, L_14);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_15, NULL);
		goto IL_00c6;
	}

IL_0070:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_16 = ___0_reader;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_16);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_17, NULL);
		goto IL_00c6;
	}

IL_007f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_18 = ___0_reader;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_18);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_19, NULL);
		goto IL_00c6;
	}

IL_008e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_20 = ___0_reader;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_20);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_21, NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_22 = ___0_reader;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_22);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_23, NULL);
		goto IL_00c6;
	}

IL_00ac:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_24 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_25 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_24);
		float L_26;
		L_26 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_24, L_25);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_26, NULL);
		goto IL_00c6;
	}

IL_00c0:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(41, L_27);
	}

IL_00c6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___0_reader;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_28);
		String_t* L_30 = L_29;
		V_1 = L_30;
		if (L_30)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m5F928E2AFB611992C4E72785346A31449DDF7DCF_gshared (ES3Type_TriggerModule_tF4954C3B022136EF10DDC579AC551592A9CED196* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00c6;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_8)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_10)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_12)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_00c0;
	}

IL_005c:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_13 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_14 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_13);
		bool L_15;
		L_15 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_13, L_14);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_15, NULL);
		goto IL_00c6;
	}

IL_0070:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_16 = ___0_reader;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_16);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_17, NULL);
		goto IL_00c6;
	}

IL_007f:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_18 = ___0_reader;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_18);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_19, NULL);
		goto IL_00c6;
	}

IL_008e:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_20 = ___0_reader;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_20);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_21, NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_22 = ___0_reader;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_m50D1EC2AC6FBB3FC67E3F28F1E1F2009F53CA08D_RuntimeMethod_var, L_22);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_23, NULL);
		goto IL_00c6;
	}

IL_00ac:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_24 = ___0_reader;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_25 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_24);
		float L_26;
		L_26 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_24, L_25);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_26, NULL);
		goto IL_00c6;
	}

IL_00c0:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_27 = ___0_reader;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(41, L_27);
	}

IL_00c6:
	{
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___0_reader;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_28);
		String_t* L_30 = L_29;
		V_1 = L_30;
		if (L_30)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
