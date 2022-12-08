#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC;
// System.Action`2<Mirror.TransportError,System.String>
struct Action_2_t7CA02FDCF015DE4E9DC9975D398DCAA51F5045D8;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0;
// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_tA3426AE63D0CB0FFC09559B102FDFCE66E559F65;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mirror.MiddlewareTransport
struct MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94;
// System.String
struct String_t;
// Mirror.Transport
struct Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5F146585DE8C066C971EDE51D65E175A238B179F 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Mirror.TransportError
struct TransportError_t9CE3D9E23C327F5E043C22AE4A02912BF7B107A4 
{
public:
	// System.Byte Mirror.TransportError::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransportError_t9CE3D9E23C327F5E043C22AE4A02912BF7B107A4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.TransportError,System.String>
struct Action_2_t7CA02FDCF015DE4E9DC9975D398DCAA51F5045D8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_tA3426AE63D0CB0FFC09559B102FDFCE66E559F65  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Mirror.Transport
struct Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Mirror.Transport::OnClientConnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnClientConnected_6;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnClientDataReceived
	Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * ___OnClientDataReceived_7;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnClientDataSent
	Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * ___OnClientDataSent_8;
	// System.Action`2<Mirror.TransportError,System.String> Mirror.Transport::OnClientError
	Action_2_t7CA02FDCF015DE4E9DC9975D398DCAA51F5045D8 * ___OnClientError_9;
	// System.Action Mirror.Transport::OnClientDisconnected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnClientDisconnected_10;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerConnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnServerConnected_11;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnServerDataReceived
	Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * ___OnServerDataReceived_12;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnServerDataSent
	Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * ___OnServerDataSent_13;
	// System.Action`3<System.Int32,Mirror.TransportError,System.String> Mirror.Transport::OnServerError
	Action_3_tA3426AE63D0CB0FFC09559B102FDFCE66E559F65 * ___OnServerError_14;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerDisconnected
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnServerDisconnected_15;

public:
	inline static int32_t get_offset_of_OnClientConnected_6() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientConnected_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnClientConnected_6() const { return ___OnClientConnected_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnClientConnected_6() { return &___OnClientConnected_6; }
	inline void set_OnClientConnected_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnClientConnected_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnected_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDataReceived_7() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientDataReceived_7)); }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * get_OnClientDataReceived_7() const { return ___OnClientDataReceived_7; }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC ** get_address_of_OnClientDataReceived_7() { return &___OnClientDataReceived_7; }
	inline void set_OnClientDataReceived_7(Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * value)
	{
		___OnClientDataReceived_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDataReceived_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDataSent_8() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientDataSent_8)); }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * get_OnClientDataSent_8() const { return ___OnClientDataSent_8; }
	inline Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC ** get_address_of_OnClientDataSent_8() { return &___OnClientDataSent_8; }
	inline void set_OnClientDataSent_8(Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * value)
	{
		___OnClientDataSent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDataSent_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientError_9() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientError_9)); }
	inline Action_2_t7CA02FDCF015DE4E9DC9975D398DCAA51F5045D8 * get_OnClientError_9() const { return ___OnClientError_9; }
	inline Action_2_t7CA02FDCF015DE4E9DC9975D398DCAA51F5045D8 ** get_address_of_OnClientError_9() { return &___OnClientError_9; }
	inline void set_OnClientError_9(Action_2_t7CA02FDCF015DE4E9DC9975D398DCAA51F5045D8 * value)
	{
		___OnClientError_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientError_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnected_10() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnClientDisconnected_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnClientDisconnected_10() const { return ___OnClientDisconnected_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnClientDisconnected_10() { return &___OnClientDisconnected_10; }
	inline void set_OnClientDisconnected_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnClientDisconnected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnected_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerConnected_11() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerConnected_11)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnServerConnected_11() const { return ___OnServerConnected_11; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnServerConnected_11() { return &___OnServerConnected_11; }
	inline void set_OnServerConnected_11(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnServerConnected_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerConnected_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDataReceived_12() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerDataReceived_12)); }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * get_OnServerDataReceived_12() const { return ___OnServerDataReceived_12; }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 ** get_address_of_OnServerDataReceived_12() { return &___OnServerDataReceived_12; }
	inline void set_OnServerDataReceived_12(Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * value)
	{
		___OnServerDataReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDataReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDataSent_13() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerDataSent_13)); }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * get_OnServerDataSent_13() const { return ___OnServerDataSent_13; }
	inline Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 ** get_address_of_OnServerDataSent_13() { return &___OnServerDataSent_13; }
	inline void set_OnServerDataSent_13(Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * value)
	{
		___OnServerDataSent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDataSent_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerError_14() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerError_14)); }
	inline Action_3_tA3426AE63D0CB0FFC09559B102FDFCE66E559F65 * get_OnServerError_14() const { return ___OnServerError_14; }
	inline Action_3_tA3426AE63D0CB0FFC09559B102FDFCE66E559F65 ** get_address_of_OnServerError_14() { return &___OnServerError_14; }
	inline void set_OnServerError_14(Action_3_tA3426AE63D0CB0FFC09559B102FDFCE66E559F65 * value)
	{
		___OnServerError_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerError_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDisconnected_15() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D, ___OnServerDisconnected_15)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnServerDisconnected_15() const { return ___OnServerDisconnected_15; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnServerDisconnected_15() { return &___OnServerDisconnected_15; }
	inline void set_OnServerDisconnected_15(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnServerDisconnected_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDisconnected_15), (void*)value);
	}
};

struct Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_StaticFields
{
public:
	// Mirror.Transport Mirror.Transport::activeTransport
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * ___activeTransport_4;
	// Mirror.Transport Mirror.Transport::active
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * ___active_5;

public:
	inline static int32_t get_offset_of_activeTransport_4() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_StaticFields, ___activeTransport_4)); }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * get_activeTransport_4() const { return ___activeTransport_4; }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D ** get_address_of_activeTransport_4() { return &___activeTransport_4; }
	inline void set_activeTransport_4(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * value)
	{
		___activeTransport_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeTransport_4), (void*)value);
	}

	inline static int32_t get_offset_of_active_5() { return static_cast<int32_t>(offsetof(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D_StaticFields, ___active_5)); }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * get_active_5() const { return ___active_5; }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D ** get_address_of_active_5() { return &___active_5; }
	inline void set_active_5(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * value)
	{
		___active_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___active_5), (void*)value);
	}
};


// Mirror.MiddlewareTransport
struct MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94  : public Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D
{
public:
	// Mirror.Transport Mirror.MiddlewareTransport::inner
	Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * ___inner_16;

public:
	inline static int32_t get_offset_of_inner_16() { return static_cast<int32_t>(offsetof(MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94, ___inner_16)); }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * get_inner_16() const { return ___inner_16; }
	inline Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D ** get_address_of_inner_16() { return &___inner_16; }
	inline void set_inner_16(Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * value)
	{
		___inner_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inner_16), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m18499670B379DE249BA0A4D8D978335F0C1E0376 (Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * __this, const RuntimeMethod* method);
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
// System.Boolean Mirror.MiddlewareTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_Available_m04784C3FD4B988884F4FAFE48803481B9F7BEA71 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override bool Available() => inner.Available();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Mirror.Transport::Available() */, L_0);
		return L_1;
	}
}
// System.Int32 Mirror.MiddlewareTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MiddlewareTransport_GetMaxPacketSize_m7ED13D448E0EC078C4AF537A43F7F09FCB59450F (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// public override int GetMaxPacketSize(int channelId = 0) => inner.GetMaxPacketSize(channelId);
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 Mirror.Transport::GetMaxPacketSize(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 Mirror.MiddlewareTransport::GetBatchThreshold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MiddlewareTransport_GetBatchThreshold_m4B30B6ABE23B26B67BCB47EAD146C66AFEC196B6 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, int32_t ___channelId0, const RuntimeMethod* method)
{
	{
		// public override int GetBatchThreshold(int channelId = Channels.Reliable) => inner.GetBatchThreshold(channelId);
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(18 /* System.Int32 Mirror.Transport::GetBatchThreshold(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mirror.MiddlewareTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_Shutdown_m360A8AB80F84D308E9DFCA5F222FBF875C5DE61B (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override void Shutdown() => inner.Shutdown();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void Mirror.Transport::Shutdown() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientConnect_mBB5F61C4B21372CD0BB720FA292B145580EEDE11 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, String_t* ___address0, const RuntimeMethod* method)
{
	{
		// inner.OnClientConnected = OnClientConnected;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnClientConnected_6();
		NullCheck(L_0);
		L_0->set_OnClientConnected_6(L_1);
		// inner.OnClientDataReceived = OnClientDataReceived;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_2 = __this->get_inner_16();
		Action_2_tD4220498136D5B8049F5DA471AAB03E317F604AC * L_3 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnClientDataReceived_7();
		NullCheck(L_2);
		L_2->set_OnClientDataReceived_7(L_3);
		// inner.OnClientDisconnected = OnClientDisconnected;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_4 = __this->get_inner_16();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnClientDisconnected_10();
		NullCheck(L_4);
		L_4->set_OnClientDisconnected_10(L_5);
		// inner.OnClientError = OnClientError;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_6 = __this->get_inner_16();
		Action_2_t7CA02FDCF015DE4E9DC9975D398DCAA51F5045D8 * L_7 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnClientError_9();
		NullCheck(L_6);
		L_6->set_OnClientError_9(L_7);
		// inner.ClientConnect(address);
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_8 = __this->get_inner_16();
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Mirror.Transport::ClientConnect(System.String) */, L_8, L_9);
		// }
		return;
	}
}
// System.Boolean Mirror.MiddlewareTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_ClientConnected_mF45C0BD256A0ED5AFF5A1FF5552C9E33BAB7D8D0 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override bool ClientConnected() => inner.ClientConnected();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Mirror.Transport::ClientConnected() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientDisconnect_m68B876AD94D7B82B5D9FE50F071CA1C1D4C9FBAA (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientDisconnect() => inner.ClientDisconnect();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void Mirror.Transport::ClientDisconnect() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientSend_m4AB79A00837E94793B0C96A4B05E2C19F25E648B (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, int32_t ___channelId1, const RuntimeMethod* method)
{
	{
		// public override void ClientSend(ArraySegment<byte> segment, int channelId) => inner.ClientSend(segment, channelId);
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_1 = ___segment0;
		int32_t L_2 = ___channelId1;
		NullCheck(L_0);
		VirtActionInvoker2< ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , int32_t >::Invoke(8 /* System.Void Mirror.Transport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientEarlyUpdate_mCAB3BB763E7B9DCEDA18B6EA429D96E6757CCAB1 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientEarlyUpdate() => inner.ClientEarlyUpdate();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(19 /* System.Void Mirror.Transport::ClientEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientLateUpdate_m561E9CA35FF7A892C499283857A20B7929E9E994 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override void ClientLateUpdate() => inner.ClientLateUpdate();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void Mirror.Transport::ClientLateUpdate() */, L_0);
		return;
	}
}
// System.Boolean Mirror.MiddlewareTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_ServerActive_m850546106885D409922C913683A8E71689F5C271 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override bool ServerActive() => inner.ServerActive();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mirror.Transport::ServerActive() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerStart_m2D7AB7241E7949CF013020A89BCDCC95E417B230 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// inner.OnServerConnected = OnServerConnected;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnServerConnected_11();
		NullCheck(L_0);
		L_0->set_OnServerConnected_11(L_1);
		// inner.OnServerDataReceived = OnServerDataReceived;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_2 = __this->get_inner_16();
		Action_3_t47376D6133EE9BC1FE8FA49DBD664F9E4D3D4AA0 * L_3 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnServerDataReceived_12();
		NullCheck(L_2);
		L_2->set_OnServerDataReceived_12(L_3);
		// inner.OnServerDisconnected = OnServerDisconnected;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_4 = __this->get_inner_16();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnServerDisconnected_15();
		NullCheck(L_4);
		L_4->set_OnServerDisconnected_15(L_5);
		// inner.OnServerError = OnServerError;
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_6 = __this->get_inner_16();
		Action_3_tA3426AE63D0CB0FFC09559B102FDFCE66E559F65 * L_7 = ((Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D *)__this)->get_OnServerError_14();
		NullCheck(L_6);
		L_6->set_OnServerError_14(L_7);
		// inner.ServerStart();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_8 = __this->get_inner_16();
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(12 /* System.Void Mirror.Transport::ServerStart() */, L_8);
		// }
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerStop_m4CE97ADA61D5984EEB20237C6D547B0090E3532E (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerStop() => inner.ServerStop();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(16 /* System.Void Mirror.Transport::ServerStop() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerSend_mEE05334ADCA022F7B48CA3CE4C1D47EE191C0BCB (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, int32_t ___connectionId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment1, int32_t ___channelId2, const RuntimeMethod* method)
{
	{
		// public override void ServerSend(int connectionId, ArraySegment<byte> segment, int channelId) => inner.ServerSend(connectionId, segment, channelId);
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2 = ___segment1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		VirtActionInvoker3< int32_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , int32_t >::Invoke(13 /* System.Void Mirror.Transport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerDisconnect_m0A9CDDC200A2156C147D4DF67DF8E053526E5918 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override void ServerDisconnect(int connectionId) => inner.ServerDisconnect(connectionId);
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void Mirror.Transport::ServerDisconnect(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.String Mirror.MiddlewareTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiddlewareTransport_ServerGetClientAddress_m9E61F0B04DF776A547FC43305F627A07B81D7680 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// public override string ServerGetClientAddress(int connectionId) => inner.ServerGetClientAddress(connectionId);
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(15 /* System.String Mirror.Transport::ServerGetClientAddress(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Uri Mirror.MiddlewareTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * MiddlewareTransport_ServerUri_m10892112D9E61F979965264AD2C1A0D417C749CE (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override Uri ServerUri() => inner.ServerUri();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1;
		L_1 = VirtFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(10 /* System.Uri Mirror.Transport::ServerUri() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerEarlyUpdate_mF50E447FFF9D7BA3B9D59B565425F59635DF7382 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerEarlyUpdate() => inner.ServerEarlyUpdate();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void Mirror.Transport::ServerEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerLateUpdate_m3FE594732B8036B907EFCE68D94A85268AADB6A2 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		// public override void ServerLateUpdate() => inner.ServerLateUpdate();
		Transport_t426FCBB81EC1C49127D5442573876AF4F83E0A1D * L_0 = __this->get_inner_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(22 /* System.Void Mirror.Transport::ServerLateUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport__ctor_m09402EB51CB9D69FE962B85742A35A91DB98D9A9 (MiddlewareTransport_tDA6AA41C1E83E3F11AAC9C4C1CD5DBB4CF8C4D94 * __this, const RuntimeMethod* method)
{
	{
		Transport__ctor_m18499670B379DE249BA0A4D8D978335F0C1E0376(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
